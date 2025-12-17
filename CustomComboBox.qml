import QtQuick 2.12
import QtQuick.Controls 2.12

ComboBox {
    id: control

    // Pass Ui_property in, or it will use the global Ui_property
    property var theme: Ui_property

    // If true, the combobox text stays in lockedFontFamily (won't follow app font changes)
    property bool lockFont: false
    property string lockedFontFamily: ""   // e.g. win.font.family

    // Sizes
    implicitWidth: 300
    implicitHeight: 24
    padding: 10

    // ---- Button (closed state) ----
    background: Rectangle {
        radius: 8
        border.width: 1
        border.color: control.theme.borderColor

        color: control.pressed
               ? control.theme.buttonSelectedColor
               : (control.hovered ? control.theme.buttonHoveredColor
                                  : control.theme.selectBackgroundColor)
    }

    contentItem: Text {
        leftPadding: 12
        rightPadding: 28
        text: control.displayText
        elide: Text.ElideRight
        verticalAlignment: Text.AlignVCenter

        color: control.theme.selectFontColor
        font.pixelSize: control.font.pixelSize

        font.family: (control.lockFont && control.lockedFontFamily !== "")
                     ? control.lockedFontFamily
                     : control.font.family
    }

    indicator: Canvas {
        id: arrow
        width: 18
        height: 18
        anchors.right: parent.right
        anchors.rightMargin: 10
        anchors.verticalCenter: parent.verticalCenter

        onPaint: {
            var ctx = getContext("2d")
            ctx.clearRect(0, 0, width, height)

            ctx.fillStyle = control.theme.selectFontColor
            ctx.beginPath()
            ctx.moveTo(4, 6)
            ctx.lineTo(width - 4, 6)
            ctx.lineTo(width / 2, height - 5)
            ctx.closePath()
            ctx.fill()
        }

        Connections {
            target: control.theme
            // repaint when theme changes (any signal is fine; easiest is repaint on popup)
            function onSelectFontColorChanged() { arrow.requestPaint() }
        }
    }

    // ---- Popup (open state) ----
    popup: Popup {
        y: control.height + 6
        width: control.width
        implicitHeight: Math.min(contentItem.implicitHeight, 260)
        padding: 6

        background: Rectangle {
            radius: 8
            color: control.theme.sectionBackgroundColor
            border.color: control.theme.borderColor
            border.width: 1
        }

        contentItem: ListView {
            id: lv
            clip: true
            implicitHeight: contentHeight
            model: control.delegateModel
            currentIndex: control.highlightedIndex

            ScrollBar.vertical: ScrollBar {
                policy: ScrollBar.AsNeeded   // show only if needed
            }
        }
    }

    // ---- Items ----
    delegate: ItemDelegate {
        width: control.popup.width - 12
        leftPadding: 12
        rightPadding: 12
        hoverEnabled: true

        highlighted: control.highlightedIndex === index

        background: Rectangle {
            radius: 6
            color: highlighted
                   ? control.theme.buttonSelectedColor
                   : (hovered ? control.theme.sectionRowColor : "transparent")
            border.color: highlighted ? control.theme.sectionRowBorder : "transparent"
            border.width: highlighted ? 1 : 0
        }

        contentItem: Text {
            text: modelData
            elide: Text.ElideRight
            verticalAlignment: Text.AlignVCenter

            color: highlighted ? control.theme.buttonSelectedFontColor
                               : control.theme.sectionRowFontColor

            font.pixelSize: control.font.pixelSize

            font.family: (control.lockFont && control.lockedFontFamily !== "")
                         ? control.lockedFontFamily
                         : control.font.family
        }
    }
}
