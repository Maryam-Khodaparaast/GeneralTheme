import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14
import QtQuick.Window 2.12



ApplicationWindow {
    id: win
    visible: true
    width: 1024
    height: 768
    title: " TabView"

    flags: Qt.Window | Qt.FramelessWindowHint
    header: CustomTitleBar {
        window: win
        theme: Ui_property
        titleText: win.title
    }


    Component.onCompleted: {
        if (fontFamilies.currentFamily && fontFamilies.currentFamily.length > 0)
            Qt.application.font.family = fontFamilies.currentFamily
        Qt.application.font.pixelSize = 14


    }

    Connections {
        target: fontFamilies
        function onCurrentFamilyChanged(fam) {
            Qt.application.font.family = fam
        }
    }

    readonly property color accent: Ui_property.firstExtra
    readonly property color bg:     Ui_property.baseColor
    readonly property color card:   Ui_property.sectionBackgroundColor
    readonly property color text:   Ui_property.titleFontColor
    readonly property color muted:  Ui_property.lableReleasedColor

    color: bg

    MainPage{
    width: parent.width
    height: parent.height - statusBar.height
    }
    CustomStatusBar{
        id: statusBar
        anchors.bottom: parent.bottom
    }
}
