#ifndef UI_PROPERTY_H
#define UI_PROPERTY_H

#include <QObject>

class Ui_property : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString baseColor READ baseColor WRITE setBaseColor NOTIFY baseColorChanged)
    Q_PROPERTY(QString backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged)
    Q_PROPERTY(QString borderColor READ borderColor WRITE setBorderColor NOTIFY borderColorChanged)

    Q_PROPERTY(QString buttonReleasedColor READ buttonReleasedColor WRITE setButtonReleasedColor NOTIFY buttonReleasedColorChanged)
    Q_PROPERTY(QString buttonReleaseFontColor READ buttonReleaseFontColor WRITE setButtonReleaseFontColor NOTIFY buttonReleaseFontColorChanged)
    Q_PROPERTY(QString buttonHoveredColor READ buttonHoveredColor WRITE setButtonHoveredColor NOTIFY buttonHoveredColorChanged)
    Q_PROPERTY(QString buttonHoverFontColor READ buttonHoverFontColor WRITE setButtonHoverFontColor NOTIFY buttonHoverFontColorChanged)
    Q_PROPERTY(QString buttonSelectedColor READ buttonSelectedColor WRITE setButtonSelectedColor NOTIFY buttonSelectedColorChanged)
    Q_PROPERTY(QString buttonSelectedFontColor READ buttonSelectedFontColor WRITE setButtonSelectedFontColor NOTIFY buttonSelectedFontColorChanged)

    Q_PROPERTY(QString sectionBackgroundColor READ sectionBackgroundColor WRITE setSectionBackgroundColor NOTIFY sectionBackgroundColorChanged)
    Q_PROPERTY(QString sectionRowColor READ sectionRowColor WRITE setSectionRowColor NOTIFY sectionRowColorChanged)
    Q_PROPERTY(QString sectionRowBorder READ sectionRowBorder WRITE setSectionRowBorder NOTIFY sectionRowBorderChanged)
    Q_PROPERTY(QString sectionRowFontColor READ sectionRowFontColor WRITE setSectionRowFontColor NOTIFY sectionRowFontColorChanged)


    Q_PROPERTY(QString inputBoxColor READ inputBoxColor WRITE setInputBoxColor NOTIFY inputBoxColorChanged)
    Q_PROPERTY(QString loginButtonColor READ loginButtonColor WRITE setLoginButtonColor NOTIFY loginButtonColorChanged)

    Q_PROPERTY(QString selectFontColor READ selectFontColor WRITE setSelectFontColor NOTIFY selectFontColorChanged)
    Q_PROPERTY(QString selectBackgroundColor READ selectBackgroundColor WRITE setSelectBackgroundColor NOTIFY selectBackgroundColorChanged)


    Q_PROPERTY(QString lableSelectedColor READ lableSelectedColor WRITE setLableSelectedColor NOTIFY lableSelectedColorChanged)
    Q_PROPERTY(QString lableReleasedColor READ lableReleasedColor WRITE setLableReleasedColor NOTIFY lableReleasedColorChanged)

    Q_PROPERTY(QString titleColor READ titleColor WRITE setTitleColor NOTIFY titleColorChanged)
    Q_PROPERTY(QString titleFontColor READ titleFontColor WRITE setTitleFontColor NOTIFY titleFontColorChanged)


    Q_PROPERTY(QString firstExtra READ firstExtra WRITE setFirstExtra NOTIFY firstExtraChanged)
    Q_PROPERTY(QString secondExtra READ secondExtra WRITE setsecondExtra NOTIFY secondExtraChanged)



    QString m_backgroundColor;

QString m_borderColor;

QString m_buttonReleasedColor;

QString m_buttonReleaseFontColor;

QString m_buttonHoveredColor;

QString m_buttonHoverFontColor;

QString m_buttonSelectedColor;

QString m_buttonSelectedFontColor;

QString m_sectionBackgroundColor;

QString m_sectionRowColor;

QString m_sectionRowBorder;

QString m_sectionRowFontColor;

QString m_inputBoxColor;

QString m_loginButtonColor;

QString m_selectFontColor;

QString m_selectBackgroundColor;

QString m_lableSelectedColor;

QString m_lableReleasedColor;

QString m_titleColor;

QString m_titleFontColor;

QString m_firstExtra;

QString m_secondExtra;

QString m_baseColor;

public:
    explicit Ui_property(QObject *parent = nullptr);

QString backgroundColor() const;

QString borderColor() const;

QString buttonReleasedColor() const;

QString buttonReleaseFontColor() const;

QString buttonHoveredColor() const;

QString buttonHoverFontColor() const;

QString buttonSelectedColor() const;

QString buttonSelectedFontColor() const;

QString sectionBackgroundColor() const;

QString sectionRowColor() const;

QString sectionRowBorder() const;

QString sectionRowFontColor() const;

QString inputBoxColor() const;

QString loginButtonColor() const;

QString selectFontColor() const;

QString selectBackgroundColor() const;

QString lableSelectedColor() const;

QString lableReleasedColor() const;

QString titleColor() const;

QString titleFontColor() const;

QString firstExtra() const;

QString secondExtra() const;





Q_INVOKABLE void rangerGreenTheme();
Q_INVOKABLE void navalOpsTheme();
Q_INVOKABLE void desertCoyoteTheme();
Q_INVOKABLE void arcticCommandTheme();
Q_INVOKABLE void blackoutTacticalTheme();
Q_INVOKABLE void oceanBlueTheme();
Q_INVOKABLE void cyanWaveTheme();
Q_INVOKABLE void tealLagoonTheme();
Q_INVOKABLE void emeraldGreenTheme();
Q_INVOKABLE void limeZestTheme();
Q_INVOKABLE void darkRedTheme();
Q_INVOKABLE void goldenAmberTheme();
Q_INVOKABLE void sunsetOrangeTheme();
Q_INVOKABLE void rubyRedTheme();
Q_INVOKABLE void hotPinkTheme();
Q_INVOKABLE void royalPurpleTheme();
Q_INVOKABLE void indigoNightTheme();
Q_INVOKABLE void slateNeutralTheme();
Q_INVOKABLE void nordFrostTheme();
Q_INVOKABLE void solarizedBlueTheme();
Q_INVOKABLE void draculaPurpleTheme();
Q_INVOKABLE void gruvboxAquaTheme();
Q_INVOKABLE void rosePineFoamTheme();
Q_INVOKABLE void kanagawaWaveTheme();
Q_INVOKABLE void githubBlueTheme();
Q_INVOKABLE void nordAuroraRedTheme();
Q_INVOKABLE void lightSkyBlueTheme();
Q_INVOKABLE void lightMintTheme();
Q_INVOKABLE void lightLavenderTheme();
Q_INVOKABLE void lightPeachTheme();
Q_INVOKABLE void lightRoseTheme();
Q_INVOKABLE void lightRedTheme();
Q_INVOKABLE void lightLemonTheme();
Q_INVOKABLE void lightCoralTheme();
Q_INVOKABLE void lightAquaTheme();
Q_INVOKABLE void lightTealTheme();
Q_INVOKABLE void lightOliveTheme();
Q_INVOKABLE void lightSandTheme();
Q_INVOKABLE void lightSlateBlueTheme();
Q_INVOKABLE void lightGrayNeutralTheme();




QString baseColor() const
{
    return m_baseColor;
}

public slots:
void setBackgroundColor(QString backgroundColor);

void setBorderColor(QString borderColor);

void setButtonReleasedColor(QString buttonReleasedColor);

void setButtonReleaseFontColor(QString buttonReleaseFontColor);

void setButtonHoveredColor(QString buttonHoveredColor);

void setButtonHoverFontColor(QString buttonHoverFontColor);

void setButtonSelectedColor(QString buttonSelectedColor);

void setButtonSelectedFontColor(QString buttonSelectedFontColor);

void setSectionBackgroundColor(QString sectionBackgroundColor);

void setSectionRowColor(QString sectionRowColor);

void setSectionRowBorder(QString sectionRowBorder);

void setSectionRowFontColor(QString sectionRowFontColor);

void setInputBoxColor(QString inputBoxColor);

void setLoginButtonColor(QString loginButtonColor);

void setSelectFontColor(QString selectFontColor);

void setSelectBackgroundColor(QString selectBackgroundColor);

void setLableSelectedColor(QString lableSelectedColor);

void setLableReleasedColor(QString lableReleasedColor);

void setTitleColor(QString titleColor);

void setTitleFontColor(QString titleFontColor);

void setFirstExtra(QString firstExtra);

void setsecondExtra(QString secondExtra);

void setBaseColor(QString baseColor);

signals:

void backgroundColorChanged(QString backgroundColor);
void borderColorChanged(QString borderColor);
void buttonReleasedColorChanged(QString buttonReleasedColor);
void buttonReleaseFontColorChanged(QString buttonReleaseFontColor);
void buttonHoveredColorChanged(QString buttonHoveredColor);
void buttonHoverFontColorChanged(QString buttonHoverFontColor);
void buttonSelectedColorChanged(QString buttonSelectedColor);
void buttonSelectedFontColorChanged(QString buttonSelectedFontColor);
void sectionBackgroundColorChanged(QString sectionBackgroundColor);
void sectionRowColorChanged(QString sectionRowColor);
void sectionRowBorderChanged(QString sectionRowBorder);
void sectionRowFontColorChanged(QString sectionRowFontColor);
void inputBoxColorChanged(QString inputBoxColor);
void loginButtonColorChanged(QString loginButtonColor);
void selectFontColorChanged(QString selectFontColor);
void selectBackgroundColorChanged(QString selectBackgroundColor);
void lableSelectedColorChanged(QString lableSelectedColor);
void lableReleasedColorChanged(QString lableReleasedColor);
void titleColorChanged(QString titleColor);
void titleFontColorChanged(QString titleFontColor);
void firstExtraChanged(QString firstExtra);
void secondExtraChanged(QString secondExtra);
void baseColorChanged(QString baseColor);
};

#endif // UI_PROPERTY_H
