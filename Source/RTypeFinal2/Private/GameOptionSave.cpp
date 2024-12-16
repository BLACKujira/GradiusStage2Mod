#include "GameOptionSave.h"

FGameOptionSave::FGameOptionSave() {
    this->Difficulty = EDifficulty::VERY_EASY;
    this->DifficultyFromHangar = EDifficulty::VERY_EASY;
    this->DifficultyFromScoreAttack = EDifficulty::VERY_EASY;
    this->DemoSkipFromHangar = false;
    this->DemoSkipFromScoreAttack = false;
    this->SelectedCourseListRow = 0;
    this->MuseumDisplayType = EMuseumDisplayType::None;
    this->DifficultyCompetition = EDifficulty::VERY_EASY;
    this->KeepPowerup = false;
    this->FastCharge = false;
    this->SpareNum = 0;
    this->xSpecialWeapon = false;
    this->xContinue = false;
    this->BitFull = false;
    this->DoseFull = false;
    this->KeepPowerupFromHangar = false;
    this->FastChargeFromHangar = false;
    this->SpareNumFromHangar = 0;
    this->xSpecialWeaponFromHangar = false;
    this->xContinueFromHangar = false;
    this->BitFullFromHangar = false;
    this->DoseFullFromHangar = false;
    this->KeepPowerupFromScoreAttack = false;
    this->FastChargeFromScoreAttack = false;
    this->SpareNumFromScoreAttack = 0;
    this->xSpecialWeaponFromScoreAttack = false;
    this->xContinueFromScoreAttack = false;
    this->BitFullFromScoreAttack = false;
    this->DoseFullFromScoreAttack = false;
    this->forceAttrForScoreAttack = 0;
}

