import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12

Rectangle {
    id: bar
    height: 38
    width: parent ? parent.width : 640

    property var theme
    property Window window
    property string titleText: ""

    color: theme ? theme.titleColor : "#202020"
    border.color: theme ? theme.borderColor : "#404040"
    border.width: 1

    function toggleMaxRestore() {
        if (!window) return
        if (window.visibility === Window.Maximized) window.showNormal()
        else window.showMaximized()
    }

    RowLayout {
        anchors.fill: parent
        anchors.margins: 8
        spacing: 8

        Item {
            id: dragArea
            Layout.fillWidth: true
            Layout.fillHeight: true

            Text {
                anchors.verticalCenter: parent.verticalCenter
                text: bar.titleText
                color: theme ? theme.titleFontColor : "white"
                elide: Text.ElideRight
                font.pixelSize: 14
                font.bold: true
            }

            property point pressPos
            property point winPos

            MouseArea {
                anchors.fill: parent
                acceptedButtons: Qt.LeftButton
                preventStealing: true
                cursorShape: Qt.SizeAllCursor

                property point pressGlobal
                property point winPos
                property bool dragging: false
                readonly property int dragThreshold: 6

                function globalPos(m) {
                    return dragArea.mapToGlobal(m.x, m.y)
                }

                onPressed: {
                    if (!bar.window) return

                    dragging = false
                    pressGlobal = globalPos(mouse)
                    winPos      = Qt.point(bar.window.x, bar.window.y)
                }

                onPositionChanged: {
                    if (!pressed || !bar.window) return

                    var cur = globalPos(mouse)
                    var dx = cur.x - pressGlobal.x
                    var dy = cur.y - pressGlobal.y

                    if (!dragging && (Math.abs(dx) > dragThreshold || Math.abs(dy) > dragThreshold)) {
                        dragging = true

                        if (bar.window.visibility === Window.Maximized) {
                            bar.window.showNormal()
                            winPos      = Qt.point(bar.window.x, bar.window.y)
                            pressGlobal = globalPos(mouse)
                            dx = 0; dy = 0
                        }
                    }

                    if (!dragging) return

                    bar.window.x = winPos.x + dx
                    bar.window.y = winPos.y + dy
                }

                onReleased: dragging = false
                onDoubleClicked: bar.toggleMaxRestore()
            }


        }

        Row {
            spacing: 6
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter

            CustomTitleButton {
                theme: bar.theme
                text: "—"
                onClicked: if (bar.window) bar.window.showMinimized()
            }

            CustomTitleButton {
                theme: bar.theme
                text: (bar.window && bar.window.visibility === Window.Maximized) ? "❐" : "□"
                onClicked: bar.toggleMaxRestore()
            }

            CustomTitleButton {
                theme: bar.theme
                text: "✕"
                hoverColor: "#C74B4B"
                downColor:  "#A33A3A"
                onClicked: if (bar.window) bar.window.close()
            }
        }
    }
}

