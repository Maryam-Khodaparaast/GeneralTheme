import QtQuick 2.12
import QtQuick.Controls 2.12

ComboBox {
    id: fontCombo
    width: 100
    height: 32
    model: fontFamilies.families

    font.family: win.font.family
    font.pixelSize: win.font.pixelSize

    delegate: ItemDelegate {
        width: fontCombo.width

        contentItem: Text {
            text: modelData
            elide: Text.ElideRight
            verticalAlignment: Text.AlignVCenter

            font.family: modelData
            font.pixelSize: win.font.pixelSize
        }
    }
    onActivated: fontFamilies.currentFamily = currentText
}
