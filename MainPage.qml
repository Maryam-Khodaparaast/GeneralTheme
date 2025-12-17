import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14
import QtQuick.Window 2.12

ColumnLayout {
    anchors.fill: parent
    anchors.margins: 18
    spacing: 14

    CustomTabbar {
        id: tabs
         Layout.fillWidth: true
         Layout.preferredHeight: 44
//         Layout.rightMargin: 14
         theme: Ui_property
         model: ["Overview", "Activity", "Settings"]

         onCurrentIndexChanged: view.currentIndex = currentIndex
     }

     SwipeView {
         id: view
         Layout.fillWidth: true
         Layout.fillHeight: true
         clip: true
         onCurrentIndexChanged: tabs.currentIndex = currentIndex

        Item {
            ColumnLayout {
                anchors.fill: parent
                spacing: 14

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: 140
                    radius: 22
                    color: Qt.rgba(1,1,1,0.06)
                    border.color: Qt.rgba(1,1,1,0.06)

                    Column {
                        anchors.left: parent.left
                        anchors.leftMargin: 18
                        anchors.verticalCenter: parent.verticalCenter
                        spacing: 6
                        Label { text: "Welcome back"; color: muted; font.pixelSize: 14 }
                        Label { text: "Overview"; color: text; font.pixelSize: 22; font.bold: true }
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    radius: 22
                    color: card
                    border.color: Qt.rgba(1,1,1,0.06)

                    Label {
                        anchors.centerIn: parent
                        text: "Put your overview widgets here"
                        color: muted
                    }
                }
            }
        }

        Item {
            Rectangle {
                anchors.fill: parent
                radius: 22
                color: card
                border.color: Qt.rgba(1,1,1,0.06)

                Label { anchors.centerIn: parent; text: "Activity page"; color: muted }
            }
        }

        Item {
            Rectangle {
                anchors.fill: parent
                radius: 22
                color: card
                border.color: Qt.rgba(1,1,1,0.06)

                Column {
                    anchors.centerIn: parent
                    spacing: 10
                    Label { text: "Settings"; color: text; font.pixelSize: 20; font.bold: true }
                    Switch { text: "Enable notifications" }
                }
            }
        }
    }
}
