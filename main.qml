import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    visible: true
    width: 1500
    height: 600
    title: qsTr("Hello World")

    property int colorHeight: 40

    property var themeList: [
        { name: "rangerGreen",       t: Themes.rangerGreen },
        { name: "navalOps",          t: Themes.navalOps },
        { name: "desertCoyote",      t: Themes.desertCoyote },
        { name: "arcticCommand",     t: Themes.arcticCommand },
        { name: "blackoutTactical",  t: Themes.blackoutTactical },
        { name: "oceanBlue",         t: Themes.oceanBlue },
        { name: "cyanWave",          t: Themes.cyanWave },
        { name: "tealLagoon",        t: Themes.tealLagoon },
        { name: "emeraldGreen",      t: Themes.emeraldGreen },
        { name: "limeZest",          t: Themes.limeZest },
        { name: "darkRed",          t: Themes.darkRed },
        { name: "goldenAmber",       t: Themes.goldenAmber },
        { name: "sunsetOrange",      t: Themes.sunsetOrange },
        { name: "rubyRed",           t: Themes.rubyRed },
        { name: "hotPink",           t: Themes.hotPink },
        { name: "royalPurple",       t: Themes.royalPurple },
        { name: "indigoNight",       t: Themes.indigoNight },
        { name: "slateNeutral",      t: Themes.slateNeutral },
        { name: "nordFrost",      t: Themes.nordFrost },
        { name: "solarizedBlue",      t: Themes.solarizedBlue },
        { name: "draculaPurple",      t: Themes.draculaPurple },
        { name: "gruvboxAqua",      t: Themes.gruvboxAqua },
        { name: "rosePineFoam",      t: Themes.rosePineFoam },
        { name: "kanagawaWave",      t: Themes.kanagawaWave },
        { name: "githubBlue",      t: Themes.githubBlue },
        { name: "nordAuroraRed",      t: Themes.nordAuroraRed },
        { name: "lightSkyBlue",      t: Themes.lightSkyBlue },
        { name: "lightMint",      t: Themes.lightMint },
        { name: "lightLavender",      t: Themes.lightLavender},
        { name: "lightPeach",      t: Themes.lightPeach },
        { name: "lightRose",      t: Themes.lightRose },
        { name: "lightRed",      t: Themes.lightRed },
        { name: "lightLemon",       t: Themes.lightLemon },
        { name: "lightCoral",       t: Themes.lightCoral },
        { name: "lightAqua",        t: Themes.lightAqua },
        { name: "lightTeal",        t: Themes.lightTeal },
        { name: "lightOlive",       t: Themes.lightOlive },
        { name: "lightSand",        t: Themes.lightSand },
        { name: "lightSlateBlue",   t: Themes.lightSlateBlue },
        { name: "lightGrayNeutral", t: Themes.lightGrayNeutral }

    ]


    Flickable {
        id: flick
        anchors.fill: parent
        clip: true
        boundsBehavior: Flickable.StopAtBounds
        flickableDirection: Flickable.HorizontalFlick

        contentWidth: rowContent.implicitWidth
        contentHeight: height

        ScrollBar.horizontal: ScrollBar { policy: ScrollBar.AlwaysOn }

        Row {
            id: rowContent
            spacing: 10
            height: flick.height

            Repeater {
                model: themeList

                delegate: Row {
                    id: themeRow
                    spacing: 10
                    height: rowContent.height

                    property int outerIndex: index
                    property string themeName: modelData.name
                    property var themeObj: modelData.t

                    property var palette: [
                        themeObj.backgroundColor,
                        themeObj.borderColor,
                        themeObj.buttonReleasedColor,
                        themeObj.buttonHoveredColor,
                        themeObj.buttonSelectedColor,
                        themeObj.sectionBackgroundColor,
                        themeObj.sectionRowColor,
                        themeObj.inputBoxColor,
                        themeObj.loginButtonColor,
                        themeObj.titleColor,
                        themeObj.firstExtra,
                        themeObj.secondExtra
                    ]

                    Column {
                        padding: 10
                        spacing: 3

                        Text { text: qsTr(themeRow.themeName) }

                        Repeater {
                            model: themeRow.palette.length
                            Rectangle {
                                width: 100
                                height: colorHeight
                                radius: 6
                                color: themeRow.palette[index]
                            }
                        }
                    }

                    Rectangle {
                        width: 3
                        height: parent.height
                        color: "black"
                        visible: themeRow.outerIndex < (themeList.length - 1)
                    }
                }
            }
        }
    }
}
