#ifndef THEMES_H
#define THEMES_H

#include <QObject>
#include "ui_property.h"

class Themes : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Ui_property* rangerGreen READ rangerGreen WRITE setRangerGreen NOTIFY rangerGreenChanged)
    Q_PROPERTY(Ui_property* navalOps READ navalOps WRITE setNavalOps NOTIFY navalOpsChanged)
    Q_PROPERTY(Ui_property* desertCoyote READ desertCoyote WRITE setDesertCoyote NOTIFY desertCoyoteChanged)
    Q_PROPERTY(Ui_property* arcticCommand READ arcticCommand WRITE setArcticCommand NOTIFY arcticCommandChanged)
    Q_PROPERTY(Ui_property* blackoutTactical READ blackoutTactical WRITE setBlackoutTactical NOTIFY blackoutTacticalChanged)

    Q_PROPERTY(Ui_property* oceanBlue READ oceanBlue WRITE setOceanBlue NOTIFY oceanBlueChanged)
    Q_PROPERTY(Ui_property* cyanWave READ cyanWave WRITE setCyanWave NOTIFY cyanWaveChanged)
    Q_PROPERTY(Ui_property* tealLagoon READ tealLagoon WRITE setTealLagoon NOTIFY tealLagoonChanged)
    Q_PROPERTY(Ui_property* emeraldGreen READ emeraldGreen WRITE setEmeraldGreen NOTIFY emeraldGreenChanged)
    Q_PROPERTY(Ui_property* limeZest READ limeZest WRITE setLimeZest NOTIFY limeZestChanged)
    Q_PROPERTY(Ui_property* goldenAmber READ goldenAmber WRITE setGoldenAmber NOTIFY goldenAmberChanged)
    Q_PROPERTY(Ui_property* sunsetOrange READ sunsetOrange WRITE setSunsetOrange NOTIFY sunsetOrangeChanged)
    Q_PROPERTY(Ui_property* rubyRed READ rubyRed WRITE setRubyRed NOTIFY rubyRedChanged)
    Q_PROPERTY(Ui_property* hotPink READ hotPink WRITE setHotPink NOTIFY hotPinkChanged)
    Q_PROPERTY(Ui_property* royalPurple READ royalPurple WRITE setRoyalPurple NOTIFY royalPurpleChanged)
    Q_PROPERTY(Ui_property* indigoNight READ indigoNight WRITE setIndigoNight NOTIFY indigoNightChanged)
    Q_PROPERTY(Ui_property* slateNeutral READ slateNeutral WRITE setSlateNeutral NOTIFY slateNeutralChanged)

    Q_PROPERTY(Ui_property* nordFrost READ nordFrost WRITE setNordFrost NOTIFY nordFrostChanged)
    Q_PROPERTY(Ui_property* solarizedBlue READ solarizedBlue WRITE setSolarizedBlue NOTIFY solarizedBlueChanged)
    Q_PROPERTY(Ui_property* draculaPurple READ draculaPurple WRITE setDraculaPurple NOTIFY draculaPurpleChanged)
    Q_PROPERTY(Ui_property* gruvboxAqua READ gruvboxAqua WRITE setGruvboxAqua NOTIFY gruvboxAquaChanged)
    Q_PROPERTY(Ui_property* rosePineFoam READ rosePineFoam WRITE setRosePineFoam NOTIFY rosePineFoamChanged)
    Q_PROPERTY(Ui_property* kanagawaWave READ kanagawaWave WRITE setKanagawaWave NOTIFY kanagawaWaveChanged)
    Q_PROPERTY(Ui_property* githubBlue READ githubBlue WRITE setGithubBlue NOTIFY githubBlueChanged)
    Q_PROPERTY(Ui_property* nordAuroraRed READ nordAuroraRed WRITE setNordAuroraRed NOTIFY nordAuroraRedChanged)
    Q_PROPERTY(Ui_property* darkRed READ darkRed WRITE setDarkRed NOTIFY darkRedChanged)

    Q_PROPERTY(Ui_property* lightSkyBlue READ lightSkyBlue WRITE setLightSkyBlue NOTIFY lightSkyBlueChanged)
    Q_PROPERTY(Ui_property* lightMint READ lightMint WRITE setLightMint NOTIFY lightMintChanged)
    Q_PROPERTY(Ui_property* lightLavender READ lightLavender WRITE setLightLavender NOTIFY lightLavenderChanged)
    Q_PROPERTY(Ui_property* lightPeach READ lightPeach WRITE setLightPeach NOTIFY lightPeachChanged)
    Q_PROPERTY(Ui_property* lightRose READ lightRose WRITE setLightRose NOTIFY lightRoseChanged)
    Q_PROPERTY(Ui_property* lightRed READ lightRed WRITE setLightRed NOTIFY lightRedChanged)



    Q_PROPERTY(Ui_property* lightLemon READ lightLemon WRITE setLightLemon NOTIFY lightLemonChanged)
    Q_PROPERTY(Ui_property* lightCoral READ lightCoral WRITE setLightCoral NOTIFY lightCoralChanged)
    Q_PROPERTY(Ui_property* lightAqua READ lightAqua WRITE setLightAqua NOTIFY lightAquaChanged)
    Q_PROPERTY(Ui_property* lightTeal READ lightTeal WRITE setLightTeal NOTIFY lightTealChanged)
    Q_PROPERTY(Ui_property* lightOlive READ lightOlive WRITE setLightOlive NOTIFY lightOliveChanged)
    Q_PROPERTY(Ui_property* lightSand READ lightSand WRITE setLightSand NOTIFY lightSandChanged)
    Q_PROPERTY(Ui_property* lightSlateBlue READ lightSlateBlue WRITE setLightSlateBlue NOTIFY lightSlateBlueChanged)
    Q_PROPERTY(Ui_property* lightGrayNeutral READ lightGrayNeutral WRITE setLightGrayNeutral NOTIFY lightGrayNeutralChanged)



public:
    explicit Themes(QObject *parent = nullptr);

Ui_property* rangerGreen() const
{
    return m_rangerGreen;
}

Ui_property* navalOps() const
{
    return m_navalOps;
}

Ui_property* desertCoyote() const
{
    return m_desertCoyote;
}

Ui_property* arcticCommand() const
{
    return m_arcticCommand;
}

Ui_property* blackoutTactical() const
{
    return m_blackoutTactical;
}

Ui_property* oceanBlue() const
{
    return m_oceanBlue;
}

Ui_property* cyanWave() const
{
    return m_cyanWave;
}

Ui_property* tealLagoon() const
{
    return m_tealLagoon;
}

Ui_property* emeraldGreen() const
{
    return m_emeraldGreen;
}

Ui_property* limeZest() const
{
    return m_limeZest;
}

Ui_property* goldenAmber() const
{
    return m_goldenAmber;
}

Ui_property* sunsetOrange() const
{
    return m_sunsetOrange;
}

Ui_property* rubyRed() const
{
    return m_rubyRed;
}

Ui_property* hotPink() const
{
    return m_hotPink;
}

Ui_property* royalPurple() const
{
    return m_royalPurple;
}

Ui_property* indigoNight() const
{
    return m_indigoNight;
}

Ui_property* slateNeutral() const
{
    return m_slateNeutral;
}

Ui_property* nordFrost() const
{
    return m_nordFrost;
}

Ui_property* solarizedBlue() const
{
    return m_solarizedBlue;
}

Ui_property* draculaPurple() const
{
    return m_draculaPurple;
}

Ui_property* gruvboxAqua() const
{
    return m_gruvboxAqua;
}

Ui_property* rosePineFoam() const
{
    return m_rosePineFoam;
}

Ui_property* kanagawaWave() const
{
    return m_kanagawaWave;
}

Ui_property* githubBlue() const
{
    return m_githubBlue;
}

Ui_property* nordAuroraRed() const
{
    return m_nordAuroraRed;
}

Ui_property* darkRed() const
{
    return m_darkRed;
}

Ui_property* lightSkyBlue() const
{
    return m_lightSkyBlue;
}

Ui_property* lightMint() const
{
    return m_lightMint;
}

Ui_property* lightLavender() const
{
    return m_lightLavender;
}

Ui_property* lightPeach() const
{
    return m_lightPeach;
}

Ui_property* lightRose() const
{
    return m_lightRose;
}

Ui_property* lightRed() const
{
    return m_lightRed;
}

Ui_property* lightLemon() const
{
    return m_lightLemon;
}

Ui_property* lightCoral() const
{
    return m_lightCoral;
}

Ui_property* lightAqua() const
{
    return m_lightAqua;
}

Ui_property* lightTeal() const
{
    return m_lightTeal;
}

Ui_property* lightOlive() const
{
    return m_lightOlive;
}

Ui_property* lightSand() const
{
    return m_lightSand;
}

Ui_property* lightSlateBlue() const
{
    return m_lightSlateBlue;
}

Ui_property* lightGrayNeutral() const
{
    return m_lightGrayNeutral;
}

public slots:
void setRangerGreen(Ui_property* rangerGreen)
{
    if (m_rangerGreen == rangerGreen)
        return;

    m_rangerGreen = rangerGreen;
    emit rangerGreenChanged(m_rangerGreen);
}

void setNavalOps(Ui_property* navalOps)
{
    if (m_navalOps == navalOps)
        return;

    m_navalOps = navalOps;
    emit navalOpsChanged(m_navalOps);
}

void setDesertCoyote(Ui_property* desertCoyote)
{
    if (m_desertCoyote == desertCoyote)
        return;

    m_desertCoyote = desertCoyote;
    emit desertCoyoteChanged(m_desertCoyote);
}

void setArcticCommand(Ui_property* arcticCommand)
{
    if (m_arcticCommand == arcticCommand)
        return;

    m_arcticCommand = arcticCommand;
    emit arcticCommandChanged(m_arcticCommand);
}

void setBlackoutTactical(Ui_property* blackoutTactical)
{
    if (m_blackoutTactical == blackoutTactical)
        return;

    m_blackoutTactical = blackoutTactical;
    emit blackoutTacticalChanged(m_blackoutTactical);
}

void setOceanBlue(Ui_property* oceanBlue)
{
    if (m_oceanBlue == oceanBlue)
        return;

    m_oceanBlue = oceanBlue;
    emit oceanBlueChanged(m_oceanBlue);
}

void setCyanWave(Ui_property* cyanWave)
{
    if (m_cyanWave == cyanWave)
        return;

    m_cyanWave = cyanWave;
    emit cyanWaveChanged(m_cyanWave);
}

void setTealLagoon(Ui_property* tealLagoon)
{
    if (m_tealLagoon == tealLagoon)
        return;

    m_tealLagoon = tealLagoon;
    emit tealLagoonChanged(m_tealLagoon);
}

void setEmeraldGreen(Ui_property* emeraldGreen)
{
    if (m_emeraldGreen == emeraldGreen)
        return;

    m_emeraldGreen = emeraldGreen;
    emit emeraldGreenChanged(m_emeraldGreen);
}

void setLimeZest(Ui_property* limeZest)
{
    if (m_limeZest == limeZest)
        return;

    m_limeZest = limeZest;
    emit limeZestChanged(m_limeZest);
}

void setGoldenAmber(Ui_property* goldenAmber)
{
    if (m_goldenAmber == goldenAmber)
        return;

    m_goldenAmber = goldenAmber;
    emit goldenAmberChanged(m_goldenAmber);
}

void setSunsetOrange(Ui_property* sunsetOrange)
{
    if (m_sunsetOrange == sunsetOrange)
        return;

    m_sunsetOrange = sunsetOrange;
    emit sunsetOrangeChanged(m_sunsetOrange);
}

void setRubyRed(Ui_property* rubyRed)
{
    if (m_rubyRed == rubyRed)
        return;

    m_rubyRed = rubyRed;
    emit rubyRedChanged(m_rubyRed);
}

void setHotPink(Ui_property* hotPink)
{
    if (m_hotPink == hotPink)
        return;

    m_hotPink = hotPink;
    emit hotPinkChanged(m_hotPink);
}

void setRoyalPurple(Ui_property* royalPurple)
{
    if (m_royalPurple == royalPurple)
        return;

    m_royalPurple = royalPurple;
    emit royalPurpleChanged(m_royalPurple);
}

void setIndigoNight(Ui_property* indigoNight)
{
    if (m_indigoNight == indigoNight)
        return;

    m_indigoNight = indigoNight;
    emit indigoNightChanged(m_indigoNight);
}

void setSlateNeutral(Ui_property* slateNeutral)
{
    if (m_slateNeutral == slateNeutral)
        return;

    m_slateNeutral = slateNeutral;
    emit slateNeutralChanged(m_slateNeutral);
}

void setNordFrost(Ui_property* nordFrost)
{
    if (m_nordFrost == nordFrost)
        return;

    m_nordFrost = nordFrost;
    emit nordFrostChanged(m_nordFrost);
}

void setSolarizedBlue(Ui_property* solarizedBlue)
{
    if (m_solarizedBlue == solarizedBlue)
        return;

    m_solarizedBlue = solarizedBlue;
    emit solarizedBlueChanged(m_solarizedBlue);
}

void setDraculaPurple(Ui_property* draculaPurple)
{
    if (m_draculaPurple == draculaPurple)
        return;

    m_draculaPurple = draculaPurple;
    emit draculaPurpleChanged(m_draculaPurple);
}

void setGruvboxAqua(Ui_property* gruvboxAqua)
{
    if (m_gruvboxAqua == gruvboxAqua)
        return;

    m_gruvboxAqua = gruvboxAqua;
    emit gruvboxAquaChanged(m_gruvboxAqua);
}

void setRosePineFoam(Ui_property* rosePineFoam)
{
    if (m_rosePineFoam == rosePineFoam)
        return;

    m_rosePineFoam = rosePineFoam;
    emit rosePineFoamChanged(m_rosePineFoam);
}

void setKanagawaWave(Ui_property* kanagawaWave)
{
    if (m_kanagawaWave == kanagawaWave)
        return;

    m_kanagawaWave = kanagawaWave;
    emit kanagawaWaveChanged(m_kanagawaWave);
}

void setGithubBlue(Ui_property* githubBlue)
{
    if (m_githubBlue == githubBlue)
        return;

    m_githubBlue = githubBlue;
    emit githubBlueChanged(m_githubBlue);
}

void setNordAuroraRed(Ui_property* nordAuroraRed)
{
    if (m_nordAuroraRed == nordAuroraRed)
        return;

    m_nordAuroraRed = nordAuroraRed;
    emit nordAuroraRedChanged(m_nordAuroraRed);
}

void setDarkRed(Ui_property* darkRed)
{
    if (m_darkRed == darkRed)
        return;

    m_darkRed = darkRed;
    emit darkRedChanged(m_darkRed);
}

void setLightSkyBlue(Ui_property* lightSkyBlue)
{
    if (m_lightSkyBlue == lightSkyBlue)
        return;

    m_lightSkyBlue = lightSkyBlue;
    emit lightSkyBlueChanged(m_lightSkyBlue);
}

void setLightMint(Ui_property* lightMint)
{
    if (m_lightMint == lightMint)
        return;

    m_lightMint = lightMint;
    emit lightMintChanged(m_lightMint);
}

void setLightLavender(Ui_property* lightLavender)
{
    if (m_lightLavender == lightLavender)
        return;

    m_lightLavender = lightLavender;
    emit lightLavenderChanged(m_lightLavender);
}

void setLightPeach(Ui_property* lightPeach)
{
    if (m_lightPeach == lightPeach)
        return;

    m_lightPeach = lightPeach;
    emit lightPeachChanged(m_lightPeach);
}

void setLightRose(Ui_property* lightRose)
{
    if (m_lightRose == lightRose)
        return;

    m_lightRose = lightRose;
    emit lightRoseChanged(m_lightRose);
}

void setLightRed(Ui_property* lightRed)
{
    if (m_lightRed == lightRed)
        return;

    m_lightRed = lightRed;
    emit lightRedChanged(m_lightRed);
}

void setLightLemon(Ui_property* lightLemon)
{
    if (m_lightLemon == lightLemon)
        return;

    m_lightLemon = lightLemon;
    emit lightLemonChanged(m_lightLemon);
}

void setLightCoral(Ui_property* lightCoral)
{
    if (m_lightCoral == lightCoral)
        return;

    m_lightCoral = lightCoral;
    emit lightCoralChanged(m_lightCoral);
}

void setLightAqua(Ui_property* lightAqua)
{
    if (m_lightAqua == lightAqua)
        return;

    m_lightAqua = lightAqua;
    emit lightAquaChanged(m_lightAqua);
}

void setLightTeal(Ui_property* lightTeal)
{
    if (m_lightTeal == lightTeal)
        return;

    m_lightTeal = lightTeal;
    emit lightTealChanged(m_lightTeal);
}

void setLightOlive(Ui_property* lightOlive)
{
    if (m_lightOlive == lightOlive)
        return;

    m_lightOlive = lightOlive;
    emit lightOliveChanged(m_lightOlive);
}

void setLightSand(Ui_property* lightSand)
{
    if (m_lightSand == lightSand)
        return;

    m_lightSand = lightSand;
    emit lightSandChanged(m_lightSand);
}

void setLightSlateBlue(Ui_property* lightSlateBlue)
{
    if (m_lightSlateBlue == lightSlateBlue)
        return;

    m_lightSlateBlue = lightSlateBlue;
    emit lightSlateBlueChanged(m_lightSlateBlue);
}

void setLightGrayNeutral(Ui_property* lightGrayNeutral)
{
    if (m_lightGrayNeutral == lightGrayNeutral)
        return;

    m_lightGrayNeutral = lightGrayNeutral;
    emit lightGrayNeutralChanged(m_lightGrayNeutral);
}

signals:

void rangerGreenChanged(Ui_property* rangerGreen);
void navalOpsChanged(Ui_property* navalOps);
void desertCoyoteChanged(Ui_property* desertCoyote);
void arcticCommandChanged(Ui_property* arcticCommand);
void blackoutTacticalChanged(Ui_property* blackoutTactical);


void oceanBlueChanged(Ui_property* oceanBlue);

void cyanWaveChanged(Ui_property* cyanWave);

void tealLagoonChanged(Ui_property* tealLagoon);

void emeraldGreenChanged(Ui_property* emeraldGreen);

void limeZestChanged(Ui_property* limeZest);

void goldenAmberChanged(Ui_property* goldenAmber);

void sunsetOrangeChanged(Ui_property* sunsetOrange);

void rubyRedChanged(Ui_property* rubyRed);

void hotPinkChanged(Ui_property* hotPink);

void royalPurpleChanged(Ui_property* royalPurple);

void indigoNightChanged(Ui_property* indigoNight);

void slateNeutralChanged(Ui_property* slateNeutral);

void nordFrostChanged(Ui_property* nordFrost);

void solarizedBlueChanged(Ui_property* solarizedBlue);

void draculaPurpleChanged(Ui_property* draculaPurple);

void gruvboxAquaChanged(Ui_property* gruvboxAqua);

void rosePineFoamChanged(Ui_property* rosePineFoam);

void kanagawaWaveChanged(Ui_property* kanagawaWave);

void githubBlueChanged(Ui_property* githubBlue);

void nordAuroraRedChanged(Ui_property* nordAuroraRed);

void darkRedChanged(Ui_property* darkRed);

void lightSkyBlueChanged(Ui_property* lightSkyBlue);

void lightMintChanged(Ui_property* lightMint);

void lightLavenderChanged(Ui_property* lightLavender);

void lightPeachChanged(Ui_property* lightPeach);

void lightRoseChanged(Ui_property* lightRose);

void lightRedChanged(Ui_property* lightRed);

void lightLemonChanged(Ui_property* lightLemon);

void lightCoralChanged(Ui_property* lightCoral);

void lightAquaChanged(Ui_property* lightAqua);

void lightTealChanged(Ui_property* lightTeal);

void lightOliveChanged(Ui_property* lightOlive);

void lightSandChanged(Ui_property* lightSand);

void lightSlateBlueChanged(Ui_property* lightSlateBlue);

void lightGrayNeutralChanged(Ui_property* lightGrayNeutral);

private:
Ui_property* m_rangerGreen = nullptr;
Ui_property* m_navalOps = nullptr;
Ui_property* m_desertCoyote = nullptr;
Ui_property* m_arcticCommand = nullptr;
Ui_property* m_blackoutTactical = nullptr;

Ui_property* m_oceanBlue;
Ui_property* m_cyanWave;
Ui_property* m_tealLagoon;
Ui_property* m_emeraldGreen;
Ui_property* m_limeZest;
Ui_property* m_goldenAmber;
Ui_property* m_sunsetOrange;
Ui_property* m_rubyRed;
Ui_property* m_hotPink;
Ui_property* m_royalPurple;
Ui_property* m_indigoNight;
Ui_property* m_slateNeutral;


Ui_property* m_nordFrost;
Ui_property* m_solarizedBlue;
Ui_property* m_draculaPurple;
Ui_property* m_gruvboxAqua;
Ui_property* m_rosePineFoam;
Ui_property* m_kanagawaWave;
Ui_property* m_githubBlue;
Ui_property* m_nordAuroraRed;
Ui_property* m_darkRed;
Ui_property* m_lightSkyBlue;
Ui_property* m_lightMint;
Ui_property* m_lightLavender;
Ui_property* m_lightPeach;
Ui_property* m_lightRose;
Ui_property* m_lightRed;
Ui_property* m_lightLemon;
Ui_property* m_lightCoral;
Ui_property* m_lightAqua;
Ui_property* m_lightTeal;
Ui_property* m_lightOlive;
Ui_property* m_lightSand;
Ui_property* m_lightSlateBlue;
Ui_property* m_lightGrayNeutral;
};

#endif // THEMES_H
