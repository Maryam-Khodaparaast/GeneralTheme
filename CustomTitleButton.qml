import QtQuick 2.12
import QtQuick.Controls 2.12

ToolButton {
    id: btn

    property var theme
    property color idleColor: "transparent"
    property color hoverColor: theme ? theme.buttonHoveredColor : "#404040"
    property color downColor: theme ? theme.buttonSelectedColor : "#606060"
    property color textColor: theme ? theme.titleFontColor : "white"

    implicitWidth: 34
    implicitHeight: 26
    hoverEnabled: true

    background: Rectangle {
        radius: 8
        color: btn.down ? btn.downColor : (btn.hovered ? btn.hoverColor : btn.idleColor)
        border.color: theme ? theme.borderColor : "transparent"
        border.width: 1
    }

    contentItem: Text {
        text: btn.text
        color: btn.textColor
        font.pixelSize: 14
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
