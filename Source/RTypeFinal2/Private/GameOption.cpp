#include "GameOption.h"

UGameOption::UGameOption() {
    this->DifficultyData = NULL;
    this->Difficulty = EDifficulty::NORMAL;
    this->DifficultyFromHangar = EDifficulty::NORMAL;
    this->DifficultyFromScoreAttack = EDifficulty::NORMAL;
    this->DemoSkipFromHangar = false;
    this->DemoSkipFromScoreAttack = false;
    this->SelectedCourseListRow = 0;
    this->MuseumDisplayType = EMuseumDisplayType::Stone;
    this->DifficultyCompetition = EDifficulty::NORMAL;
    this->KeepPowerup = false;
    this->FastCharge = false;
    this->SpareNum = 2;
    this->xSpecialWeapon = false;
    this->xContinue = false;
    this->BitFull = false;
    this->DoseFull = false;
    this->KeepPowerupFromHangar = false;
    this->FastChargeFromHangar = false;
    this->SpareNumFromHangar = 2;
    this->xSpecialWeaponFromHangar = false;
    this->xContinueFromHangar = false;
    this->BitFullFromHangar = false;
    this->DoseFullFromHangar = false;
    this->KeepPowerupFromScoreAttack = false;
    this->FastChargeFromScoreAttack = false;
    this->SpareNumFromScoreAttack = 2;
    this->xSpecialWeaponFromScoreAttack = false;
    this->xContinueFromScoreAttack = false;
    this->BitFullFromScoreAttack = false;
    this->DoseFullFromScoreAttack = false;
    this->forceAttrForScoreAttack = 1;
}

void UGameOption::SetXSpecialWeaponFromScoreAttack(bool _xSpecialWeapon) {
}

void UGameOption::SetXSpecialWeaponFromHangar(bool _xSpecialWeapon) {
}

void UGameOption::SetXSpecialWeapon(bool _xSpecialWeapon) {
}

void UGameOption::SetXContinueFromScoreAttack(bool _xContinue) {
}

void UGameOption::SetXContinueFromHangar(bool _xContinue) {
}

void UGameOption::SetXContinue(bool _xContinue) {
}

void UGameOption::SetSpareNumFromScoreAttack(int32 _spareNum) {
}

void UGameOption::SetSpareNumFromHangar(int32 _spareNum) {
}

void UGameOption::SetSpareNum(int32 _spareNum) {
}

void UGameOption::SetSelectedCourseListRow(int32 _selectedCourseListRow) {
}

void UGameOption::SetMuseumDisplayType(EMuseumDisplayType _type) {
}

void UGameOption::SetKeepPowerupFromScoreAttack(bool _keepPowerup) {
}

void UGameOption::SetKeepPowerupFromHangar(bool _keepPowerup) {
}

void UGameOption::SetKeepPowerup(bool _keepPowerup) {
}

void UGameOption::SetForceAttrForScoreAttack(int32 _forceAttr) {
}

void UGameOption::SetFastChargeFromScoreAttack(bool _fastCharge) {
}

void UGameOption::SetFastChargeFromHangar(bool _fastCharge) {
}

void UGameOption::SetFastCharge(bool _fastCharge) {
}

void UGameOption::SetDoseFullFromScoreAttack(bool _doseFull) {
}

void UGameOption::SetDoseFullFromHangar(bool _doseFull) {
}

void UGameOption::SetDoseFull(bool _doseFull) {
}

void UGameOption::SetDifficultyFromScoreAttack(EDifficulty _difficultyFromScoreAttack) {
}

void UGameOption::SetDifficultyFromHangar(EDifficulty _difficultyFromHangar) {
}

void UGameOption::SetDifficultyCompetition(EDifficulty _difficultyCompetition) {
}

void UGameOption::SetDifficulty(EDifficulty _difficulty) {
}

void UGameOption::SetDemoSkipFromScoreAttack(bool _demoSkipFromScoreAttack) {
}

void UGameOption::SetDemoSkipFromHangar(bool _demoSkipFromHangar) {
}

void UGameOption::SetBitFullFromScoreAttack(bool _bitFull) {
}

void UGameOption::SetBitFullFromHangar(bool _bitFull) {
}

void UGameOption::SetBitFull(bool _bitFull) {
}

bool UGameOption::GetXSpecialWeaponFromScoreAttack() {
    return false;
}

bool UGameOption::GetXSpecialWeaponFromHangar() {
    return false;
}

bool UGameOption::GetXSpecialWeapon() {
    return false;
}

bool UGameOption::GetXContinueFromScoreAttack() {
    return false;
}

bool UGameOption::GetXContinueFromHangar() {
    return false;
}

bool UGameOption::GetXContinue() {
    return false;
}

float UGameOption::GetTotalDifficultyBias(EDifficulty _difficulty, bool _keepPowerup, bool _fastCharge, int32 _spareNum, bool _xSpecialWeapon, bool _xContinue, bool _bitFull, bool _doseFull) {
    return 0.0f;
}

int32 UGameOption::GetSpareNumFromScoreAttack() {
    return 0;
}

int32 UGameOption::GetSpareNumFromHangar() {
    return 0;
}

int32 UGameOption::GetSpareNum() {
    return 0;
}

int32 UGameOption::GetSelectedCourseListRow() {
    return 0;
}

EMuseumDisplayType UGameOption::GetMuseumDisplayType() {
    return EMuseumDisplayType::None;
}

bool UGameOption::GetKeepPowerupFromScoreAttack() {
    return false;
}

bool UGameOption::GetKeepPowerupFromHangar() {
    return false;
}

bool UGameOption::GetKeepPowerup() {
    return false;
}

int32 UGameOption::GetForceAttrForScoreAttack() {
    return 0;
}

bool UGameOption::GetFastChargeFromScoreAttack() {
    return false;
}

bool UGameOption::GetFastChargeFromHangar() {
    return false;
}

bool UGameOption::GetFastCharge() {
    return false;
}

bool UGameOption::GetDoseFullFromScoreAttack() {
    return false;
}

bool UGameOption::GetDoseFullFromHangar() {
    return false;
}

bool UGameOption::GetDoseFull() {
    return false;
}

FText UGameOption::GetDifficultyText(UObject* _worldContext, EDifficulty _value) {
    return FText::GetEmpty();
}

EDifficulty UGameOption::GetDifficultyFromScoreAttack() {
    return EDifficulty::VERY_EASY;
}

EDifficulty UGameOption::GetDifficultyFromHangar() {
    return EDifficulty::VERY_EASY;
}

EDifficulty UGameOption::GetDifficultyCompetition() {
    return EDifficulty::VERY_EASY;
}

EDifficulty UGameOption::GetDifficulty() {
    return EDifficulty::VERY_EASY;
}

bool UGameOption::GetDemoSkipFromScoreAttack() {
    return false;
}

bool UGameOption::GetDemoSkipFromHangar() {
    return false;
}

float UGameOption::GetCurrentTotalDifficultyBias(bool _isCompetition) {
    return 0.0f;
}

bool UGameOption::GetBitFullFromScoreAttack() {
    return false;
}

bool UGameOption::GetBitFullFromHangar() {
    return false;
}

bool UGameOption::GetBitFull() {
    return false;
}


