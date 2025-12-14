import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    visible: true
    width: 1500
    height: 600
    title: "Theme Preview"
    property int colorHeight: 40
    property var palette: [
        "backgroundColor",
        "borderColor",
        "buttonReleasedColor",
        "buttonHoveredColor",
        "buttonSelectedColor",
        "sectionBackgroundColor",
        "sectionRowColor",
        "inputBoxColor",
        "loginButtonColor",
        "titleColor",
        "firstExtra",
        "secondExtra"
    ]

    property var themeModel: [
        "rangerGreen",
        "navalOps",
        "desertCoyote",
        "arcticCommand",
        "blackoutTactical",
        "oceanBlue",
        "cyanWave",
        "tealLagoon",
        "emeraldGreen",
        "limeZest",
        "darkRed",
        "goldenAmber",
        "sunsetOrange",
        "rubyRed",
        "hotPink",
        "royalPurple",
        "indigoNight",
        "slateNeutral",
        "nordFrost",
        "solarizedBlue",
        "draculaPurple",
        "gruvboxAqua",
        "rosePineFoam",
        "kanagawaWave",
        "githubBlue",
        "nordAuroraRed",
        "lightSkyBlue",
        "lightMint",
        "lightLavender",
        "lightPeach",
        "lightRose",
        "lightRed",
        "lightLemon",
        "lightCoral",
        "lightAqua",
        "lightTeal",
        "lightOlive",
        "lightSand",
        "lightSlateBlue",
        "lightGrayNeutral"
    ]
Row{
    spacing: 10
    anchors.fill: parent
    ComboBox {
        id: comboModel
        width: 300
        anchors.margins: 20
        model: themeModel

        onCurrentIndexChanged: {
            switch (currentIndex) {
            case 0:  Ui_property.rangerGreenTheme(); break
            case 1:  Ui_property.navalOpsTheme(); break
            case 2:  Ui_property.desertCoyoteTheme(); break
            case 3:  Ui_property.arcticCommandTheme(); break
            case 4:  Ui_property.blackoutTacticalTheme(); break
            case 5:  Ui_property.oceanBlueTheme(); break
            case 6:  Ui_property.cyanWaveTheme(); break
            case 7:  Ui_property.tealLagoonTheme(); break
            case 8:  Ui_property.emeraldGreenTheme(); break
            case 9:  Ui_property.limeZestTheme(); break
            case 10: Ui_property.darkRedTheme(); break
            case 11: Ui_property.goldenAmberTheme(); break
            case 12: Ui_property.sunsetOrangeTheme(); break
            case 13: Ui_property.rubyRedTheme(); break
            case 14: Ui_property.hotPinkTheme(); break
            case 15: Ui_property.royalPurpleTheme(); break
            case 16: Ui_property.indigoNightTheme(); break
            case 17: Ui_property.slateNeutralTheme(); break
            case 18: Ui_property.nordFrostTheme(); break
            case 19: Ui_property.solarizedBlueTheme(); break
            case 20: Ui_property.draculaPurpleTheme(); break
            case 21: Ui_property.gruvboxAquaTheme(); break
            case 22: Ui_property.rosePineFoamTheme(); break
            case 23: Ui_property.kanagawaWaveTheme(); break
            case 24: Ui_property.githubBlueTheme(); break
            case 25: Ui_property.nordAuroraRedTheme(); break
            case 26: Ui_property.lightSkyBlueTheme(); break
            case 27: Ui_property.lightMintTheme(); break
            case 28: Ui_property.lightLavenderTheme(); break
            case 29: Ui_property.lightPeachTheme(); break
            case 30: Ui_property.lightRoseTheme(); break
            case 31: Ui_property.lightRedTheme(); break
            case 32: Ui_property.lightLemonTheme(); break
            case 33: Ui_property.lightCoralTheme(); break
            case 34: Ui_property.lightAquaTheme(); break
            case 35: Ui_property.lightTealTheme(); break
            case 36: Ui_property.lightOliveTheme(); break
            case 37: Ui_property.lightSandTheme(); break
            case 38: Ui_property.lightSlateBlueTheme(); break
            case 39: Ui_property.lightGrayNeutralTheme(); break
            }
        }
    }

    Column {
        anchors.margins: 20
        spacing: 6

        Text {
            text: "Theme: " + comboModel.currentText
            font.bold: true
            font.pixelSize: 16
        }

        Repeater {
            model: palette.length

            Rectangle {
                width: 220
                height: colorHeight
                radius: 6
                color: Ui_property[palette[index]]
                border.color: "#66000000"
                border.width: 1

                Row {
                    anchors.fill: parent
                    anchors.margins: 8
                    spacing: 10

                    Text {
                        text: palette[index]
                        font.pixelSize: 12
                        color: "#FFFFFF"
                        verticalAlignment: Text.AlignVCenter
                    }

                    Text {
                        text: Ui_property[palette[index]]
                        font.pixelSize: 12
                        color: "#FFFFFF"
                        verticalAlignment: Text.AlignVCenter
                    }
                }
            }
        }
    }
}
    Rectangle {
        anchors.fill: parent
        z: -1
        color: Ui_property.baseColor
    }

}
