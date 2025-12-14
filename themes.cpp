#include "themes.h"

Themes::Themes(QObject *parent) : QObject(parent)
{

    m_rangerGreen = new Ui_property;
    m_navalOps = new Ui_property;
    m_desertCoyote = new Ui_property;
    m_arcticCommand = new Ui_property;
    m_blackoutTactical = new Ui_property;
    m_oceanBlue = new Ui_property;
    m_cyanWave = new Ui_property;
    m_tealLagoon = new Ui_property;
    m_emeraldGreen = new Ui_property;
    m_limeZest = new Ui_property;
    m_goldenAmber = new Ui_property;
    m_sunsetOrange = new Ui_property;
    m_rubyRed = new Ui_property;
    m_hotPink = new Ui_property;
    m_royalPurple = new Ui_property;
    m_indigoNight = new Ui_property;
    m_slateNeutral = new Ui_property;
    m_nordFrost = new Ui_property;
    m_solarizedBlue = new Ui_property;
    m_draculaPurple = new Ui_property;
    m_gruvboxAqua = new Ui_property;
    m_rosePineFoam = new Ui_property;
    m_kanagawaWave = new Ui_property;
    m_githubBlue = new Ui_property;
    m_nordAuroraRed = new Ui_property;
    m_darkRed = new Ui_property;

    m_lightSkyBlue = new Ui_property;
    m_lightMint  = new Ui_property;
    m_lightLavender = new Ui_property;
    m_lightPeach = new Ui_property;
    m_lightRose    = new Ui_property;
    m_lightRed = new Ui_property;


    m_lightLemon = new Ui_property;
    m_lightCoral = new Ui_property;
    m_lightAqua = new Ui_property;
    m_lightTeal = new Ui_property;
    m_lightOlive = new Ui_property;
    m_lightSand = new Ui_property;
    m_lightSlateBlue = new Ui_property;
    m_lightGrayNeutral = new Ui_property;

    // =========================
    // Ranger Green
    // =========================
    m_rangerGreen->setBackgroundColor("#141A15");  // Dark forest green
    m_rangerGreen->setBorderColor("#3C4A3E");      // Olive green

    m_rangerGreen->setButtonReleasedColor("#2A3A2C");  // Muted military green
    m_rangerGreen->setButtonReleaseFontColor("#EAF0E6");  // Off-white, light gray
    m_rangerGreen->setButtonHoveredColor("#344C36");   // Slightly lighter green
    m_rangerGreen->setButtonHoverFontColor("#F2F6F0");  // Clean light gray
    m_rangerGreen->setButtonSelectedColor("#4C6B47");   // Strong olive green
    m_rangerGreen->setButtonSelectedFontColor("#F7FAF5");  // Soft white

    m_rangerGreen->setSectionBackgroundColor("#1B231C");  // Dark forest green
    m_rangerGreen->setSectionRowColor("#202B22");   // Lush green with brown hints
    m_rangerGreen->setSectionRowBorder("#2E3A30");  // Earthy brown-green
    m_rangerGreen->setSectionRowFontColor("#DDE3DA");  // Pale sage green

    m_rangerGreen->setInputBoxColor("#111611");  // Deep, dark green
    m_rangerGreen->setLoginButtonColor("#3E5B3B");  // Military olive green

    m_rangerGreen->setSelectFontColor("#F2F6F0");  // Clean off-white
    m_rangerGreen->setSelectBackgroundColor("#2A3A2C");  // Muted green

    m_rangerGreen->setLableSelectedColor("#4C6B47");  // Olive green, for selected labels
    m_rangerGreen->setLableReleasedColor("#B8C2B2");  // Light tan-gray

    m_rangerGreen->setTitleColor("#0F1510");  // Dark moss green
    m_rangerGreen->setTitleFontColor("#F0F4ED");  // Soft off-white for title text
    m_rangerGreen->setFirstExtra("#9A7B3D");    // muted brass / rank accent
    m_rangerGreen->setsecondExtra("#6B2326");   // deep oxblood (serious alert)


    // =========================
    // Naval Ops
    // =========================
    m_navalOps->setBackgroundColor("#0B111A");  // Deep navy blue
    m_navalOps->setBorderColor("#2A3A4D");      // Dark steel blue

    m_navalOps->setButtonReleasedColor("#17273A");  // Dark gray-blue
    m_navalOps->setButtonReleaseFontColor("#EAF2FA");  // Pale, icy white
    m_navalOps->setButtonHoveredColor("#1F3550");   // Slate blue
    m_navalOps->setButtonHoverFontColor("#F2F7FC");  // White with a blue tint
    m_navalOps->setButtonSelectedColor("#2F5F8F");   // Strong navy blue
    m_navalOps->setButtonSelectedFontColor("#F7FBFF");  // Soft light blue

    m_navalOps->setSectionBackgroundColor("#0F1722");  // Dark gray-blue
    m_navalOps->setSectionRowColor("#131F2E");   // Deep sea greenish blue
    m_navalOps->setSectionRowBorder("#1D2C3E");  // Steel blue
    m_navalOps->setSectionRowFontColor("#DCE6F2");  // Icy light gray

    m_navalOps->setInputBoxColor("#0A0F17");  // Nearly black, deep navy
    m_navalOps->setLoginButtonColor("#2F5F8F");  // Bold navy blue

    m_navalOps->setSelectFontColor("#F7FBFF");  // Clean, bright white
    m_navalOps->setSelectBackgroundColor("#1F3550");  // Dark navy blue

    m_navalOps->setLableSelectedColor("#4A7AA7");  // Navy blue for selected labels
    m_navalOps->setLableReleasedColor("#A9B9C8");  // Pale blue-gray

    m_navalOps->setTitleColor("#0B111A");  // Deep navy blue
    m_navalOps->setTitleFontColor("#F5F9FF");  // Clean white with a hint of blue
    m_navalOps->setFirstExtra("#C2A14A");       // naval insignia gold
    m_navalOps->setsecondExtra("#2F6F7A");      // deep sea teal (secondary accent)

    // =========================
    // Desert Coyote
    // =========================
    m_desertCoyote->setBackgroundColor("#201C14");  // Dark desert brown
    m_desertCoyote->setBorderColor("#6F634B");      // Sand-colored brown

    m_desertCoyote->setButtonReleasedColor("#3C3326");  // Warm brown
    m_desertCoyote->setButtonReleaseFontColor("#F5F1E8");  // Warm beige
    m_desertCoyote->setButtonHoveredColor("#4B402F");   // Muted tan
    m_desertCoyote->setButtonHoverFontColor("#FFF7E8");  // Soft off-white
    m_desertCoyote->setButtonSelectedColor("#7A6A4F");   // Olive-brown desert color
    m_desertCoyote->setButtonSelectedFontColor("#FFF9ED");  // Light tan for font

    m_desertCoyote->setSectionBackgroundColor("#2A241B");  // Earthy brown
    m_desertCoyote->setSectionRowColor("#322B20");   // Dark brown with yellowish tone
    m_desertCoyote->setSectionRowBorder("#4A4131");  // Sandstone brown
    m_desertCoyote->setSectionRowFontColor("#E9E1D2");  // Off-white with tan

    m_desertCoyote->setInputBoxColor("#19150F");  // Dark earthy brown
    m_desertCoyote->setLoginButtonColor("#7A6A4F");  // Military brown

    m_desertCoyote->setSelectFontColor("#FFF7E8");  // Warm ivory
    m_desertCoyote->setSelectBackgroundColor("#4B402F");  // Earthy brown

    m_desertCoyote->setLableSelectedColor("#9B875F");  // Sandstone color for selected labels
    m_desertCoyote->setLableReleasedColor("#C7B89C");  // Dusty beige

    m_desertCoyote->setTitleColor("#201C14");  // Dark desert brown
    m_desertCoyote->setTitleFontColor("#FFF7E8");  // Warm white for the title
    m_desertCoyote->setFirstExtra("#6B7A3A");   // sage/olive drab (fits desert camo)
    m_desertCoyote->setsecondExtra("#9A4A2F"); // rust (desert warning accent)

    // =========================
    // Arctic Command
    // =========================
    m_arcticCommand->setBackgroundColor("#12161A");  // Dark icy blue
    m_arcticCommand->setBorderColor("#4E5E69");      // Stormy gray-blue

    m_arcticCommand->setButtonReleasedColor("#252E35");  // Muted navy gray
    m_arcticCommand->setButtonReleaseFontColor("#E9EEF2");  // Cool light gray
    m_arcticCommand->setButtonHoveredColor("#303C45");   // Slate blue
    m_arcticCommand->setButtonHoverFontColor("#F7FAFC");  // Clean white
    m_arcticCommand->setButtonSelectedColor("#4C6A82");   // Arctic blue
    m_arcticCommand->setButtonSelectedFontColor("#FFFFFF");  // Bright white for selected button text

    m_arcticCommand->setSectionBackgroundColor("#1A1F24");  // Dark navy background
    m_arcticCommand->setSectionRowColor("#20272D");   // Dark slate gray
    m_arcticCommand->setSectionRowBorder("#2F3A42");  // Deep charcoal
    m_arcticCommand->setSectionRowFontColor("#E5EBEF");  // Cool off-white

    m_arcticCommand->setInputBoxColor("#0F1316");  // Very dark gray
    m_arcticCommand->setLoginButtonColor("#4C6A82");  // Deep blue

    m_arcticCommand->setSelectFontColor("#FFFFFF");  // Pure white for selections
    m_arcticCommand->setSelectBackgroundColor("#303C45");  // Slate blue for selection background

    m_arcticCommand->setLableSelectedColor("#6E8CA0");  // Muted light blue
    m_arcticCommand->setLableReleasedColor("#B7C3CC");  // Soft gray-blue

    m_arcticCommand->setTitleColor("#12161A");  // Deep navy blue background for title
    m_arcticCommand->setTitleFontColor("#F7FAFC");  // White title text
    m_arcticCommand->setFirstExtra("#A7C6D8");  // arctic ice highlight
    m_arcticCommand->setsecondExtra("#7C6F55"); // warm khaki (strap/gear accent)

    // =========================
    // Blackout Tactical
    // =========================
    m_blackoutTactical->setBackgroundColor("#0E0F10");  // Very dark charcoal black
    m_blackoutTactical->setBorderColor("#2E3133");      // Dark gray-blue

    m_blackoutTactical->setButtonReleasedColor("#1A1C1E");  // Dark gray-black
    m_blackoutTactical->setButtonReleaseFontColor("#F3F5F6");  // Light gray
    m_blackoutTactical->setButtonHoveredColor("#23262A");   // Dark gray
    m_blackoutTactical->setButtonHoverFontColor("#FFFFFF");  // White
    m_blackoutTactical->setButtonSelectedColor("#3A444D");   // Charcoal blue
    m_blackoutTactical->setButtonSelectedFontColor("#FFFFFF");  // Bright white

    m_blackoutTactical->setSectionBackgroundColor("#141618");  // Charcoal black
    m_blackoutTactical->setSectionRowColor("#1A1D20");   // Gray-black
    m_blackoutTactical->setSectionRowBorder("#25292C");  // Dark gray
    m_blackoutTactical->setSectionRowFontColor("#DDE1E4");  // Light gray

    m_blackoutTactical->setInputBoxColor("#0B0C0D");  // Deep black
    m_blackoutTactical->setLoginButtonColor("#3A444D");  // Dark charcoal gray

    m_blackoutTactical->setSelectFontColor("#FFFFFF");  // Bright white
    m_blackoutTactical->setSelectBackgroundColor("#23262A");  // Dark gray

    m_blackoutTactical->setLableSelectedColor("#54616A");  // Muted steel blue
    m_blackoutTactical->setLableReleasedColor("#9BA3A9");  // Light steel gray

    m_blackoutTactical->setTitleColor("#0E0F10");  // Dark gray-black
    m_blackoutTactical->setTitleFontColor("#FFFFFF");  // White title font
    m_blackoutTactical->setFirstExtra("#B56F2A");   // muted amber (caution / emphasis)
    m_blackoutTactical->setsecondExtra("#8A2E2E");  // deep crimson (danger / destructive)

    // =========================
    // oceanBlue  (Nord Blue (base: #5E81AC))
    // Base accent: #5E81AC
    // =========================
    m_oceanBlue->setBackgroundColor("#161B22");  // Background
    m_oceanBlue->setBorderColor("#384452");  // Borders / outlines
    m_oceanBlue->setButtonReleasedColor("#222A35");  // Button (released)
    m_oceanBlue->setButtonReleaseFontColor("#EBEDEF");  // Button text (released)
    m_oceanBlue->setButtonHoveredColor("#28323E");  // Button (hover)
    m_oceanBlue->setButtonHoverFontColor("#EBEDEF");  // Button text (hover)
    m_oceanBlue->setButtonSelectedColor("#6889B1");  // Button (selected) / primary accent
    m_oceanBlue->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_oceanBlue->setSectionBackgroundColor("#1C232B");  // Section background
    m_oceanBlue->setSectionRowColor("#212831");  // Section row
    m_oceanBlue->setSectionRowBorder("#384452");  // Section row border
    m_oceanBlue->setSectionRowFontColor("#CCD1D6");  // Section row text
    m_oceanBlue->setInputBoxColor("#14191F");  // Input box
    m_oceanBlue->setLoginButtonColor("#7190B6");  // Login / CTA button
    m_oceanBlue->setSelectFontColor("#EBEDEF");  // Select text
    m_oceanBlue->setSelectBackgroundColor("#3C4E63");  // Select background
    m_oceanBlue->setLableSelectedColor("#6889B1");  // Label selected
    m_oceanBlue->setLableReleasedColor("#A0A7B1");  // Label released
    m_oceanBlue->setTitleColor("#101419");  // Title bar/background
    m_oceanBlue->setTitleFontColor("#EBEDEF");  // Title text
    m_oceanBlue->setFirstExtra("#89A2C2");  // Extra 1 (same hue group)
    m_oceanBlue->setsecondExtra("#3A5473");  // Extra 2 (same hue group)

    // =========================
    // cyanWave  (Solarized Cyan (base: #2AA198))
    // Base accent: #2AA198
    // =========================
    m_cyanWave->setBackgroundColor("#0F1F20");  // Background
    m_cyanWave->setBorderColor("#2F5556");  // Borders / outlines
    m_cyanWave->setButtonReleasedColor("#173132");  // Button (released)
    m_cyanWave->setButtonReleaseFontColor("#ECEFEE");  // Button text (released)
    m_cyanWave->setButtonHoveredColor("#1B3B3C");  // Button (hover)
    m_cyanWave->setButtonHoverFontColor("#ECEFEE");  // Button text (hover)
    m_cyanWave->setButtonSelectedColor("#33AAA1");  // Button (selected) / primary accent
    m_cyanWave->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_cyanWave->setSectionBackgroundColor("#133132");  // Section background
    m_cyanWave->setSectionRowColor("#173838");  // Section row
    m_cyanWave->setSectionRowBorder("#2F5556");  // Section row border
    m_cyanWave->setSectionRowFontColor("#CED6D4");  // Section row text
    m_cyanWave->setInputBoxColor("#0D1A1B");  // Input box
    m_cyanWave->setLoginButtonColor("#44B3AB");  // Login / CTA button
    m_cyanWave->setSelectFontColor("#ECEFEE");  // Select text
    m_cyanWave->setSelectBackgroundColor("#2B7773");  // Select background
    m_cyanWave->setLableSelectedColor("#33AAA1");  // Label selected
    m_cyanWave->setLableReleasedColor("#A0B1AE");  // Label released
    m_cyanWave->setTitleColor("#0A1415");  // Title bar/background
    m_cyanWave->setTitleFontColor("#ECEFEE");  // Title text
    m_cyanWave->setFirstExtra("#70C4BC");  // Extra 1 (same hue group)
    m_cyanWave->setsecondExtra("#0F6D67");  // Extra 2 (same hue group)

    // =========================
    // tealLagoon  (Catppuccin Teal (base: #94E2D5))
    // Base accent: #94E2D5
    // =========================
    m_tealLagoon->setBackgroundColor("#0C1D1A");  // Background
    m_tealLagoon->setBorderColor("#2B5450");  // Borders / outlines
    m_tealLagoon->setButtonReleasedColor("#13302C");  // Button (released)
    m_tealLagoon->setButtonReleaseFontColor("#ECEFEE");  // Button text (released)
    m_tealLagoon->setButtonHoveredColor("#173A35");  // Button (hover)
    m_tealLagoon->setButtonHoverFontColor("#ECEFEE");  // Button text (hover)
    m_tealLagoon->setButtonSelectedColor("#9EE5D9");  // Button (selected) / primary accent
    m_tealLagoon->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_tealLagoon->setSectionBackgroundColor("#102E2A");  // Section background
    m_tealLagoon->setSectionRowColor("#133530");  // Section row
    m_tealLagoon->setSectionRowBorder("#2B5450");  // Section row border
    m_tealLagoon->setSectionRowFontColor("#CFD7D5");  // Section row text
    m_tealLagoon->setInputBoxColor("#0A1916");  // Input box
    m_tealLagoon->setLoginButtonColor("#A8E9DE");  // Login / CTA button
    m_tealLagoon->setSelectFontColor("#ECEFEE");  // Select text
    m_tealLagoon->setSelectBackgroundColor("#4B8D85");  // Select background
    m_tealLagoon->setLableSelectedColor("#9EE5D9");  // Label selected
    m_tealLagoon->setLableReleasedColor("#A0B1AE");  // Label released
    m_tealLagoon->setTitleColor("#071210");  // Title bar/background
    m_tealLagoon->setTitleFontColor("#ECEFEE");  // Title text
    m_tealLagoon->setFirstExtra("#B8EFE6");  // Extra 1 (same hue group)
    m_tealLagoon->setsecondExtra("#4D8A82");  // Extra 2 (same hue group)

    // =========================
    // emeraldGreen  (Everforest Green (base: #A7C080))
    // Base accent: #A7C080
    // =========================
    m_emeraldGreen->setBackgroundColor("#171F14");  // Background
    m_emeraldGreen->setBorderColor("#3E4F33");  // Borders / outlines
    m_emeraldGreen->setButtonReleasedColor("#242E1F");  // Button (released)
    m_emeraldGreen->setButtonReleaseFontColor("#ECEFEC");  // Button text (released)
    m_emeraldGreen->setButtonHoveredColor("#2B3626");  // Button (hover)
    m_emeraldGreen->setButtonHoverFontColor("#ECEFEC");  // Button text (hover)
    m_emeraldGreen->setButtonSelectedColor("#AEC58A");  // Button (selected) / primary accent
    m_emeraldGreen->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_emeraldGreen->setSectionBackgroundColor("#1D2819");  // Section background
    m_emeraldGreen->setSectionRowColor("#222E1E");  // Section row
    m_emeraldGreen->setSectionRowBorder("#3E4F33");  // Section row border
    m_emeraldGreen->setSectionRowFontColor("#D4D6CF");  // Section row text
    m_emeraldGreen->setInputBoxColor("#141B10");  // Input box
    m_emeraldGreen->setLoginButtonColor("#B7CC97");  // Login / CTA button
    m_emeraldGreen->setSelectFontColor("#ECEFEC");  // Select text
    m_emeraldGreen->setSelectBackgroundColor("#5B703B");  // Select background
    m_emeraldGreen->setLableSelectedColor("#AEC58A");  // Label selected
    m_emeraldGreen->setLableReleasedColor("#A8B1A0");  // Label released
    m_emeraldGreen->setTitleColor("#0F140B");  // Title bar/background
    m_emeraldGreen->setTitleFontColor("#ECEFEC");  // Title text
    m_emeraldGreen->setFirstExtra("#C2D6A5");  // Extra 1 (same hue group)
    m_emeraldGreen->setsecondExtra("#5C6F3A");  // Extra 2 (same hue group)

    // =========================
    // limeZest  (Solarized Green (base: #859900))
    // Base accent: #859900
    // =========================
    m_limeZest->setBackgroundColor("#252710");  // Background
    m_limeZest->setBorderColor("#565C2D");  // Borders / outlines
    m_limeZest->setButtonReleasedColor("#35371A");  // Button (released)
    m_limeZest->setButtonReleaseFontColor("#EEEFEB");  // Button text (released)
    m_limeZest->setButtonHoveredColor("#3D4020");  // Button (hover)
    m_limeZest->setButtonHoverFontColor("#EEEFEB");  // Button text (hover)
    m_limeZest->setButtonSelectedColor("#8C9F0F");  // Button (selected) / primary accent
    m_limeZest->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_limeZest->setSectionBackgroundColor("#2E3116");  // Section background
    m_limeZest->setSectionRowColor("#34371A");  // Section row
    m_limeZest->setSectionRowBorder("#565C2D");  // Section row border
    m_limeZest->setSectionRowFontColor("#D5D6CC");  // Section row text
    m_limeZest->setInputBoxColor("#21240F");  // Input box
    m_limeZest->setLoginButtonColor("#94A51F");  // Login / CTA button
    m_limeZest->setSelectFontColor("#EEEFEB");  // Select text
    m_limeZest->setSelectBackgroundColor("#555F13");  // Select background
    m_limeZest->setLableSelectedColor("#8C9F0F");  // Label selected
    m_limeZest->setLableReleasedColor("#AFB1A0");  // Label released
    m_limeZest->setTitleColor("#1B1D0C");  // Title bar/background
    m_limeZest->setTitleFontColor("#EEEFEB");  // Title text
    m_limeZest->setFirstExtra("#A7B647");  // Extra 1 (same hue group)
    m_limeZest->setsecondExtra("#525F00");  // Extra 2 (same hue group)

    // =========================
    // goldenAmber  (Gruvbox Yellow (base: #D79921))
    // Base accent: #D79921
    // =========================
    m_goldenAmber->setBackgroundColor("#261C0E");  // Background
    m_goldenAmber->setBorderColor("#5B3E1F");  // Borders / outlines
    m_goldenAmber->setButtonReleasedColor("#362713");  // Button (released)
    m_goldenAmber->setButtonReleaseFontColor("#EEEDEB");  // Button text (released)
    m_goldenAmber->setButtonHoveredColor("#402E16");  // Button (hover)
    m_goldenAmber->setButtonHoverFontColor("#EEEDEB");  // Button text (hover)
    m_goldenAmber->setButtonSelectedColor("#DAA030");  // Button (selected) / primary accent
    m_goldenAmber->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_goldenAmber->setSectionBackgroundColor("#2F2411");  // Section background
    m_goldenAmber->setSectionRowColor("#352813");  // Section row
    m_goldenAmber->setSectionRowBorder("#5B3E1F");  // Section row border
    m_goldenAmber->setSectionRowFontColor("#D6D2CC");  // Section row text
    m_goldenAmber->setInputBoxColor("#21170C");  // Input box
    m_goldenAmber->setLoginButtonColor("#E0AE4B");  // Login / CTA button
    m_goldenAmber->setSelectFontColor("#EEEDEB");  // Select text
    m_goldenAmber->setSelectBackgroundColor("#6B4A1B");  // Select background
    m_goldenAmber->setLableSelectedColor("#DAA030");  // Label selected
    m_goldenAmber->setLableReleasedColor("#B1A7A0");  // Label released
    m_goldenAmber->setTitleColor("#1B140A");  // Title bar/background
    m_goldenAmber->setTitleFontColor("#EEEDEB");  // Title text
    m_goldenAmber->setFirstExtra("#E6BE6E");  // Extra 1 (same hue group)
    m_goldenAmber->setsecondExtra("#7B4E00");  // Extra 2 (same hue group)

    // =========================
    // sunsetOrange  (Ayu Orange (base: #FFB454))
    // Base accent: #FFB454
    // =========================
    m_sunsetOrange->setBackgroundColor("#241B11");  // Background
    m_sunsetOrange->setBorderColor("#59411D");  // Borders / outlines
    m_sunsetOrange->setButtonReleasedColor("#342614");  // Button (released)
    m_sunsetOrange->setButtonReleaseFontColor("#EEEDEB");  // Button text (released)
    m_sunsetOrange->setButtonHoveredColor("#3D2D17");  // Button (hover)
    m_sunsetOrange->setButtonHoverFontColor("#EEEDEB");  // Button text (hover)
    m_sunsetOrange->setButtonSelectedColor("#FFB861");  // Button (selected) / primary accent
    m_sunsetOrange->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_sunsetOrange->setSectionBackgroundColor("#2D2312");  // Section background
    m_sunsetOrange->setSectionRowColor("#332714");  // Section row
    m_sunsetOrange->setSectionRowBorder("#59411D");  // Section row border
    m_sunsetOrange->setSectionRowFontColor("#D6D2CC");  // Section row text
    m_sunsetOrange->setInputBoxColor("#1F160E");  // Input box
    m_sunsetOrange->setLoginButtonColor("#FFC178");  // Login / CTA button
    m_sunsetOrange->setSelectFontColor("#EEEDEB");  // Select text
    m_sunsetOrange->setSelectBackgroundColor("#6A4B1D");  // Select background
    m_sunsetOrange->setLableSelectedColor("#FFB861");  // Label selected
    m_sunsetOrange->setLableReleasedColor("#B1A7A0");  // Label released
    m_sunsetOrange->setTitleColor("#18110A");  // Title bar/background
    m_sunsetOrange->setTitleFontColor("#EEEDEB");  // Title text
    m_sunsetOrange->setFirstExtra("#FFD09B");  // Extra 1 (same hue group)
    m_sunsetOrange->setsecondExtra("#8A5200");  // Extra 2 (same hue group)

    // =========================
    // rubyRed  (Dracula Red (base: #FF5555))
    // Base accent: #FF5555
    // =========================
    m_rubyRed->setBackgroundColor("#231112");  // Background
    m_rubyRed->setBorderColor("#582022");  // Borders / outlines
    m_rubyRed->setButtonReleasedColor("#331617");  // Button (released)
    m_rubyRed->setButtonReleaseFontColor("#EEECEC");  // Button text (released)
    m_rubyRed->setButtonHoveredColor("#3C1A1C");  // Button (hover)
    m_rubyRed->setButtonHoverFontColor("#EEECEC");  // Button text (hover)
    m_rubyRed->setButtonSelectedColor("#FF6060");  // Button (selected) / primary accent
    m_rubyRed->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_rubyRed->setSectionBackgroundColor("#2C1415");  // Section background
    m_rubyRed->setSectionRowColor("#321617");  // Section row
    m_rubyRed->setSectionRowBorder("#582022");  // Section row border
    m_rubyRed->setSectionRowFontColor("#D6CDCD");  // Section row text
    m_rubyRed->setInputBoxColor("#1E0E0F");  // Input box
    m_rubyRed->setLoginButtonColor("#FF7878");  // Login / CTA button
    m_rubyRed->setSelectFontColor("#EEECEC");  // Select text
    m_rubyRed->setSelectBackgroundColor("#6B1B20");  // Select background
    m_rubyRed->setLableSelectedColor("#FF6060");  // Label selected
    m_rubyRed->setLableReleasedColor("#B1A0A0");  // Label released
    m_rubyRed->setTitleColor("#150809");  // Title bar/background
    m_rubyRed->setTitleFontColor("#EEECEC");  // Title text
    m_rubyRed->setFirstExtra("#FF9A9A");  // Extra 1 (same hue group)
    m_rubyRed->setsecondExtra("#8A0000");  // Extra 2 (same hue group)

    // =========================
    // hotPink  (Monokai Pink (base: #F92672))
    // Base accent: #F92672
    // =========================
    m_hotPink->setBackgroundColor("#220A16");  // Background
    m_hotPink->setBorderColor("#5A1C3B");  // Borders / outlines
    m_hotPink->setButtonReleasedColor("#330D21");  // Button (released)
    m_hotPink->setButtonReleaseFontColor("#EEECEF");  // Button text (released)
    m_hotPink->setButtonHoveredColor("#3C1027");  // Button (hover)
    m_hotPink->setButtonHoverFontColor("#EEECEF");  // Button text (hover)
    m_hotPink->setButtonSelectedColor("#FA3179");  // Button (selected) / primary accent
    m_hotPink->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_hotPink->setSectionBackgroundColor("#2C0C1C");  // Section background
    m_hotPink->setSectionRowColor("#320E20");  // Section row
    m_hotPink->setSectionRowBorder("#5A1C3B");  // Section row border
    m_hotPink->setSectionRowFontColor("#D7CDD3");  // Section row text
    m_hotPink->setInputBoxColor("#1D0812");  // Input box
    m_hotPink->setLoginButtonColor("#FB4A8B");  // Login / CTA button
    m_hotPink->setSelectFontColor("#EEECEF");  // Select text
    m_hotPink->setSelectBackgroundColor("#6B1A43");  // Select background
    m_hotPink->setLableSelectedColor("#FA3179");  // Label selected
    m_hotPink->setLableReleasedColor("#B1A0AA");  // Label released
    m_hotPink->setTitleColor("#14050C");  // Title bar/background
    m_hotPink->setTitleFontColor("#EEECEF");  // Title text
    m_hotPink->setFirstExtra("#FF7CAB");  // Extra 1 (same hue group)
    m_hotPink->setsecondExtra("#8A0038");  // Extra 2 (same hue group)

    // =========================
    // royalPurple  (One Dark Magenta (base: #C678DD))
    // Base accent: #C678DD
    // =========================
    m_royalPurple->setBackgroundColor("#1C141F");  // Background
    m_royalPurple->setBorderColor("#4B3556");  // Borders / outlines
    m_royalPurple->setButtonReleasedColor("#2A1F2F");  // Button (released)
    m_royalPurple->setButtonReleaseFontColor("#EEECEF");  // Button text (released)
    m_royalPurple->setButtonHoveredColor("#322538");  // Button (hover)
    m_royalPurple->setButtonHoverFontColor("#EEECEF");  // Button text (hover)
    m_royalPurple->setButtonSelectedColor("#CB82E1");  // Button (selected) / primary accent
    m_royalPurple->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_royalPurple->setSectionBackgroundColor("#231B28");  // Section background
    m_royalPurple->setSectionRowColor("#271F2C");  // Section row
    m_royalPurple->setSectionRowBorder("#4B3556");  // Section row border
    m_royalPurple->setSectionRowFontColor("#D6CDD7");  // Section row text
    m_royalPurple->setInputBoxColor("#19121C");  // Input box
    m_royalPurple->setLoginButtonColor("#D196E6");  // Login / CTA button
    m_royalPurple->setSelectFontColor("#EEECEF");  // Select text
    m_royalPurple->setSelectBackgroundColor("#5D3C6B");  // Select background
    m_royalPurple->setLableSelectedColor("#CB82E1");  // Label selected
    m_royalPurple->setLableReleasedColor("#B1A0B1");  // Label released
    m_royalPurple->setTitleColor("#120B14");  // Title bar/background
    m_royalPurple->setTitleFontColor("#EEECEF");  // Title text
    m_royalPurple->setFirstExtra("#DDB0EE");  // Extra 1 (same hue group)
    m_royalPurple->setsecondExtra("#6B2C82");  // Extra 2 (same hue group)

    // =========================
    // indigoNight  (Tokyo Night Blue (base: #7AA2F7))
    // Base accent: #7AA2F7
    // =========================
    m_indigoNight->setBackgroundColor("#131826");  // Background
    m_indigoNight->setBorderColor("#2F3D63");  // Borders / outlines
    m_indigoNight->setButtonReleasedColor("#1D2436");  // Button (released)
    m_indigoNight->setButtonReleaseFontColor("#EBEDEF");  // Button text (released)
    m_indigoNight->setButtonHoveredColor("#222A3F");  // Button (hover)
    m_indigoNight->setButtonHoverFontColor("#EBEDEF");  // Button text (hover)
    m_indigoNight->setButtonSelectedColor("#82A8F8");  // Button (selected) / primary accent
    m_indigoNight->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_indigoNight->setSectionBackgroundColor("#171F2E");  // Section background
    m_indigoNight->setSectionRowColor("#1A2231");  // Section row
    m_indigoNight->setSectionRowBorder("#2F3D63");  // Section row border
    m_indigoNight->setSectionRowFontColor("#CCD0D6");  // Section row text
    m_indigoNight->setInputBoxColor("#111521");  // Input box
    m_indigoNight->setLoginButtonColor("#91B3FA");  // Login / CTA button
    m_indigoNight->setSelectFontColor("#EBEDEF");  // Select text
    m_indigoNight->setSelectBackgroundColor("#3A4D7A");  // Select background
    m_indigoNight->setLableSelectedColor("#82A8F8");  // Label selected
    m_indigoNight->setLableReleasedColor("#A0A7B1");  // Label released
    m_indigoNight->setTitleColor("#0B0E16");  // Title bar/background
    m_indigoNight->setTitleFontColor("#EBEDEF");  // Title text
    m_indigoNight->setFirstExtra("#9FBCF9");  // Extra 1 (same hue group)
    m_indigoNight->setsecondExtra("#4C6499");  // Extra 2 (same hue group)

    // =========================
    // slateNeutral  (GitHub Dark Slate (base: #6E7681))
    // Base accent: #6E7681
    // =========================
    m_slateNeutral->setBackgroundColor("#171B21");  // Background
    m_slateNeutral->setBorderColor("#3A434F");  // Borders / outlines
    m_slateNeutral->setButtonReleasedColor("#242A33");  // Button (released)
    m_slateNeutral->setButtonReleaseFontColor("#EBEDEF");  // Button text (released)
    m_slateNeutral->setButtonHoveredColor("#2A323C");  // Button (hover)
    m_slateNeutral->setButtonHoverFontColor("#EBEDEF");  // Button text (hover)
    m_slateNeutral->setButtonSelectedColor("#777E89");  // Button (selected) / primary accent
    m_slateNeutral->setButtonSelectedFontColor("#0B0F14");  // Button text (selected)
    m_slateNeutral->setSectionBackgroundColor("#1E232A");  // Section background
    m_slateNeutral->setSectionRowColor("#22282F");  // Section row
    m_slateNeutral->setSectionRowBorder("#3A434F");  // Section row border
    m_slateNeutral->setSectionRowFontColor("#CCD0D6");  // Section row text
    m_slateNeutral->setInputBoxColor("#15191E");  // Input box
    m_slateNeutral->setLoginButtonColor("#7F8690");  // Login / CTA button
    m_slateNeutral->setSelectFontColor("#EBEDEF");  // Select text
    m_slateNeutral->setSelectBackgroundColor("#434952");  // Select background
    m_slateNeutral->setLableSelectedColor("#777E89");  // Label selected
    m_slateNeutral->setLableReleasedColor("#A0A7B1");  // Label released
    m_slateNeutral->setTitleColor("#111418");  // Title bar/background
    m_slateNeutral->setTitleFontColor("#EBEDEF");  // Title text
    m_slateNeutral->setFirstExtra("#979CA4");  // Extra 1 (same hue group)
    m_slateNeutral->setsecondExtra("#444950");  // Extra 2 (same hue group)




    // =========================
    // nordFrost (base #88C0D0)
    // =========================
    m_nordFrost->setBackgroundColor("#0D1516");
    m_nordFrost->setBorderColor("#293E40");

    m_nordFrost->setButtonReleasedColor("#163234");
    m_nordFrost->setButtonReleaseFontColor("#E6EAF0");
    m_nordFrost->setButtonHoveredColor("#193E41");
    m_nordFrost->setButtonHoverFontColor("#F2F6FF");
    m_nordFrost->setButtonSelectedColor("#88C0D0");
    m_nordFrost->setButtonSelectedFontColor("#F7FAFF");

    m_nordFrost->setSectionBackgroundColor("#0F1F20");
    m_nordFrost->setSectionRowColor("#122829");
    m_nordFrost->setSectionRowBorder("#21373A");
    m_nordFrost->setSectionRowFontColor("#C7CDD6");

    m_nordFrost->setInputBoxColor("#0C1314");
    m_nordFrost->setLoginButtonColor("#95CBD9");

    m_nordFrost->setSelectFontColor("#F2F6FF");
    m_nordFrost->setSelectBackgroundColor("#1E4F54");

    m_nordFrost->setLableSelectedColor("#88C0D0");
    m_nordFrost->setLableReleasedColor("#C7CDD6");

    m_nordFrost->setTitleColor("#080F10");
    m_nordFrost->setTitleFontColor("#F7FAFF");
    m_nordFrost->setFirstExtra("#B0DEE5");
    m_nordFrost->setsecondExtra("#3B95A3");

    // =========================
    // solarizedBlue (base #268BD2)
    // =========================
    m_solarizedBlue->setBackgroundColor("#081018");
    m_solarizedBlue->setBorderColor("#1D3247");

    m_solarizedBlue->setButtonReleasedColor("#10253E");
    m_solarizedBlue->setButtonReleaseFontColor("#E6EAF0");
    m_solarizedBlue->setButtonHoveredColor("#122C4C");
    m_solarizedBlue->setButtonHoverFontColor("#F2F6FF");
    m_solarizedBlue->setButtonSelectedColor("#268BD2");
    m_solarizedBlue->setButtonSelectedFontColor("#F7FAFF");

    m_solarizedBlue->setSectionBackgroundColor("#0A1727");
    m_solarizedBlue->setSectionRowColor("#0D1C31");
    m_solarizedBlue->setSectionRowBorder("#18283D");
    m_solarizedBlue->setSectionRowFontColor("#C7CDD6");

    m_solarizedBlue->setInputBoxColor("#070E16");
    m_solarizedBlue->setLoginButtonColor("#3497DD");

    m_solarizedBlue->setSelectFontColor("#F2F6FF");
    m_solarizedBlue->setSelectBackgroundColor("#1A3659");

    m_solarizedBlue->setLableSelectedColor("#268BD2");
    m_solarizedBlue->setLableReleasedColor("#C7CDD6");

    m_solarizedBlue->setTitleColor("#050B12");
    m_solarizedBlue->setTitleFontColor("#F7FAFF");
    m_solarizedBlue->setFirstExtra("#7BBCEB");
    m_solarizedBlue->setsecondExtra("#00599B");

    // =========================
    // draculaPurple (base #BD93F9)
    // =========================
    m_draculaPurple->setBackgroundColor("#120B1B");
    m_draculaPurple->setBorderColor("#342747");

    m_draculaPurple->setButtonReleasedColor("#25133E");
    m_draculaPurple->setButtonReleaseFontColor("#E6EAF0");
    m_draculaPurple->setButtonHoveredColor("#2C154C");
    m_draculaPurple->setButtonHoverFontColor("#F2F6FF");
    m_draculaPurple->setButtonSelectedColor("#BD93F9");
    m_draculaPurple->setButtonSelectedFontColor("#F7FAFF");

    m_draculaPurple->setSectionBackgroundColor("#190E27");
    m_draculaPurple->setSectionRowColor("#1E1131");
    m_draculaPurple->setSectionRowBorder("#2B1E3D");
    m_draculaPurple->setSectionRowFontColor("#C7CDD6");

    m_draculaPurple->setInputBoxColor("#110B19");
    m_draculaPurple->setLoginButtonColor("#CAABFA");

    m_draculaPurple->setSelectFontColor("#F2F6FF");
    m_draculaPurple->setSelectBackgroundColor("#382159");

    m_draculaPurple->setLableSelectedColor("#BD93F9");
    m_draculaPurple->setLableReleasedColor("#C7CDD6");

    m_draculaPurple->setTitleColor("#0D0814");
    m_draculaPurple->setTitleFontColor("#F7FAFF");
    m_draculaPurple->setFirstExtra("#DCC7FB");
    m_draculaPurple->setsecondExtra("#761FF3");

    // =========================
    // gruvboxAqua (base #83A598)
    // =========================
    m_gruvboxAqua->setBackgroundColor("#0D1413");
    m_gruvboxAqua->setBorderColor("#293F3C");

    m_gruvboxAqua->setButtonReleasedColor("#163331");
    m_gruvboxAqua->setButtonReleaseFontColor("#E6EAF0");
    m_gruvboxAqua->setButtonHoveredColor("#193F3D");
    m_gruvboxAqua->setButtonHoverFontColor("#F2F6FF");
    m_gruvboxAqua->setButtonSelectedColor("#83A598");
    m_gruvboxAqua->setButtonSelectedFontColor("#F7FAFF");

    m_gruvboxAqua->setSectionBackgroundColor("#0F1E1D");
    m_gruvboxAqua->setSectionRowColor("#122726");
    m_gruvboxAqua->setSectionRowBorder("#213A37");
    m_gruvboxAqua->setSectionRowFontColor("#C7CDD6");

    m_gruvboxAqua->setInputBoxColor("#0C1211");
    m_gruvboxAqua->setLoginButtonColor("#92B0A5");

    m_gruvboxAqua->setSelectFontColor("#F2F6FF");
    m_gruvboxAqua->setSelectBackgroundColor("#1E514C");

    m_gruvboxAqua->setLableSelectedColor("#83A598");
    m_gruvboxAqua->setLableReleasedColor("#C7CDD6");

    m_gruvboxAqua->setTitleColor("#080F0E");
    m_gruvboxAqua->setTitleFontColor("#F7FAFF");
    m_gruvboxAqua->setFirstExtra("#B2C7BF");
    m_gruvboxAqua->setsecondExtra("#3D6C60");

    // =========================
    // rosePineFoam (base #9CCFD8)
    // =========================
    m_rosePineFoam->setBackgroundColor("#0B1316");
    m_rosePineFoam->setBorderColor("#274047");

    m_rosePineFoam->setButtonReleasedColor("#133234");
    m_rosePineFoam->setButtonReleaseFontColor("#E6EAF0");
    m_rosePineFoam->setButtonHoveredColor("#153E41");
    m_rosePineFoam->setButtonHoverFontColor("#F2F6FF");
    m_rosePineFoam->setButtonSelectedColor("#9CCFD8");
    m_rosePineFoam->setButtonSelectedFontColor("#0B0F14");

    m_rosePineFoam->setSectionBackgroundColor("#0E1A20");
    m_rosePineFoam->setSectionRowColor("#112129");
    m_rosePineFoam->setSectionRowBorder("#1E373A");
    m_rosePineFoam->setSectionRowFontColor("#C7CDD6");

    m_rosePineFoam->setInputBoxColor("#0A1114");
    m_rosePineFoam->setLoginButtonColor("#AAD7DE");

    m_rosePineFoam->setSelectFontColor("#F2F6FF");
    m_rosePineFoam->setSelectBackgroundColor("#214F54");

    m_rosePineFoam->setLableSelectedColor("#9CCFD8");
    m_rosePineFoam->setLableReleasedColor("#C7CDD6");

    m_rosePineFoam->setTitleColor("#080E10");
    m_rosePineFoam->setTitleFontColor("#F7FAFF");
    m_rosePineFoam->setFirstExtra("#C0E1E7");
    m_rosePineFoam->setsecondExtra("#3CB3C7");

    // =========================
    // kanagawaWave (base #7E9CD8)
    // =========================
    m_kanagawaWave->setBackgroundColor("#0B101B");
    m_kanagawaWave->setBorderColor("#273247");

    m_kanagawaWave->setButtonReleasedColor("#131F3E");
    m_kanagawaWave->setButtonReleaseFontColor("#E6EAF0");
    m_kanagawaWave->setButtonHoveredColor("#15264C");
    m_kanagawaWave->setButtonHoverFontColor("#F2F6FF");
    m_kanagawaWave->setButtonSelectedColor("#7E9CD8");
    m_kanagawaWave->setButtonSelectedFontColor("#F7FAFF");

    m_kanagawaWave->setSectionBackgroundColor("#0E1527");
    m_kanagawaWave->setSectionRowColor("#111B31");
    m_kanagawaWave->setSectionRowBorder("#1E273D");
    m_kanagawaWave->setSectionRowFontColor("#C7CDD6");

    m_kanagawaWave->setInputBoxColor("#0B0F19");
    m_kanagawaWave->setLoginButtonColor("#8AA8E0");

    m_kanagawaWave->setSelectFontColor("#F2F6FF");
    m_kanagawaWave->setSelectBackgroundColor("#213559");

    m_kanagawaWave->setLableSelectedColor("#7E9CD8");
    m_kanagawaWave->setLableReleasedColor("#C7CDD6");

    m_kanagawaWave->setTitleColor("#080B14");
    m_kanagawaWave->setTitleFontColor("#F7FAFF");
    m_kanagawaWave->setFirstExtra("#ABC0E6");
    m_kanagawaWave->setsecondExtra("#2E64B9");

    // =========================
    // githubBlue (base #58A6FF)
    // =========================
    m_githubBlue->setBackgroundColor("#0B131B");
    m_githubBlue->setBorderColor("#273647");

    m_githubBlue->setButtonReleasedColor("#13273E");
    m_githubBlue->setButtonReleaseFontColor("#E6EAF0");
    m_githubBlue->setButtonHoveredColor("#152F4C");
    m_githubBlue->setButtonHoverFontColor("#F2F6FF");
    m_githubBlue->setButtonSelectedColor("#58A6FF");
    m_githubBlue->setButtonSelectedFontColor("#F7FAFF");

    m_githubBlue->setSectionBackgroundColor("#0E1A27");
    m_githubBlue->setSectionRowColor("#112031");
    m_githubBlue->setSectionRowBorder("#1E2D3D");
    m_githubBlue->setSectionRowFontColor("#C7CDD6");

    m_githubBlue->setInputBoxColor("#0B1119");
    m_githubBlue->setLoginButtonColor("#66B0FF");

    m_githubBlue->setSelectFontColor("#F2F6FF");
    m_githubBlue->setSelectBackgroundColor("#213B59");

    m_githubBlue->setLableSelectedColor("#58A6FF");
    m_githubBlue->setLableReleasedColor("#C7CDD6");

    m_githubBlue->setTitleColor("#080E14");
    m_githubBlue->setTitleFontColor("#F7FAFF");
    m_githubBlue->setFirstExtra("#8BBEF9");
    m_githubBlue->setsecondExtra("#0667D7");

    // =========================
    // nordAuroraRed (base #BF616A)
    // =========================
    m_nordAuroraRed->setBackgroundColor("#1A0C0E");
    m_nordAuroraRed->setBorderColor("#442328");

    m_nordAuroraRed->setButtonReleasedColor("#3B161B");
    m_nordAuroraRed->setButtonReleaseFontColor("#E6EAF0");
    m_nordAuroraRed->setButtonHoveredColor("#47191F");
    m_nordAuroraRed->setButtonHoverFontColor("#F2F6FF");
    m_nordAuroraRed->setButtonSelectedColor("#BF616A");
    m_nordAuroraRed->setButtonSelectedFontColor("#F7FAFF");

    m_nordAuroraRed->setSectionBackgroundColor("#251010");
    m_nordAuroraRed->setSectionRowColor("#2E1314");
    m_nordAuroraRed->setSectionRowBorder("#3B2123");
    m_nordAuroraRed->setSectionRowFontColor("#C7CDD6");

    m_nordAuroraRed->setInputBoxColor("#180B0C");
    m_nordAuroraRed->setLoginButtonColor("#C9737B");

    m_nordAuroraRed->setSelectFontColor("#F2F6FF");
    m_nordAuroraRed->setSelectBackgroundColor("#553033");

    m_nordAuroraRed->setLableSelectedColor("#BF616A");
    m_nordAuroraRed->setLableReleasedColor("#C7CDD6");

    m_nordAuroraRed->setTitleColor("#130809");
    m_nordAuroraRed->setTitleFontColor("#F7FAFF");
    m_nordAuroraRed->setFirstExtra("#D9A0A7");
    m_nordAuroraRed->setsecondExtra("#7A1D28");


    // =========================
    // Dark Red
    // Base accent: #B91C1C
    // =========================
    m_darkRed->setBackgroundColor("#0B0A0A");           // Near-black, warm tint
    m_darkRed->setBorderColor("#3A1414");               // Dark red border

    m_darkRed->setButtonReleasedColor("#1E0D0D");       // Deep maroon
    m_darkRed->setButtonReleaseFontColor("#F3F4F6");    // Soft white
    m_darkRed->setButtonHoveredColor("#2A1010");        // Slightly brighter maroon
    m_darkRed->setButtonHoverFontColor("#FFFFFF");      // White
    m_darkRed->setButtonSelectedColor("#B91C1C");       // Base accent
    m_darkRed->setButtonSelectedFontColor("#FFFFFF");   // White

    m_darkRed->setSectionBackgroundColor("#120B0B");    // Dark panel
    m_darkRed->setSectionRowColor("#191010");           // Row background
    m_darkRed->setSectionRowBorder("#2A1212");          // Row border
    m_darkRed->setSectionRowFontColor("#E5E7EB");       // Light gray text

    m_darkRed->setInputBoxColor("#0F0B0B");             // Input background
    m_darkRed->setLoginButtonColor("#C81E1E");          // Brighter red CTA

    m_darkRed->setSelectFontColor("#FFFFFF");           // Selected text
    m_darkRed->setSelectBackgroundColor("#3A1515");     // Selection background

    m_darkRed->setLableSelectedColor("#B91C1C");        // Selected label
    m_darkRed->setLableReleasedColor("#A1A1AA");        // Neutral released label

    m_darkRed->setTitleColor("#090707");                // Title bar background
    m_darkRed->setTitleFontColor("#FFFFFF");            // Title text
    m_darkRed->setFirstExtra("#E11D48");                // Extra 1 (rose-red highlight)
    m_darkRed->setsecondExtra("#7F1D1D");               // Extra 2 (deep wine)


    // =========================
    // Light Sky Blue
    // Base accent: #3B82F6
    // =========================
    m_lightSkyBlue->setBackgroundColor("#F8FAFF");
    m_lightSkyBlue->setBorderColor("#C7DAFF");

    m_lightSkyBlue->setButtonReleasedColor("#EAF2FF");
    m_lightSkyBlue->setButtonReleaseFontColor("#0F172A");
    m_lightSkyBlue->setButtonHoveredColor("#DDEBFF");
    m_lightSkyBlue->setButtonHoverFontColor("#0F172A");
    m_lightSkyBlue->setButtonSelectedColor("#3B82F6");
    m_lightSkyBlue->setButtonSelectedFontColor("#FFFFFF");

    m_lightSkyBlue->setSectionBackgroundColor("#FFFFFF");
    m_lightSkyBlue->setSectionRowColor("#F1F6FF");
    m_lightSkyBlue->setSectionRowBorder("#D6E6FF");
    m_lightSkyBlue->setSectionRowFontColor("#0F172A");

    m_lightSkyBlue->setInputBoxColor("#FFFFFF");
    m_lightSkyBlue->setLoginButtonColor("#2563EB");

    m_lightSkyBlue->setSelectFontColor("#0F172A");
    m_lightSkyBlue->setSelectBackgroundColor("#DDEBFF");

    m_lightSkyBlue->setLableSelectedColor("#1D4ED8");
    m_lightSkyBlue->setLableReleasedColor("#475569");

    m_lightSkyBlue->setTitleColor("#EAF2FF");
    m_lightSkyBlue->setTitleFontColor("#0F172A");
    m_lightSkyBlue->setFirstExtra("#93C5FD");
    m_lightSkyBlue->setsecondExtra("#1E40AF");


    // =========================
    // Light Mint
    // Base accent: #10B981
    // =========================
    m_lightMint->setBackgroundColor("#F6FFFB");
    m_lightMint->setBorderColor("#BFEFE0");

    m_lightMint->setButtonReleasedColor("#E9FBF4");
    m_lightMint->setButtonReleaseFontColor("#0F172A");
    m_lightMint->setButtonHoveredColor("#D7F7EA");
    m_lightMint->setButtonHoverFontColor("#0F172A");
    m_lightMint->setButtonSelectedColor("#10B981");
    m_lightMint->setButtonSelectedFontColor("#FFFFFF");

    m_lightMint->setSectionBackgroundColor("#FFFFFF");
    m_lightMint->setSectionRowColor("#F0FDF8");
    m_lightMint->setSectionRowBorder("#CFF7EA");
    m_lightMint->setSectionRowFontColor("#0F172A");

    m_lightMint->setInputBoxColor("#FFFFFF");
    m_lightMint->setLoginButtonColor("#059669");

    m_lightMint->setSelectFontColor("#0F172A");
    m_lightMint->setSelectBackgroundColor("#D7F7EA");

    m_lightMint->setLableSelectedColor("#047857");
    m_lightMint->setLableReleasedColor("#475569");

    m_lightMint->setTitleColor("#E9FBF4");
    m_lightMint->setTitleFontColor("#0F172A");
    m_lightMint->setFirstExtra("#6EE7B7");
    m_lightMint->setsecondExtra("#065F46");


    // =========================
    // Light Lavender
    // Base accent: #8B5CF6
    // =========================
    m_lightLavender->setBackgroundColor("#FBFAFF");
    m_lightLavender->setBorderColor("#DCCBFF");

    m_lightLavender->setButtonReleasedColor("#F1ECFF");
    m_lightLavender->setButtonReleaseFontColor("#0F172A");
    m_lightLavender->setButtonHoveredColor("#E6DDFF");
    m_lightLavender->setButtonHoverFontColor("#0F172A");
    m_lightLavender->setButtonSelectedColor("#8B5CF6");
    m_lightLavender->setButtonSelectedFontColor("#FFFFFF");

    m_lightLavender->setSectionBackgroundColor("#FFFFFF");
    m_lightLavender->setSectionRowColor("#F7F3FF");
    m_lightLavender->setSectionRowBorder("#E9DDFF");
    m_lightLavender->setSectionRowFontColor("#0F172A");

    m_lightLavender->setInputBoxColor("#FFFFFF");
    m_lightLavender->setLoginButtonColor("#7C3AED");

    m_lightLavender->setSelectFontColor("#0F172A");
    m_lightLavender->setSelectBackgroundColor("#E6DDFF");

    m_lightLavender->setLableSelectedColor("#6D28D9");
    m_lightLavender->setLableReleasedColor("#475569");

    m_lightLavender->setTitleColor("#F1ECFF");
    m_lightLavender->setTitleFontColor("#0F172A");
    m_lightLavender->setFirstExtra("#C4B5FD");
    m_lightLavender->setsecondExtra("#4C1D95");


    // =========================
    // Light Peach
    // Base accent: #FB923C
    // =========================
    m_lightPeach->setBackgroundColor("#FFFBF7");
    m_lightPeach->setBorderColor("#FFD7B5");

    m_lightPeach->setButtonReleasedColor("#FFF0E1");
    m_lightPeach->setButtonReleaseFontColor("#0F172A");
    m_lightPeach->setButtonHoveredColor("#FFE2C6");
    m_lightPeach->setButtonHoverFontColor("#0F172A");
    m_lightPeach->setButtonSelectedColor("#FB923C");
    m_lightPeach->setButtonSelectedFontColor("#0F172A");

    m_lightPeach->setSectionBackgroundColor("#FFFFFF");
    m_lightPeach->setSectionRowColor("#FFF7ED");
    m_lightPeach->setSectionRowBorder("#FFE2C6");
    m_lightPeach->setSectionRowFontColor("#0F172A");

    m_lightPeach->setInputBoxColor("#FFFFFF");
    m_lightPeach->setLoginButtonColor("#F97316");

    m_lightPeach->setSelectFontColor("#0F172A");
    m_lightPeach->setSelectBackgroundColor("#FFE2C6");

    m_lightPeach->setLableSelectedColor("#EA580C");
    m_lightPeach->setLableReleasedColor("#475569");

    m_lightPeach->setTitleColor("#FFF0E1");
    m_lightPeach->setTitleFontColor("#0F172A");
    m_lightPeach->setFirstExtra("#FDBA74");
    m_lightPeach->setsecondExtra("#9A3412");


    // =========================
    // Light Rose
    // Base accent: #EC4899
    // =========================
    m_lightRose->setBackgroundColor("#FFF7FB");
    m_lightRose->setBorderColor("#FFC7DD");

    m_lightRose->setButtonReleasedColor("#FFE8F2");
    m_lightRose->setButtonReleaseFontColor("#0F172A");
    m_lightRose->setButtonHoveredColor("#FFD6E8");
    m_lightRose->setButtonHoverFontColor("#0F172A");
    m_lightRose->setButtonSelectedColor("#EC4899");
    m_lightRose->setButtonSelectedFontColor("#FFFFFF");

    m_lightRose->setSectionBackgroundColor("#FFFFFF");
    m_lightRose->setSectionRowColor("#FFF1F7");
    m_lightRose->setSectionRowBorder("#FFD6E8");
    m_lightRose->setSectionRowFontColor("#0F172A");

    m_lightRose->setInputBoxColor("#FFFFFF");
    m_lightRose->setLoginButtonColor("#DB2777");

    m_lightRose->setSelectFontColor("#0F172A");
    m_lightRose->setSelectBackgroundColor("#FFD6E8");

    m_lightRose->setLableSelectedColor("#BE185D");
    m_lightRose->setLableReleasedColor("#475569");

    m_lightRose->setTitleColor("#FFE8F2");
    m_lightRose->setTitleFontColor("#0F172A");
    m_lightRose->setFirstExtra("#F9A8D4");
    m_lightRose->setsecondExtra("#831843");




    // =========================
    // Light Red
    // Base accent: #F28C8C
    // =========================
    m_lightRed->setBackgroundColor("#F9F1F1");         // Very light pinkish background
    m_lightRed->setBorderColor("#F5C4C4");             // Light red border

    m_lightRed->setButtonReleasedColor("#F3A7A7");     // Soft coral pink (released button)
    m_lightRed->setButtonReleaseFontColor("#2B2D2D");  // Dark text on button
    m_lightRed->setButtonHoveredColor("#F5B1B1");      // Slightly darker pink on hover
    m_lightRed->setButtonHoverFontColor("#2B2D2D");    // Same dark text on hover
    m_lightRed->setButtonSelectedColor("#F28C8C");     // Base accent for selected button
    m_lightRed->setButtonSelectedFontColor("#2B2D2D"); // Dark text for selected button

    m_lightRed->setSectionBackgroundColor("#F5D3D3");  // Light pink background for sections
    m_lightRed->setSectionRowColor("#F8D1D1");         // Lightest shade of pink for rows
    m_lightRed->setSectionRowBorder("#F2B4B4");        // Border in a slightly darker pink
    m_lightRed->setSectionRowFontColor("#4A4A4A");     // Dark gray text for readability

    m_lightRed->setInputBoxColor("#F9D6D6");           // Light pink input box
    m_lightRed->setLoginButtonColor("#F5A7A7");        // Soft, light red for the login button

    m_lightRed->setSelectFontColor("#2B2D2D");          // Dark text color for selected items
    m_lightRed->setSelectBackgroundColor("#F3C0C0");    // Light red for selection background

    m_lightRed->setLableSelectedColor("#F28C8C");       // Soft red for selected labels
    m_lightRed->setLableReleasedColor("#D6A7A7");       // Soft muted red for released labels

    m_lightRed->setTitleColor("#F5D0D0");               // Very soft, light red title background
    m_lightRed->setTitleFontColor("#2B2D2D");           // Dark text color for title text
    m_lightRed->setFirstExtra("#F3C6C6");               // Soft blush pink accent
    m_lightRed->setsecondExtra("#F2A9A9");              // Light peach accent






    // =========================
    // Light Lemon
    // Base accent: #EAB308
    // =========================
    m_lightLemon->setBackgroundColor("#FFFEF6");
    m_lightLemon->setBorderColor("#F3E8B4");

    m_lightLemon->setButtonReleasedColor("#FFF8D6");
    m_lightLemon->setButtonReleaseFontColor("#0F172A");
    m_lightLemon->setButtonHoveredColor("#FFF1B8");
    m_lightLemon->setButtonHoverFontColor("#0F172A");
    m_lightLemon->setButtonSelectedColor("#EAB308");
    m_lightLemon->setButtonSelectedFontColor("#0F172A");

    m_lightLemon->setSectionBackgroundColor("#FFFFFF");
    m_lightLemon->setSectionRowColor("#FFFBEB");
    m_lightLemon->setSectionRowBorder("#FDE68A");
    m_lightLemon->setSectionRowFontColor("#0F172A");

    m_lightLemon->setInputBoxColor("#FFFFFF");
    m_lightLemon->setLoginButtonColor("#CA8A04");

    m_lightLemon->setSelectFontColor("#0F172A");
    m_lightLemon->setSelectBackgroundColor("#FFF1B8");

    m_lightLemon->setLableSelectedColor("#A16207");
    m_lightLemon->setLableReleasedColor("#475569");

    m_lightLemon->setTitleColor("#FFF8D6");
    m_lightLemon->setTitleFontColor("#0F172A");
    m_lightLemon->setFirstExtra("#FDE68A");
    m_lightLemon->setsecondExtra("#854D0E");


    // =========================
    // Light Coral
    // Base accent: #F43F5E
    // =========================
    m_lightCoral->setBackgroundColor("#FFF7F8");
    m_lightCoral->setBorderColor("#FFC7CF");

    m_lightCoral->setButtonReleasedColor("#FFE6EA");
    m_lightCoral->setButtonReleaseFontColor("#0F172A");
    m_lightCoral->setButtonHoveredColor("#FFD3DB");
    m_lightCoral->setButtonHoverFontColor("#0F172A");
    m_lightCoral->setButtonSelectedColor("#F43F5E");
    m_lightCoral->setButtonSelectedFontColor("#FFFFFF");

    m_lightCoral->setSectionBackgroundColor("#FFFFFF");
    m_lightCoral->setSectionRowColor("#FFF1F3");
    m_lightCoral->setSectionRowBorder("#FFD3DB");
    m_lightCoral->setSectionRowFontColor("#0F172A");

    m_lightCoral->setInputBoxColor("#FFFFFF");
    m_lightCoral->setLoginButtonColor("#E11D48");

    m_lightCoral->setSelectFontColor("#0F172A");
    m_lightCoral->setSelectBackgroundColor("#FFD3DB");

    m_lightCoral->setLableSelectedColor("#BE123C");
    m_lightCoral->setLableReleasedColor("#475569");

    m_lightCoral->setTitleColor("#FFE6EA");
    m_lightCoral->setTitleFontColor("#0F172A");
    m_lightCoral->setFirstExtra("#FDA4AF");
    m_lightCoral->setsecondExtra("#881337");


    // =========================
    // Light Aqua
    // Base accent: #06B6D4
    // =========================
    m_lightAqua->setBackgroundColor("#F6FEFF");
    m_lightAqua->setBorderColor("#BDECF5");

    m_lightAqua->setButtonReleasedColor("#DFF7FB");
    m_lightAqua->setButtonReleaseFontColor("#0F172A");
    m_lightAqua->setButtonHoveredColor("#C8F0F8");
    m_lightAqua->setButtonHoverFontColor("#0F172A");
    m_lightAqua->setButtonSelectedColor("#06B6D4");
    m_lightAqua->setButtonSelectedFontColor("#FFFFFF");

    m_lightAqua->setSectionBackgroundColor("#FFFFFF");
    m_lightAqua->setSectionRowColor("#ECFEFF");
    m_lightAqua->setSectionRowBorder("#A5F3FC");
    m_lightAqua->setSectionRowFontColor("#0F172A");

    m_lightAqua->setInputBoxColor("#FFFFFF");
    m_lightAqua->setLoginButtonColor("#0891B2");

    m_lightAqua->setSelectFontColor("#0F172A");
    m_lightAqua->setSelectBackgroundColor("#C8F0F8");

    m_lightAqua->setLableSelectedColor("#0E7490");
    m_lightAqua->setLableReleasedColor("#475569");

    m_lightAqua->setTitleColor("#DFF7FB");
    m_lightAqua->setTitleFontColor("#0F172A");
    m_lightAqua->setFirstExtra("#67E8F9");
    m_lightAqua->setsecondExtra("#155E75");


    // =========================
    // Light Teal
    // Base accent: #14B8A6
    // =========================
    m_lightTeal->setBackgroundColor("#F5FFFD");
    m_lightTeal->setBorderColor("#BDEFE8");

    m_lightTeal->setButtonReleasedColor("#DDFBF7");
    m_lightTeal->setButtonReleaseFontColor("#0F172A");
    m_lightTeal->setButtonHoveredColor("#C7F7F0");
    m_lightTeal->setButtonHoverFontColor("#0F172A");
    m_lightTeal->setButtonSelectedColor("#14B8A6");
    m_lightTeal->setButtonSelectedFontColor("#FFFFFF");

    m_lightTeal->setSectionBackgroundColor("#FFFFFF");
    m_lightTeal->setSectionRowColor("#F0FDFA");
    m_lightTeal->setSectionRowBorder("#99F6E4");
    m_lightTeal->setSectionRowFontColor("#0F172A");

    m_lightTeal->setInputBoxColor("#FFFFFF");
    m_lightTeal->setLoginButtonColor("#0D9488");

    m_lightTeal->setSelectFontColor("#0F172A");
    m_lightTeal->setSelectBackgroundColor("#C7F7F0");

    m_lightTeal->setLableSelectedColor("#0F766E");
    m_lightTeal->setLableReleasedColor("#475569");

    m_lightTeal->setTitleColor("#DDFBF7");
    m_lightTeal->setTitleFontColor("#0F172A");
    m_lightTeal->setFirstExtra("#5EEAD4");
    m_lightTeal->setsecondExtra("#115E59");


    // =========================
    // Light Olive
    // Base accent: #84CC16
    // =========================
    m_lightOlive->setBackgroundColor("#FBFFF4");
    m_lightOlive->setBorderColor("#D7F2B8");

    m_lightOlive->setButtonReleasedColor("#F0FBD8");
    m_lightOlive->setButtonReleaseFontColor("#0F172A");
    m_lightOlive->setButtonHoveredColor("#E5F7B8");
    m_lightOlive->setButtonHoverFontColor("#0F172A");
    m_lightOlive->setButtonSelectedColor("#84CC16");
    m_lightOlive->setButtonSelectedFontColor("#0B0F14");

    m_lightOlive->setSectionBackgroundColor("#FFFFFF");
    m_lightOlive->setSectionRowColor("#F7FEE7");
    m_lightOlive->setSectionRowBorder("#BEF264");
    m_lightOlive->setSectionRowFontColor("#0F172A");

    m_lightOlive->setInputBoxColor("#FFFFFF");
    m_lightOlive->setLoginButtonColor("#65A30D");

    m_lightOlive->setSelectFontColor("#0F172A");
    m_lightOlive->setSelectBackgroundColor("#E5F7B8");

    m_lightOlive->setLableSelectedColor("#4D7C0F");
    m_lightOlive->setLableReleasedColor("#475569");

    m_lightOlive->setTitleColor("#F0FBD8");
    m_lightOlive->setTitleFontColor("#0F172A");
    m_lightOlive->setFirstExtra("#D9F99D");
    m_lightOlive->setsecondExtra("#3F6212");


    // =========================
    // Light Sand
    // Base accent: #C08457
    // =========================
    m_lightSand->setBackgroundColor("#FFFBF7");
    m_lightSand->setBorderColor("#EAD5C6");

    m_lightSand->setButtonReleasedColor("#F7EDE4");
    m_lightSand->setButtonReleaseFontColor("#0F172A");
    m_lightSand->setButtonHoveredColor("#F0DFD2");
    m_lightSand->setButtonHoverFontColor("#0F172A");
    m_lightSand->setButtonSelectedColor("#C08457");
    m_lightSand->setButtonSelectedFontColor("#FFFFFF");

    m_lightSand->setSectionBackgroundColor("#FFFFFF");
    m_lightSand->setSectionRowColor("#FAF4EF");
    m_lightSand->setSectionRowBorder("#EAD5C6");
    m_lightSand->setSectionRowFontColor("#0F172A");

    m_lightSand->setInputBoxColor("#FFFFFF");
    m_lightSand->setLoginButtonColor("#A16207");

    m_lightSand->setSelectFontColor("#0F172A");
    m_lightSand->setSelectBackgroundColor("#F0DFD2");

    m_lightSand->setLableSelectedColor("#92400E");
    m_lightSand->setLableReleasedColor("#475569");

    m_lightSand->setTitleColor("#F7EDE4");
    m_lightSand->setTitleFontColor("#0F172A");
    m_lightSand->setFirstExtra("#E7CBB5");
    m_lightSand->setsecondExtra("#6B3A16");


    // =========================
    // Light Slate Blue
    // Base accent: #4F46E5
    // =========================
    m_lightSlateBlue->setBackgroundColor("#FAFAFF");
    m_lightSlateBlue->setBorderColor("#D2D6FF");

    m_lightSlateBlue->setButtonReleasedColor("#EEF0FF");
    m_lightSlateBlue->setButtonReleaseFontColor("#0F172A");
    m_lightSlateBlue->setButtonHoveredColor("#E1E5FF");
    m_lightSlateBlue->setButtonHoverFontColor("#0F172A");
    m_lightSlateBlue->setButtonSelectedColor("#4F46E5");
    m_lightSlateBlue->setButtonSelectedFontColor("#FFFFFF");

    m_lightSlateBlue->setSectionBackgroundColor("#FFFFFF");
    m_lightSlateBlue->setSectionRowColor("#F5F6FF");
    m_lightSlateBlue->setSectionRowBorder("#E1E5FF");
    m_lightSlateBlue->setSectionRowFontColor("#0F172A");

    m_lightSlateBlue->setInputBoxColor("#FFFFFF");
    m_lightSlateBlue->setLoginButtonColor("#4338CA");

    m_lightSlateBlue->setSelectFontColor("#0F172A");
    m_lightSlateBlue->setSelectBackgroundColor("#E1E5FF");

    m_lightSlateBlue->setLableSelectedColor("#3730A3");
    m_lightSlateBlue->setLableReleasedColor("#475569");

    m_lightSlateBlue->setTitleColor("#EEF0FF");
    m_lightSlateBlue->setTitleFontColor("#0F172A");
    m_lightSlateBlue->setFirstExtra("#A5B4FC");
    m_lightSlateBlue->setsecondExtra("#312E81");


    // =========================
    // Light Gray Neutral
    // Base accent: #64748B
    // =========================
    m_lightGrayNeutral->setBackgroundColor("#F8FAFC");
    m_lightGrayNeutral->setBorderColor("#CBD5E1");

    m_lightGrayNeutral->setButtonReleasedColor("#E2E8F0");
    m_lightGrayNeutral->setButtonReleaseFontColor("#0F172A");
    m_lightGrayNeutral->setButtonHoveredColor("#D5DDE7");
    m_lightGrayNeutral->setButtonHoverFontColor("#0F172A");
    m_lightGrayNeutral->setButtonSelectedColor("#64748B");
    m_lightGrayNeutral->setButtonSelectedFontColor("#FFFFFF");

    m_lightGrayNeutral->setSectionBackgroundColor("#FFFFFF");
    m_lightGrayNeutral->setSectionRowColor("#F1F5F9");
    m_lightGrayNeutral->setSectionRowBorder("#E2E8F0");
    m_lightGrayNeutral->setSectionRowFontColor("#0F172A");

    m_lightGrayNeutral->setInputBoxColor("#FFFFFF");
    m_lightGrayNeutral->setLoginButtonColor("#475569");

    m_lightGrayNeutral->setSelectFontColor("#0F172A");
    m_lightGrayNeutral->setSelectBackgroundColor("#D5DDE7");

    m_lightGrayNeutral->setLableSelectedColor("#334155");
    m_lightGrayNeutral->setLableReleasedColor("#475569");

    m_lightGrayNeutral->setTitleColor("#E2E8F0");
    m_lightGrayNeutral->setTitleFontColor("#0F172A");
    m_lightGrayNeutral->setFirstExtra("#94A3B8");
    m_lightGrayNeutral->setsecondExtra("#1F2937");

}
