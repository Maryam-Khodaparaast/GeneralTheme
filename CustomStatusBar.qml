import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14

Rectangle {
    id: statusBar
    width: parent ? parent.width : 640
    height: 56

    property var theme: Ui_property

    // Public API
    property string leftText: "Ready"
    property string centerText: ""
    property string rightText: Qt.formatDateTime(new Date(), "hh:mm")

    color: theme.sectionBackgroundColor

    Timer {
        interval: 60000
        running: true
        repeat: true
        onTriggered: statusBar.rightText = Qt.formatDateTime(new Date(), "hh:mm")
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 6
        spacing: 6

        // TOP ROW: status texts
        RowLayout {
            Layout.fillWidth: true
            Layout.preferredHeight: 20
            spacing: 8

            Label {
                Layout.fillWidth: true
                text: statusBar.leftText
                color: theme.sectionRowFontColor
                elide: Text.ElideRight
            }

            Label {
                Layout.preferredWidth: parent.width * 0.3
                horizontalAlignment: Text.AlignHCenter
                text: statusBar.centerText
                color: theme.lableReleasedColor
                elide: Text.ElideRight
            }

            Label {
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                text: statusBar.rightText
                color: theme.sectionRowFontColor
                elide: Text.ElideLeft
            }
        }

        // BOTTOM ROW: your controls
        RowLayout {
            Layout.fillWidth: true
            Layout.preferredHeight: 24
            spacing: 10

            CustomComboBox {
                Layout.preferredWidth: 320
                theme: statusBar.theme
                model: fontFamilies.families

                lockFont: true
                lockedFontFamily: win.font.family

                onActivated: fontFamilies.currentFamily = textAt(index)
            }

            ThemeSelectionPart { }

            Item { Layout.fillWidth: true } // pushes items left if needed
        }
    }

    // Top border line
    Rectangle {
        anchors.top: parent.top
        width: parent.width
        height: 1
        color: theme.sectionRowBorder
    }
}
