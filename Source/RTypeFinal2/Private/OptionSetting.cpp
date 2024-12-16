#include "OptionSetting.h"

FOptionSetting::FOptionSetting() {
    this->Vibration = false;
    this->DispLang = EGameLanguageId::ja;
    this->Brightness = 0;
    this->BrightnessFloat = 0.00f;
    this->Telop = false;
    this->Tips = false;
    this->AutoRanking = false;
    this->ScopeOfPilotInfoShare = 0;
    this->SymbolMark = ESYMBOL_MARK::ESYMBOL_MARK_001;
    this->DoseGauge = EDOSE_GAUGE::EDOSE_GAUGE_00;
    this->DispDifficulty = false;
    this->DefForceDirection = false;
    this->KeepSpeed = false;
    this->MenuColor = EMENU_COLOR::EMENU_COLOR_GREEN;
    this->MaxFPS = 0;
    this->VSync = false;
    this->PostProcessAAQuality = 0;
    this->ViewDistanceScale = 0.00f;
    this->BGMVolume = 0;
    this->SEVolume = 0;
    this->VOICEVolume = 0;
    this->SYSTEMVolume = 0;
    this->SONGVolume = 0;
    this->SoundLang = ESOUND_LANG::ESOUND_LANG_00;
    this->EndingSong = EENDING_SONG::EENDING_SONG_00;
    this->StartingSequence = false;
    this->DispDifficultyDetail = false;
    this->Speed7 = false;
}

