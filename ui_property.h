#ifndef UI_PROPERTY_H
#define UI_PROPERTY_H

#include <QObject>

class Ui_property : public QObject
{
    Q_OBJECT
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

public:
    explicit Ui_property(QObject *parent = nullptr);

QString backgroundColor() const
{
    return m_backgroundColor;
}

QString borderColor() const
{
    return m_borderColor;
}

QString buttonReleasedColor() const
{
    return m_buttonReleasedColor;
}

QString buttonReleaseFontColor() const
{
    return m_buttonReleaseFontColor;
}

QString buttonHoveredColor() const
{
    return m_buttonHoveredColor;
}

QString buttonHoverFontColor() const
{
    return m_buttonHoverFontColor;
}

QString buttonSelectedColor() const
{
    return m_buttonSelectedColor;
}

QString buttonSelectedFontColor() const
{
    return m_buttonSelectedFontColor;
}

QString sectionBackgroundColor() const
{
    return m_sectionBackgroundColor;
}

QString sectionRowColor() const
{
    return m_sectionRowColor;
}

QString sectionRowBorder() const
{
    return m_sectionRowBorder;
}

QString sectionRowFontColor() const
{
    return m_sectionRowFontColor;
}

QString inputBoxColor() const
{
    return m_inputBoxColor;
}

QString loginButtonColor() const
{
    return m_loginButtonColor;
}

QString selectFontColor() const
{
    return m_selectFontColor;
}

QString selectBackgroundColor() const
{
    return m_selectBackgroundColor;
}

QString lableSelectedColor() const
{
    return m_lableSelectedColor;
}

QString lableReleasedColor() const
{
    return m_lableReleasedColor;
}

QString titleColor() const
{
    return m_titleColor;
}

QString titleFontColor() const
{
    return m_titleFontColor;
}

QString firstExtra() const
{
    return m_firstExtra;
}

QString secondExtra() const
{
    return m_secondExtra;
}
 void rangeGreenTheme();

public slots:
void setBackgroundColor(QString backgroundColor)
{
    if (m_backgroundColor == backgroundColor)
        return;

    m_backgroundColor = backgroundColor;
    emit backgroundColorChanged(m_backgroundColor);
}

void setBorderColor(QString borderColor)
{
    if (m_borderColor == borderColor)
        return;

    m_borderColor = borderColor;
    emit borderColorChanged(m_borderColor);
}

void setButtonReleasedColor(QString buttonReleasedColor)
{
    if (m_buttonReleasedColor == buttonReleasedColor)
        return;

    m_buttonReleasedColor = buttonReleasedColor;
    emit buttonReleasedColorChanged(m_buttonReleasedColor);
}

void setButtonReleaseFontColor(QString buttonReleaseFontColor)
{
    if (m_buttonReleaseFontColor == buttonReleaseFontColor)
        return;

    m_buttonReleaseFontColor = buttonReleaseFontColor;
    emit buttonReleaseFontColorChanged(m_buttonReleaseFontColor);
}

void setButtonHoveredColor(QString buttonHoveredColor)
{
    if (m_buttonHoveredColor == buttonHoveredColor)
        return;

    m_buttonHoveredColor = buttonHoveredColor;
    emit buttonHoveredColorChanged(m_buttonHoveredColor);
}

void setButtonHoverFontColor(QString buttonHoverFontColor)
{
    if (m_buttonHoverFontColor == buttonHoverFontColor)
        return;

    m_buttonHoverFontColor = buttonHoverFontColor;
    emit buttonHoverFontColorChanged(m_buttonHoverFontColor);
}

void setButtonSelectedColor(QString buttonSelectedColor)
{
    if (m_buttonSelectedColor == buttonSelectedColor)
        return;

    m_buttonSelectedColor = buttonSelectedColor;
    emit buttonSelectedColorChanged(m_buttonSelectedColor);
}

void setButtonSelectedFontColor(QString buttonSelectedFontColor)
{
    if (m_buttonSelectedFontColor == buttonSelectedFontColor)
        return;

    m_buttonSelectedFontColor = buttonSelectedFontColor;
    emit buttonSelectedFontColorChanged(m_buttonSelectedFontColor);
}

void setSectionBackgroundColor(QString sectionBackgroundColor)
{
    if (m_sectionBackgroundColor == sectionBackgroundColor)
        return;

    m_sectionBackgroundColor = sectionBackgroundColor;
    emit sectionBackgroundColorChanged(m_sectionBackgroundColor);
}

void setSectionRowColor(QString sectionRowColor)
{
    if (m_sectionRowColor == sectionRowColor)
        return;

    m_sectionRowColor = sectionRowColor;
    emit sectionRowColorChanged(m_sectionRowColor);
}

void setSectionRowBorder(QString sectionRowBorder)
{
    if (m_sectionRowBorder == sectionRowBorder)
        return;

    m_sectionRowBorder = sectionRowBorder;
    emit sectionRowBorderChanged(m_sectionRowBorder);
}

void setSectionRowFontColor(QString sectionRowFontColor)
{
    if (m_sectionRowFontColor == sectionRowFontColor)
        return;

    m_sectionRowFontColor = sectionRowFontColor;
    emit sectionRowFontColorChanged(m_sectionRowFontColor);
}

void setInputBoxColor(QString inputBoxColor)
{
    if (m_inputBoxColor == inputBoxColor)
        return;

    m_inputBoxColor = inputBoxColor;
    emit inputBoxColorChanged(m_inputBoxColor);
}

void setLoginButtonColor(QString loginButtonColor)
{
    if (m_loginButtonColor == loginButtonColor)
        return;

    m_loginButtonColor = loginButtonColor;
    emit loginButtonColorChanged(m_loginButtonColor);
}

void setSelectFontColor(QString selectFontColor)
{
    if (m_selectFontColor == selectFontColor)
        return;

    m_selectFontColor = selectFontColor;
    emit selectFontColorChanged(m_selectFontColor);
}

void setSelectBackgroundColor(QString selectBackgroundColor)
{
    if (m_selectBackgroundColor == selectBackgroundColor)
        return;

    m_selectBackgroundColor = selectBackgroundColor;
    emit selectBackgroundColorChanged(m_selectBackgroundColor);
}

void setLableSelectedColor(QString lableSelectedColor)
{
    if (m_lableSelectedColor == lableSelectedColor)
        return;

    m_lableSelectedColor = lableSelectedColor;
    emit lableSelectedColorChanged(m_lableSelectedColor);
}

void setLableReleasedColor(QString lableReleasedColor)
{
    if (m_lableReleasedColor == lableReleasedColor)
        return;

    m_lableReleasedColor = lableReleasedColor;
    emit lableReleasedColorChanged(m_lableReleasedColor);
}

void setTitleColor(QString titleColor)
{
    if (m_titleColor == titleColor)
        return;

    m_titleColor = titleColor;
    emit titleColorChanged(m_titleColor);
}

void setTitleFontColor(QString titleFontColor)
{
    if (m_titleFontColor == titleFontColor)
        return;

    m_titleFontColor = titleFontColor;
    emit titleFontColorChanged(m_titleFontColor);
}

void setFirstExtra(QString firstExtra)
{
    if (m_firstExtra == firstExtra)
        return;

    m_firstExtra = firstExtra;
    emit firstExtraChanged(m_firstExtra);
}

void setsecondExtra(QString secondExtra)
{
    if (m_secondExtra == secondExtra)
        return;

    m_secondExtra = secondExtra;
    emit secondExtraChanged(m_secondExtra);
}

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
};

#endif // UI_PROPERTY_H
