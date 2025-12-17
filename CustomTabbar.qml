import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14

Item {
    id: root
    property var theme: Ui_property
    property var model: ["Overview", "Activity", "Settings"]
    property int currentIndex: 0
    implicitHeight: 44
    implicitWidth: 420
    property int padding: 6
    property int radius: 0
    readonly property int count: (model && model.length) ? model.length : 0
    readonly property real segW: count > 0 ? (inner.width / count) : 0

    Rectangle {
        id: frame
        anchors.fill: parent
        radius: 10
        color: theme.sectionBackgroundColor
        border.color: theme.borderColor
        border.width: 1
    }

    Item {
        id: inner
        anchors.fill: parent
        anchors.margins: root.padding
        clip: false

        Rectangle {
            visible: root.count > 0
            x: root.currentIndex * root.segW
            y: 2
            width: root.segW
            height: inner.height
            radius: root.radius - 4
            color: "#000000"
            opacity: 0.20
            z: 0
            Behavior on x { NumberAnimation { duration: 180; easing.type: Easing.OutCubic } }
        }

        Repeater {
            model: root.model

            Item {
                id: seg
                x: index * root.segW
                width: root.segW
                height: inner.height
                property bool hovered: false
                readonly property bool selected: index === root.currentIndex

                MouseArea {
                    anchors.fill: parent
                    hoverEnabled: true
                    onEntered: seg.hovered = true
                    onExited: seg.hovered = false
                    onClicked: root.currentIndex = index
                }

                Rectangle {
                    anchors.fill: parent

                    radius: (index === 0 || index === root.count - 1) ? (root.radius - 4) : 0

                    color: seg.selected
                           ? root.theme.buttonSelectedColor
                           : (seg.hovered ? root.theme.buttonHoveredColor
                                          : root.theme.buttonReleasedColor)

                    border.width: 1
                    border.color: root.theme.borderColor

                    y: pressedArea.pressed ? 2 : 0
                    Behavior on color { ColorAnimation { duration: 120 } }
                    Behavior on y     { NumberAnimation { duration: 80 } }

                    Rectangle {
                        anchors.left: parent.left
                        anchors.right: parent.right
                        anchors.top: parent.top
                        height: parent.height * 0.45
                        radius: parent.radius
                        color: "#FFFFFF"
                        opacity: seg.selected ? 0.14 : (seg.hovered ? 0.10 : 0.06)
                        clip: true
                    }

                    Text {
                        anchors.centerIn: parent
                        text: modelData
                        font.pixelSize: 14
                        font.bold: seg.selected
                        color: seg.selected
                               ? root.theme.buttonSelectedFontColor
                               : (seg.hovered ? root.theme.buttonHoverFontColor
                                              : root.theme.buttonReleaseFontColor)
                    }

                    MouseArea {
                        id: pressedArea
                        anchors.fill: parent
                        acceptedButtons: Qt.LeftButton
                        hoverEnabled: false
                        onClicked: root.currentIndex = index
                    }
                }
            }
        }
        Repeater {
            model: Math.max(0, root.count - 1)
            Rectangle {
                x: (index + 1) * root.segW
                y: 0
                width: 1
                height: inner.height
                color: root.theme.borderColor
                opacity: 0.6
                z: 5
            }
        }
    }
}
