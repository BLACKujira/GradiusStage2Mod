#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EDifficulty.h"
#include "EMuseumDisplayType.h"
#include "GameOption.generated.h"

class UDifficultyData;
class UObject;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class UGameOption : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DifficultyDataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDifficultyData* DifficultyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty DifficultyFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty DifficultyFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DemoSkipFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DemoSkipFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedCourseListRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMuseumDisplayType MuseumDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty DifficultyCompetition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepPowerup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpareNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xSpecialWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BitFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoseFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepPowerupFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastChargeFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpareNumFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xSpecialWeaponFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xContinueFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BitFullFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoseFullFromHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepPowerupFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastChargeFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpareNumFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xSpecialWeaponFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool xContinueFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BitFullFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoseFullFromScoreAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 forceAttrForScoreAttack;
    
public:
    UGameOption();

    UFUNCTION(BlueprintCallable)
    void SetXSpecialWeaponFromScoreAttack(bool _xSpecialWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetXSpecialWeaponFromHangar(bool _xSpecialWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetXSpecialWeapon(bool _xSpecialWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetXContinueFromScoreAttack(bool _xContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetXContinueFromHangar(bool _xContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetXContinue(bool _xContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpareNumFromScoreAttack(int32 _spareNum);
    
    UFUNCTION(BlueprintCallable)
    void SetSpareNumFromHangar(int32 _spareNum);
    
    UFUNCTION(BlueprintCallable)
    void SetSpareNum(int32 _spareNum);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCourseListRow(int32 _selectedCourseListRow);
    
    UFUNCTION(BlueprintCallable)
    void SetMuseumDisplayType(EMuseumDisplayType _type);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepPowerupFromScoreAttack(bool _keepPowerup);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepPowerupFromHangar(bool _keepPowerup);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepPowerup(bool _keepPowerup);
    
    UFUNCTION(BlueprintCallable)
    void SetForceAttrForScoreAttack(int32 _forceAttr);
    
    UFUNCTION(BlueprintCallable)
    void SetFastChargeFromScoreAttack(bool _fastCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetFastChargeFromHangar(bool _fastCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetFastCharge(bool _fastCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetDoseFullFromScoreAttack(bool _doseFull);
    
    UFUNCTION(BlueprintCallable)
    void SetDoseFullFromHangar(bool _doseFull);
    
    UFUNCTION(BlueprintCallable)
    void SetDoseFull(bool _doseFull);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyFromScoreAttack(EDifficulty _difficultyFromScoreAttack);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyFromHangar(EDifficulty _difficultyFromHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyCompetition(EDifficulty _difficultyCompetition);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetDemoSkipFromScoreAttack(bool _demoSkipFromScoreAttack);
    
    UFUNCTION(BlueprintCallable)
    void SetDemoSkipFromHangar(bool _demoSkipFromHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFullFromScoreAttack(bool _bitFull);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFullFromHangar(bool _bitFull);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFull(bool _bitFull);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXSpecialWeaponFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXSpecialWeaponFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXSpecialWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXContinueFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXContinueFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXContinue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDifficultyBias(EDifficulty _difficulty, bool _keepPowerup, bool _fastCharge, int32 _spareNum, bool _xSpecialWeapon, bool _xContinue, bool _bitFull, bool _doseFull);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpareNumFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpareNumFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpareNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCourseListRow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMuseumDisplayType GetMuseumDisplayType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeepPowerupFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeepPowerupFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeepPowerup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetForceAttrForScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFastChargeFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFastChargeFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFastCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoseFullFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoseFullFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoseFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FText GetDifficultyText(UObject* _worldContext, EDifficulty _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetDifficultyFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetDifficultyFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetDifficultyCompetition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDemoSkipFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDemoSkipFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTotalDifficultyBias(bool _isCompetition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBitFullFromScoreAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBitFullFromHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBitFull();
    
};

