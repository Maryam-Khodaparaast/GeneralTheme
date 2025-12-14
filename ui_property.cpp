#include "ui_property.h"

Ui_property::Ui_property(QObject *parent) : QObject(parent)
{

}

QString Ui_property::backgroundColor() const
{
    return m_backgroundColor;
}

QString Ui_property::borderColor() const
{
    return m_borderColor;
}

QString Ui_property::buttonReleasedColor() const
{
    return m_buttonReleasedColor;
}

QString Ui_property::buttonReleaseFontColor() const
{
    return m_buttonReleaseFontColor;
}

QString Ui_property::buttonHoveredColor() const
{
    return m_buttonHoveredColor;
}

QString Ui_property::buttonHoverFontColor() const
{
    return m_buttonHoverFontColor;
}

QString Ui_property::buttonSelectedColor() const
{
    return m_buttonSelectedColor;
}

QString Ui_property::buttonSelectedFontColor() const
{
    return m_buttonSelectedFontColor;
}

QString Ui_property::sectionBackgroundColor() const
{
    return m_sectionBackgroundColor;
}

QString Ui_property::sectionRowColor() const
{
    return m_sectionRowColor;
}

QString Ui_property::sectionRowBorder() const
{
    return m_sectionRowBorder;
}

QString Ui_property::sectionRowFontColor() const
{
    return m_sectionRowFontColor;
}

QString Ui_property::inputBoxColor() const
{
    return m_inputBoxColor;
}

QString Ui_property::loginButtonColor() const
{
    return m_loginButtonColor;
}

QString Ui_property::selectFontColor() const
{
    return m_selectFontColor;
}

QString Ui_property::selectBackgroundColor() const
{
    return m_selectBackgroundColor;
}

QString Ui_property::lableSelectedColor() const
{
    return m_lableSelectedColor;
}

QString Ui_property::lableReleasedColor() const
{
    return m_lableReleasedColor;
}

QString Ui_property::titleColor() const
{
    return m_titleColor;
}

QString Ui_property::titleFontColor() const
{
    return m_titleFontColor;
}

QString Ui_property::firstExtra() const
{
    return m_firstExtra;
}

QString Ui_property::secondExtra() const
{
    return m_secondExtra;
}

//**************************************************************************************

void Ui_property::rangerGreenTheme()
{
    setBaseColor("#2F855A");
    setBackgroundColor("#141A15");
    setBorderColor("#3C4A3E");
    setButtonReleasedColor("#2A3A2C");
    setButtonReleaseFontColor("#EAF0E6");
    setButtonHoveredColor("#344C36");
    setButtonHoverFontColor("#F2F6F0");
    setButtonSelectedColor("#4C6B47");
    setButtonSelectedFontColor("#F7FAF5");
    setSectionBackgroundColor("#1B231C");
    setSectionRowColor("#202B22");
    setSectionRowBorder("#2E3A30");
    setSectionRowFontColor("#DDE3DA");
    setInputBoxColor("#111611");
    setLoginButtonColor("#3E5B3B");
    setSelectFontColor("#F2F6F0");
    setSelectBackgroundColor("#2A3A2C");
    setLableSelectedColor("#4C6B47");
    setLableReleasedColor("#B8C2B2");
    setTitleColor("#0F1510");
    setTitleFontColor("#F0F4ED");
    setFirstExtra("#9A7B3D");
    setsecondExtra("#6B2326");
}

void Ui_property::navalOpsTheme()
{
    setBaseColor("#1E3A8A");
    setBackgroundColor("#0B111A");
    setBorderColor("#2A3A4D");
    setButtonReleasedColor("#17273A");
    setButtonReleaseFontColor("#EAF2FA");
    setButtonHoveredColor("#1F3550");
    setButtonHoverFontColor("#F2F7FC");
    setButtonSelectedColor("#2F5F8F");
    setButtonSelectedFontColor("#F7FBFF");
    setSectionBackgroundColor("#0F1722");
    setSectionRowColor("#131F2E");
    setSectionRowBorder("#1D2C3E");
    setSectionRowFontColor("#DCE6F2");
    setInputBoxColor("#0A0F17");
    setLoginButtonColor("#2F5F8F");
    setSelectFontColor("#F7FBFF");
    setSelectBackgroundColor("#1F3550");
    setLableSelectedColor("#4A7AA7");
    setLableReleasedColor("#A9B9C8");
    setTitleColor("#0B111A");
    setTitleFontColor("#F5F9FF");
    setFirstExtra("#C2A14A");
    setsecondExtra("#2F6F7A");
}

void Ui_property::desertCoyoteTheme()
{
    setBaseColor("#A16207");
    setBackgroundColor("#201C14");
    setBorderColor("#6F634B");
    setButtonReleasedColor("#3C3326");
    setButtonReleaseFontColor("#F5F1E8");
    setButtonHoveredColor("#4B402F");
    setButtonHoverFontColor("#FFF7E8");
    setButtonSelectedColor("#7A6A4F");
    setButtonSelectedFontColor("#FFF9ED");
    setSectionBackgroundColor("#2A241B");
    setSectionRowColor("#322B20");
    setSectionRowBorder("#4A4131");
    setSectionRowFontColor("#E9E1D2");
    setInputBoxColor("#19150F");
    setLoginButtonColor("#7A6A4F");
    setSelectFontColor("#FFF7E8");
    setSelectBackgroundColor("#4B402F");
    setLableSelectedColor("#9B875F");
    setLableReleasedColor("#C7B89C");
    setTitleColor("#201C14");
    setTitleFontColor("#FFF7E8");
    setFirstExtra("#6B7A3A");
    setsecondExtra("#9A4A2F");
}

void Ui_property::arcticCommandTheme()
{
    setBaseColor("#5A7FA1");
    setBackgroundColor("#12161A");
    setBorderColor("#4E5E69");
    setButtonReleasedColor("#252E35");
    setButtonReleaseFontColor("#E9EEF2");
    setButtonHoveredColor("#303C45");
    setButtonHoverFontColor("#F7FAFC");
    setButtonSelectedColor("#4C6A82");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#1A1F24");
    setSectionRowColor("#20272D");
    setSectionRowBorder("#2F3A42");
    setSectionRowFontColor("#E5EBEF");
    setInputBoxColor("#0F1316");
    setLoginButtonColor("#4C6A82");
    setSelectFontColor("#FFFFFF");
    setSelectBackgroundColor("#303C45");
    setLableSelectedColor("#6E8CA0");
    setLableReleasedColor("#B7C3CC");
    setTitleColor("#12161A");
    setTitleFontColor("#F7FAFC");
    setFirstExtra("#A7C6D8");
    setsecondExtra("#7C6F55");
}

void Ui_property::blackoutTacticalTheme()
{
    setBaseColor("#4B5563");
    setBackgroundColor("#0E0F10");
    setBorderColor("#2E3133");
    setButtonReleasedColor("#1A1C1E");
    setButtonReleaseFontColor("#F3F5F6");
    setButtonHoveredColor("#23262A");
    setButtonHoverFontColor("#FFFFFF");
    setButtonSelectedColor("#3A444D");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#141618");
    setSectionRowColor("#1A1D20");
    setSectionRowBorder("#25292C");
    setSectionRowFontColor("#DDE1E4");
    setInputBoxColor("#0B0C0D");
    setLoginButtonColor("#3A444D");
    setSelectFontColor("#FFFFFF");
    setSelectBackgroundColor("#23262A");
    setLableSelectedColor("#54616A");
    setLableReleasedColor("#9BA3A9");
    setTitleColor("#0E0F10");
    setTitleFontColor("#FFFFFF");
    setFirstExtra("#B56F2A");
    setsecondExtra("#8A2E2E");
}

void Ui_property::oceanBlueTheme()
{
    setBaseColor("#2563EB");
    setBackgroundColor("#161B22");
    setBorderColor("#384452");
    setButtonReleasedColor("#222A35");
    setButtonReleaseFontColor("#EBEDEF");
    setButtonHoveredColor("#28323E");
    setButtonHoverFontColor("#EBEDEF");
    setButtonSelectedColor("#6889B1");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#1C232B");
    setSectionRowColor("#212831");
    setSectionRowBorder("#384452");
    setSectionRowFontColor("#CCD1D6");
    setInputBoxColor("#14191F");
    setLoginButtonColor("#7190B6");
    setSelectFontColor("#EBEDEF");
    setSelectBackgroundColor("#3C4E63");
    setLableSelectedColor("#6889B1");
    setLableReleasedColor("#A0A7B1");
    setTitleColor("#101419");
    setTitleFontColor("#EBEDEF");
    setFirstExtra("#89A2C2");
    setsecondExtra("#3A5473");
}

void Ui_property::cyanWaveTheme()
{
    setBaseColor("#0891B2");
    setBackgroundColor("#0F1F20");
    setBorderColor("#2F5556");
    setButtonReleasedColor("#173132");
    setButtonReleaseFontColor("#ECEFEE");
    setButtonHoveredColor("#1B3B3C");
    setButtonHoverFontColor("#ECEFEE");
    setButtonSelectedColor("#33AAA1");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#133132");
    setSectionRowColor("#173838");
    setSectionRowBorder("#2F5556");
    setSectionRowFontColor("#CED6D4");
    setInputBoxColor("#0D1A1B");
    setLoginButtonColor("#44B3AB");
    setSelectFontColor("#ECEFEE");
    setSelectBackgroundColor("#2B7773");
    setLableSelectedColor("#33AAA1");
    setLableReleasedColor("#A0B1AE");
    setTitleColor("#0A1415");
    setTitleFontColor("#ECEFEE");
    setFirstExtra("#70C4BC");
    setsecondExtra("#0F6D67");
}

void Ui_property::tealLagoonTheme()
{
    setBaseColor("#0D9488");
    setBackgroundColor("#0C1D1A");
    setBorderColor("#2B5450");
    setButtonReleasedColor("#13302C");
    setButtonReleaseFontColor("#ECEFEE");
    setButtonHoveredColor("#173A35");
    setButtonHoverFontColor("#ECEFEE");
    setButtonSelectedColor("#9EE5D9");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#102E2A");
    setSectionRowColor("#133530");
    setSectionRowBorder("#2B5450");
    setSectionRowFontColor("#CFD7D5");
    setInputBoxColor("#0A1916");
    setLoginButtonColor("#A8E9DE");
    setSelectFontColor("#ECEFEE");
    setSelectBackgroundColor("#4B8D85");
    setLableSelectedColor("#9EE5D9");
    setLableReleasedColor("#A0B1AE");
    setTitleColor("#071210");
    setTitleFontColor("#ECEFEE");
    setFirstExtra("#B8EFE6");
    setsecondExtra("#4D8A82");
}

void Ui_property::emeraldGreenTheme()
{
    setBaseColor("#16A34A");
    setBackgroundColor("#171F14");
    setBorderColor("#3E4F33");
    setButtonReleasedColor("#242E1F");
    setButtonReleaseFontColor("#ECEFEC");
    setButtonHoveredColor("#2B3626");
    setButtonHoverFontColor("#ECEFEC");
    setButtonSelectedColor("#AEC58A");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#1D2819");
    setSectionRowColor("#222E1E");
    setSectionRowBorder("#3E4F33");
    setSectionRowFontColor("#D4D6CF");
    setInputBoxColor("#141B10");
    setLoginButtonColor("#B7CC97");
    setSelectFontColor("#ECEFEC");
    setSelectBackgroundColor("#5B703B");
    setLableSelectedColor("#AEC58A");
    setLableReleasedColor("#A8B1A0");
    setTitleColor("#0F140B");
    setTitleFontColor("#ECEFEC");
    setFirstExtra("#C2D6A5");
    setsecondExtra("#5C6F3A");
}

void Ui_property::limeZestTheme()
{
    setBaseColor("#65A30D");
    setBackgroundColor("#252710");
    setBorderColor("#565C2D");
    setButtonReleasedColor("#35371A");
    setButtonReleaseFontColor("#EEEFEB");
    setButtonHoveredColor("#3D4020");
    setButtonHoverFontColor("#EEEFEB");
    setButtonSelectedColor("#8C9F0F");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#2E3116");
    setSectionRowColor("#34371A");
    setSectionRowBorder("#565C2D");
    setSectionRowFontColor("#D5D6CC");
    setInputBoxColor("#21240F");
    setLoginButtonColor("#94A51F");
    setSelectFontColor("#EEEFEB");
    setSelectBackgroundColor("#555F13");
    setLableSelectedColor("#8C9F0F");
    setLableReleasedColor("#AFB1A0");
    setTitleColor("#1B1D0C");
    setTitleFontColor("#EEEFEB");
    setFirstExtra("#A7B647");
    setsecondExtra("#525F00");
}

void Ui_property::darkRedTheme()
{

    setBackgroundColor("#0B0A0A");
    setBorderColor("#3A1414");
    setButtonReleasedColor("#1E0D0D");
    setButtonReleaseFontColor("#F3F4F6");
    setButtonHoveredColor("#2A1010");
    setButtonHoverFontColor("#FFFFFF");
    setButtonSelectedColor("#B91C1C");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#120B0B");
    setSectionRowColor("#191010");
    setSectionRowBorder("#2A1212");
    setSectionRowFontColor("#E5E7EB");
    setInputBoxColor("#0F0B0B");
    setLoginButtonColor("#C81E1E");
    setSelectFontColor("#FFFFFF");
    setSelectBackgroundColor("#3A1515");
    setLableSelectedColor("#B91C1C");
    setLableReleasedColor("#A1A1AA");
    setTitleColor("#090707");
    setTitleFontColor("#FFFFFF");
    setFirstExtra("#E11D48");
    setsecondExtra("#7F1D1D");
}

void Ui_property::goldenAmberTheme()
{
    setBaseColor("#F59E0B");
    setBackgroundColor("#261C0E");
    setBorderColor("#5B3E1F");
    setButtonReleasedColor("#362713");
    setButtonReleaseFontColor("#EEEDEB");
    setButtonHoveredColor("#402E16");
    setButtonHoverFontColor("#EEEDEB");
    setButtonSelectedColor("#DAA030");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#2F2411");
    setSectionRowColor("#352813");
    setSectionRowBorder("#5B3E1F");
    setSectionRowFontColor("#D6D2CC");
    setInputBoxColor("#21170C");
    setLoginButtonColor("#E0AE4B");
    setSelectFontColor("#EEEDEB");
    setSelectBackgroundColor("#6B4A1B");
    setLableSelectedColor("#DAA030");
    setLableReleasedColor("#B1A7A0");
    setTitleColor("#1B140A");
    setTitleFontColor("#EEEDEB");
    setFirstExtra("#E6BE6E");
    setsecondExtra("#7B4E00");

}

void Ui_property::sunsetOrangeTheme()
{
    setBaseColor("#F97316");
    setBackgroundColor("#241B11");
    setBorderColor("#59411D");
    setButtonReleasedColor("#342614");
    setButtonReleaseFontColor("#EEEDEB");
    setButtonHoveredColor("#3D2D17");
    setButtonHoverFontColor("#EEEDEB");
    setButtonSelectedColor("#FFB861");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#2D2312");
    setSectionRowColor("#332714");
    setSectionRowBorder("#59411D");
    setSectionRowFontColor("#D6D2CC");
    setInputBoxColor("#1F160E");
    setLoginButtonColor("#FFC178");
    setSelectFontColor("#EEEDEB");
    setSelectBackgroundColor("#6A4B1D");
    setLableSelectedColor("#FFB861");
    setLableReleasedColor("#B1A7A0");
    setTitleColor("#18110A");
    setTitleFontColor("#EEEDEB");
    setFirstExtra("#FFD09B");
    setsecondExtra("#8A5200");
}

void Ui_property::rubyRedTheme()
{
    setBaseColor("#DC2626");
    setBackgroundColor("#231112");
    setBorderColor("#582022");
    setButtonReleasedColor("#331617");
    setButtonReleaseFontColor("#EEECEC");
    setButtonHoveredColor("#3C1A1C");
    setButtonHoverFontColor("#EEECEC");
    setButtonSelectedColor("#FF6060");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#2C1415");
    setSectionRowColor("#321617");
    setSectionRowBorder("#582022");
    setSectionRowFontColor("#D6CDCD");
    setInputBoxColor("#1E0E0F");
    setLoginButtonColor("#FF7878");
    setSelectFontColor("#EEECEC");
    setSelectBackgroundColor("#6B1B20");
    setLableSelectedColor("#FF6060");
    setLableReleasedColor("#B1A0A0");
    setTitleColor("#150809");
    setTitleFontColor("#EEECEC");
    setFirstExtra("#FF9A9A");
    setsecondExtra("#8A0000");
}

void Ui_property::hotPinkTheme()
{
    setBaseColor("#DB2777");
    setBackgroundColor("#220A16");
    setBorderColor("#5A1C3B");
    setButtonReleasedColor("#330D21");
    setButtonReleaseFontColor("#EEECEF");
    setButtonHoveredColor("#3C1027");
    setButtonHoverFontColor("#EEECEF");
    setButtonSelectedColor("#FA3179");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#2C0C1C");
    setSectionRowColor("#320E20");
    setSectionRowBorder("#5A1C3B");
    setSectionRowFontColor("#D7CDD3");
    setInputBoxColor("#1D0812");
    setLoginButtonColor("#FB4A8B");
    setSelectFontColor("#EEECEF");
    setSelectBackgroundColor("#6B1A43");
    setLableSelectedColor("#FA3179");
    setLableReleasedColor("#B1A0AA");
    setTitleColor("#14050C");
    setTitleFontColor("#EEECEF");
    setFirstExtra("#FF7CAB");
    setsecondExtra("#8A0038");
}

void Ui_property::royalPurpleTheme()
{
    setBaseColor("#7C3AED");
    setBackgroundColor("#1C141F");
    setBorderColor("#4B3556");
    setButtonReleasedColor("#2A1F2F");
    setButtonReleaseFontColor("#EEECEF");
    setButtonHoveredColor("#322538");
    setButtonHoverFontColor("#EEECEF");
    setButtonSelectedColor("#CB82E1");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#231B28");
    setSectionRowColor("#271F2C");
    setSectionRowBorder("#4B3556");
    setSectionRowFontColor("#D6CDD7");
    setInputBoxColor("#19121C");
    setLoginButtonColor("#D196E6");
    setSelectFontColor("#EEECEF");
    setSelectBackgroundColor("#5D3C6B");
    setLableSelectedColor("#CB82E1");
    setLableReleasedColor("#B1A0B1");
    setTitleColor("#120B14");
    setTitleFontColor("#EEECEF");
    setFirstExtra("#DDB0EE");
    setsecondExtra("#6B2C82");
}

void Ui_property::indigoNightTheme()
{
    setBaseColor("#4F46E5");
    setBackgroundColor("#131826");
    setBorderColor("#2F3D63");
    setButtonReleasedColor("#1D2436");
    setButtonReleaseFontColor("#EBEDEF");
    setButtonHoveredColor("#222A3F");
    setButtonHoverFontColor("#EBEDEF");
    setButtonSelectedColor("#82A8F8");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#171F2E");
    setSectionRowColor("#1A2231");
    setSectionRowBorder("#2F3D63");
    setSectionRowFontColor("#CCD0D6");
    setInputBoxColor("#111521");
    setLoginButtonColor("#91B3FA");
    setSelectFontColor("#EBEDEF");
    setSelectBackgroundColor("#3A4D7A");
    setLableSelectedColor("#82A8F8");
    setLableReleasedColor("#A0A7B1");
    setTitleColor("#0B0E16");
    setTitleFontColor("#EBEDEF");
    setFirstExtra("#9FBCF9");
    setsecondExtra("#4C6499");
}

void Ui_property::slateNeutralTheme()
{
    setBaseColor("#475569");
    setBackgroundColor("#171B21");
    setBorderColor("#3A434F");
    setButtonReleasedColor("#242A33");
    setButtonReleaseFontColor("#EBEDEF");
    setButtonHoveredColor("#2A323C");
    setButtonHoverFontColor("#EBEDEF");
    setButtonSelectedColor("#777E89");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#1E232A");
    setSectionRowColor("#22282F");
    setSectionRowBorder("#3A434F");
    setSectionRowFontColor("#CCD0D6");
    setInputBoxColor("#15191E");
    setLoginButtonColor("#7F8690");
    setSelectFontColor("#EBEDEF");
    setSelectBackgroundColor("#434952");
    setLableSelectedColor("#777E89");
    setLableReleasedColor("#A0A7B1");
    setTitleColor("#111418");
    setTitleFontColor("#EBEDEF");
    setFirstExtra("#979CA4");
    setsecondExtra("#444950");
}

void Ui_property::nordFrostTheme()
{
    setBaseColor("#5E81AC");
    setBackgroundColor("#0D1516");
    setBorderColor("#293E40");
    setButtonReleasedColor("#163234");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#193E41");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#88C0D0");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#0F1F20");
    setSectionRowColor("#122829");
    setSectionRowBorder("#21373A");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#0C1314");
    setLoginButtonColor("#95CBD9");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#1E4F54");
    setLableSelectedColor("#88C0D0");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#080F10");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#B0DEE5");
    setsecondExtra("#3B95A3");
}

void Ui_property::solarizedBlueTheme()
{
    setBaseColor("#1F7FBF");
    setBackgroundColor("#081018");
    setBorderColor("#1D3247");
    setButtonReleasedColor("#10253E");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#122C4C");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#268BD2");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#0A1727");
    setSectionRowColor("#0D1C31");
    setSectionRowBorder("#18283D");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#070E16");
    setLoginButtonColor("#3497DD");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#1A3659");
    setLableSelectedColor("#268BD2");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#050B12");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#7BBCEB");
    setsecondExtra("#00599B");
}

void Ui_property::draculaPurpleTheme()
{
    setBaseColor("#A855F7");
    setBackgroundColor("#120B1B");
    setBorderColor("#342747");
    setButtonReleasedColor("#25133E");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#2C154C");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#BD93F9");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#190E27");
    setSectionRowColor("#1E1131");
    setSectionRowBorder("#2B1E3D");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#110B19");
    setLoginButtonColor("#CAABFA");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#382159");
    setLableSelectedColor("#BD93F9");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#0D0814");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#DCC7FB");
    setsecondExtra("#761FF3");
}

void Ui_property::gruvboxAquaTheme()
{
    setBaseColor("#458588");
    setBackgroundColor("#0D1413");
    setBorderColor("#293F3C");
    setButtonReleasedColor("#163331");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#193F3D");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#83A598");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#0F1E1D");
    setSectionRowColor("#122726");
    setSectionRowBorder("#213A37");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#0C1211");
    setLoginButtonColor("#92B0A5");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#1E514C");
    setLableSelectedColor("#83A598");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#080F0E");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#B2C7BF");
    setsecondExtra("#3D6C60");
}

void Ui_property::rosePineFoamTheme()
{
    setBaseColor("#56949F");
    setBackgroundColor("#0B1316");
    setBorderColor("#274047");
    setButtonReleasedColor("#133234");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#153E41");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#9CCFD8");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#0E1A20");
    setSectionRowColor("#112129");
    setSectionRowBorder("#1E373A");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#0A1114");
    setLoginButtonColor("#AAD7DE");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#214F54");
    setLableSelectedColor("#9CCFD8");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#080E10");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#C0E1E7");
    setsecondExtra("#3CB3C7");
}

void Ui_property::kanagawaWaveTheme()
{
    setBaseColor("#7FB4CA");
    setBackgroundColor("#0B101B");
    setBorderColor("#273247");
    setButtonReleasedColor("#131F3E");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#15264C");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#7E9CD8");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#0E1527");
    setSectionRowColor("#111B31");
    setSectionRowBorder("#1E273D");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#0B0F19");
    setLoginButtonColor("#8AA8E0");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#213559");
    setLableSelectedColor("#7E9CD8");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#080B14");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#ABC0E6");
    setsecondExtra("#2E64B9");
}

void Ui_property::githubBlueTheme()
{
    setBaseColor("#0969DA");
    setBackgroundColor("#0B131B");
    setBorderColor("#273647");
    setButtonReleasedColor("#13273E");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#152F4C");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#58A6FF");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#0E1A27");
    setSectionRowColor("#112031");
    setSectionRowBorder("#1E2D3D");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#0B1119");
    setLoginButtonColor("#66B0FF");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#213B59");
    setLableSelectedColor("#58A6FF");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#080E14");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#8BBEF9");
    setsecondExtra("#0667D7");
}

void Ui_property::nordAuroraRedTheme()
{
    setBaseColor("#C95A63");
    setBackgroundColor("#1A0C0E");
    setBorderColor("#442328");
    setButtonReleasedColor("#3B161B");
    setButtonReleaseFontColor("#E6EAF0");
    setButtonHoveredColor("#47191F");
    setButtonHoverFontColor("#F2F6FF");
    setButtonSelectedColor("#BF616A");
    setButtonSelectedFontColor("#F7FAFF");
    setSectionBackgroundColor("#251010");
    setSectionRowColor("#2E1314");
    setSectionRowBorder("#3B2123");
    setSectionRowFontColor("#C7CDD6");
    setInputBoxColor("#180B0C");
    setLoginButtonColor("#C9737B");
    setSelectFontColor("#F2F6FF");
    setSelectBackgroundColor("#553033");
    setLableSelectedColor("#BF616A");
    setLableReleasedColor("#C7CDD6");
    setTitleColor("#130809");
    setTitleFontColor("#F7FAFF");
    setFirstExtra("#D9A0A7");
    setsecondExtra("#7A1D28");
}

void Ui_property::lightSkyBlueTheme()
{
    setBaseColor("#1E88E5");
    setBackgroundColor("#F8FAFF");
    setBorderColor("#C7DAFF");
    setButtonReleasedColor("#EAF2FF");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#DDEBFF");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#3B82F6");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F1F6FF");
    setSectionRowBorder("#D6E6FF");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#2563EB");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#DDEBFF");
    setLableSelectedColor("#1D4ED8");
    setLableReleasedColor("#475569");
    setTitleColor("#EAF2FF");
    setTitleFontColor("#0F172A");
    setFirstExtra("#93C5FD");
    setsecondExtra("#1E40AF");

}

void Ui_property::lightMintTheme()
{
    setBaseColor("#34D399");
    setBackgroundColor("#F6FFFB");
    setBorderColor("#BFEFE0");
    setButtonReleasedColor("#E9FBF4");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#D7F7EA");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#10B981");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F0FDF8");
    setSectionRowBorder("#CFF7EA");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#059669");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#D7F7EA");
    setLableSelectedColor("#047857");
    setLableReleasedColor("#475569");
    setTitleColor("#E9FBF4");
    setTitleFontColor("#0F172A");
    setFirstExtra("#6EE7B7");
    setsecondExtra("#065F46");
}

void Ui_property::lightLavenderTheme()
{
    setBaseColor("#6B46FF");
    setBackgroundColor("#FBFAFF");
    setBorderColor("#DCCBFF");
    setButtonReleasedColor("#F1ECFF");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#E6DDFF");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#8B5CF6");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F7F3FF");
    setSectionRowBorder("#E9DDFF");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#7C3AED");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#E6DDFF");
    setLableSelectedColor("#6D28D9");
    setLableReleasedColor("#475569");
    setTitleColor("#F1ECFF");
    setTitleFontColor("#0F172A");
    setFirstExtra("#C4B5FD");
    setsecondExtra("#4C1D95");
}

void Ui_property::lightPeachTheme()
{
    setBaseColor("#FF6B35");
    setBackgroundColor("#FFFBF7");
    setBorderColor("#FFD7B5");
    setButtonReleasedColor("#FFF0E1");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#FFE2C6");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#FB923C");
    setButtonSelectedFontColor("#0F172A");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#FFF7ED");
    setSectionRowBorder("#FFE2C6");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#F97316");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#FFE2C6");
    setLableSelectedColor("#EA580C");
    setLableReleasedColor("#475569");
    setTitleColor("#FFF0E1");
    setTitleFontColor("#0F172A");
    setFirstExtra("#FDBA74");
    setsecondExtra("#9A3412");
}

void Ui_property::lightRoseTheme()
{
    setBaseColor("#F472B6");
    setBackgroundColor("#FFF7FB");
    setBorderColor("#FFC7DD");
    setButtonReleasedColor("#FFE8F2");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#FFD6E8");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#EC4899");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#FFF1F7");
    setSectionRowBorder("#FFD6E8");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#DB2777");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#FFD6E8");
    setLableSelectedColor("#BE185D");
    setLableReleasedColor("#475569");
    setTitleColor("#FFE8F2");
    setTitleFontColor("#0F172A");
    setFirstExtra("#F9A8D4");
    setsecondExtra("#831843");
}

void Ui_property::lightRedTheme()
{
    setBaseColor("#EF4444");
    setBackgroundColor("#F9F1F1");
    setBorderColor("#F5C4C4");
    setButtonReleasedColor("#F3A7A7");
    setButtonReleaseFontColor("#2B2D2D");
    setButtonHoveredColor("#F5B1B1");
    setButtonHoverFontColor("#2B2D2D");
    setButtonSelectedColor("#F28C8C");
    setButtonSelectedFontColor("#2B2D2D");
    setSectionBackgroundColor("#F5D3D3");
    setSectionRowColor("#F8D1D1");
    setSectionRowBorder("#F2B4B4");
    setSectionRowFontColor("#4A4A4A");
    setInputBoxColor("#F9D6D6");
    setLoginButtonColor("#F5A7A7");
    setSelectFontColor("#2B2D2D");
    setSelectBackgroundColor("#F3C0C0");
    setLableSelectedColor("#F28C8C");
    setLableReleasedColor("#D6A7A7");
    setTitleColor("#F5D0D0");
    setTitleFontColor("#2B2D2D");
    setFirstExtra("#F3C6C6");
    setsecondExtra("#F2A9A9");
}

void Ui_property::lightLemonTheme()
{
    setBaseColor("#FACC15");
    setBackgroundColor("#FFFEF6");
    setBorderColor("#F3E8B4");
    setButtonReleasedColor("#FFF8D6");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#FFF1B8");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#EAB308");
    setButtonSelectedFontColor("#0F172A");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#FFFBEB");
    setSectionRowBorder("#FDE68A");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#CA8A04");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#FFF1B8");
    setLableSelectedColor("#A16207");
    setLableReleasedColor("#475569");
    setTitleColor("#FFF8D6");
    setTitleFontColor("#0F172A");
    setFirstExtra("#FDE68A");
    setsecondExtra("#854D0E");
}

void Ui_property::lightCoralTheme()
{
    setBaseColor("#FB7185");
    setBackgroundColor("#FFF7F8");
    setBorderColor("#FFC7CF");
    setButtonReleasedColor("#FFE6EA");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#FFD3DB");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#F43F5E");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#FFF1F3");
    setSectionRowBorder("#FFD3DB");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#E11D48");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#FFD3DB");
    setLableSelectedColor("#BE123C");
    setLableReleasedColor("#475569");
    setTitleColor("#FFE6EA");
    setTitleFontColor("#0F172A");
    setFirstExtra("#FDA4AF");
    setsecondExtra("#881337");
}

void Ui_property::lightAquaTheme()
{
    setBaseColor("#22D3EE");
    setBackgroundColor("#F6FEFF");
    setBorderColor("#BDECF5");
    setButtonReleasedColor("#DFF7FB");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#C8F0F8");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#06B6D4");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#ECFEFF");
    setSectionRowBorder("#A5F3FC");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#0891B2");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#C8F0F8");
    setLableSelectedColor("#0E7490");
    setLableReleasedColor("#475569");
    setTitleColor("#DFF7FB");
    setTitleFontColor("#0F172A");
    setFirstExtra("#67E8F9");
    setsecondExtra("#155E75");
}

void Ui_property::lightTealTheme()
{
    setBaseColor("#2DD4BF");
    setBackgroundColor("#F5FFFD");
    setBorderColor("#BDEFE8");
    setButtonReleasedColor("#DDFBF7");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#C7F7F0");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#14B8A6");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F0FDFA");
    setSectionRowBorder("#99F6E4");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#0D9488");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#C7F7F0");
    setLableSelectedColor("#0F766E");
    setLableReleasedColor("#475569");
    setTitleColor("#DDFBF7");
    setTitleFontColor("#0F172A");
    setFirstExtra("#5EEAD4");
    setsecondExtra("#115E59");
}

void Ui_property::lightOliveTheme()
{
    setBaseColor("#A3E635");
    setBackgroundColor("#FBFFF4");
    setBorderColor("#D7F2B8");
    setButtonReleasedColor("#F0FBD8");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#E5F7B8");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#84CC16");
    setButtonSelectedFontColor("#0B0F14");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F7FEE7");
    setSectionRowBorder("#BEF264");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#65A30D");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#E5F7B8");
    setLableSelectedColor("#4D7C0F");
    setLableReleasedColor("#475569");
    setTitleColor("#F0FBD8");
    setTitleFontColor("#0F172A");
    setFirstExtra("#D9F99D");
    setsecondExtra("#3F6212");
}

void Ui_property::lightSandTheme()
{
    setBaseColor("#D6A77A");
    setBackgroundColor("#FFFBF7");
    setBorderColor("#EAD5C6");
    setButtonReleasedColor("#F7EDE4");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#F0DFD2");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#C08457");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#FAF4EF");
    setSectionRowBorder("#EAD5C6");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#A16207");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#F0DFD2");
    setLableSelectedColor("#92400E");
    setLableReleasedColor("#475569");
    setTitleColor("#F7EDE4");
    setTitleFontColor("#0F172A");
    setFirstExtra("#E7CBB5");
    setsecondExtra("#6B3A16");
}

void Ui_property::lightSlateBlueTheme()
{
    setBaseColor("#6366F1");
    setBackgroundColor("#FAFAFF");
    setBorderColor("#D2D6FF");
    setButtonReleasedColor("#EEF0FF");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#E1E5FF");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#4F46E5");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F5F6FF");
    setSectionRowBorder("#E1E5FF");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#4338CA");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#E1E5FF");
    setLableSelectedColor("#3730A3");
    setLableReleasedColor("#475569");
    setTitleColor("#EEF0FF");
    setTitleFontColor("#0F172A");
    setFirstExtra("#A5B4FC");
    setsecondExtra("#312E81");
}

void Ui_property::lightGrayNeutralTheme()
{
    setBaseColor("#6B7280");
    setBackgroundColor("#F8FAFC");
    setBorderColor("#CBD5E1");
    setButtonReleasedColor("#E2E8F0");
    setButtonReleaseFontColor("#0F172A");
    setButtonHoveredColor("#D5DDE7");
    setButtonHoverFontColor("#0F172A");
    setButtonSelectedColor("#64748B");
    setButtonSelectedFontColor("#FFFFFF");
    setSectionBackgroundColor("#FFFFFF");
    setSectionRowColor("#F1F5F9");
    setSectionRowBorder("#E2E8F0");
    setSectionRowFontColor("#0F172A");
    setInputBoxColor("#FFFFFF");
    setLoginButtonColor("#475569");
    setSelectFontColor("#0F172A");
    setSelectBackgroundColor("#D5DDE7");
    setLableSelectedColor("#334155");
    setLableReleasedColor("#475569");
    setTitleColor("#E2E8F0");
    setTitleFontColor("#0F172A");
    setFirstExtra("#94A3B8");
    setsecondExtra("#1F2937");
}


//*******************************************************

void Ui_property::setBackgroundColor(QString backgroundColor)
{
    if (m_backgroundColor == backgroundColor)
        return;

    m_backgroundColor = backgroundColor;
    emit backgroundColorChanged(m_backgroundColor);
}

void Ui_property::setBorderColor(QString borderColor)
{
    if (m_borderColor == borderColor)
        return;

    m_borderColor = borderColor;
    emit borderColorChanged(m_borderColor);
}

void Ui_property::setButtonReleasedColor(QString buttonReleasedColor)
{
    if (m_buttonReleasedColor == buttonReleasedColor)
        return;

    m_buttonReleasedColor = buttonReleasedColor;
    emit buttonReleasedColorChanged(m_buttonReleasedColor);
}

void Ui_property::setButtonReleaseFontColor(QString buttonReleaseFontColor)
{
    if (m_buttonReleaseFontColor == buttonReleaseFontColor)
        return;

    m_buttonReleaseFontColor = buttonReleaseFontColor;
    emit buttonReleaseFontColorChanged(m_buttonReleaseFontColor);
}

void Ui_property::setButtonHoveredColor(QString buttonHoveredColor)
{
    if (m_buttonHoveredColor == buttonHoveredColor)
        return;

    m_buttonHoveredColor = buttonHoveredColor;
    emit buttonHoveredColorChanged(m_buttonHoveredColor);
}

void Ui_property::setButtonHoverFontColor(QString buttonHoverFontColor)
{
    if (m_buttonHoverFontColor == buttonHoverFontColor)
        return;

    m_buttonHoverFontColor = buttonHoverFontColor;
    emit buttonHoverFontColorChanged(m_buttonHoverFontColor);
}

void Ui_property::setButtonSelectedColor(QString buttonSelectedColor)
{
    if (m_buttonSelectedColor == buttonSelectedColor)
        return;

    m_buttonSelectedColor = buttonSelectedColor;
    emit buttonSelectedColorChanged(m_buttonSelectedColor);
}

void Ui_property::setButtonSelectedFontColor(QString buttonSelectedFontColor)
{
    if (m_buttonSelectedFontColor == buttonSelectedFontColor)
        return;

    m_buttonSelectedFontColor = buttonSelectedFontColor;
    emit buttonSelectedFontColorChanged(m_buttonSelectedFontColor);
}

void Ui_property::setSectionBackgroundColor(QString sectionBackgroundColor)
{
    if (m_sectionBackgroundColor == sectionBackgroundColor)
        return;

    m_sectionBackgroundColor = sectionBackgroundColor;
    emit sectionBackgroundColorChanged(m_sectionBackgroundColor);
}

void Ui_property::setSectionRowColor(QString sectionRowColor)
{
    if (m_sectionRowColor == sectionRowColor)
        return;

    m_sectionRowColor = sectionRowColor;
    emit sectionRowColorChanged(m_sectionRowColor);
}

void Ui_property::setSectionRowBorder(QString sectionRowBorder)
{
    if (m_sectionRowBorder == sectionRowBorder)
        return;

    m_sectionRowBorder = sectionRowBorder;
    emit sectionRowBorderChanged(m_sectionRowBorder);
}

void Ui_property::setSectionRowFontColor(QString sectionRowFontColor)
{
    if (m_sectionRowFontColor == sectionRowFontColor)
        return;

    m_sectionRowFontColor = sectionRowFontColor;
    emit sectionRowFontColorChanged(m_sectionRowFontColor);
}

void Ui_property::setInputBoxColor(QString inputBoxColor)
{
    if (m_inputBoxColor == inputBoxColor)
        return;

    m_inputBoxColor = inputBoxColor;
    emit inputBoxColorChanged(m_inputBoxColor);
}

void Ui_property::setLoginButtonColor(QString loginButtonColor)
{
    if (m_loginButtonColor == loginButtonColor)
        return;

    m_loginButtonColor = loginButtonColor;
    emit loginButtonColorChanged(m_loginButtonColor);
}

void Ui_property::setSelectFontColor(QString selectFontColor)
{
    if (m_selectFontColor == selectFontColor)
        return;

    m_selectFontColor = selectFontColor;
    emit selectFontColorChanged(m_selectFontColor);
}

void Ui_property::setSelectBackgroundColor(QString selectBackgroundColor)
{
    if (m_selectBackgroundColor == selectBackgroundColor)
        return;

    m_selectBackgroundColor = selectBackgroundColor;
    emit selectBackgroundColorChanged(m_selectBackgroundColor);
}

void Ui_property::setLableSelectedColor(QString lableSelectedColor)
{
    if (m_lableSelectedColor == lableSelectedColor)
        return;

    m_lableSelectedColor = lableSelectedColor;
    emit lableSelectedColorChanged(m_lableSelectedColor);
}

void Ui_property::setLableReleasedColor(QString lableReleasedColor)
{
    if (m_lableReleasedColor == lableReleasedColor)
        return;

    m_lableReleasedColor = lableReleasedColor;
    emit lableReleasedColorChanged(m_lableReleasedColor);
}

void Ui_property::setTitleColor(QString titleColor)
{
    if (m_titleColor == titleColor)
        return;

    m_titleColor = titleColor;
    emit titleColorChanged(m_titleColor);
}

void Ui_property::setTitleFontColor(QString titleFontColor)
{
    if (m_titleFontColor == titleFontColor)
        return;

    m_titleFontColor = titleFontColor;
    emit titleFontColorChanged(m_titleFontColor);
}

void Ui_property::setFirstExtra(QString firstExtra)
{
    if (m_firstExtra == firstExtra)
        return;

    m_firstExtra = firstExtra;
    emit firstExtraChanged(m_firstExtra);
}

void Ui_property::setsecondExtra(QString secondExtra)
{
    if (m_secondExtra == secondExtra)
        return;

    m_secondExtra = secondExtra;
    emit secondExtraChanged(m_secondExtra);
}

void Ui_property::setBaseColor(QString baseColor)
{
    if (m_baseColor == baseColor)
        return;

    m_baseColor = baseColor;
    emit baseColorChanged(m_baseColor);
}


