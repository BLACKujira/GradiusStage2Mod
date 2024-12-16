#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EStageBranchType.h"
#include "StageManager.generated.h"

class AStageBgm;
class UStageCommonDataAsset;
class UStageDataAsset;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UStageManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageCommonDataAsset* StageCommonDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDataAsset* StageDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStageBgm* StageBgm;
    
public:
    UStageManager();

    UFUNCTION(BlueprintCallable)
    void SetStageDataAsset(UStageDataAsset* _inStage);
    
    UFUNCTION(BlueprintCallable)
    void SetStageBgm(AStageBgm* _stageBgm);
    
    UFUNCTION(BlueprintCallable)
    void SetBranchFlag(EStageBranchType _type, bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStageBranchType> GetUseBranchTypes();
    
    UFUNCTION(BlueprintCallable)
    UStageDataAsset* GetStageDataAsset();
    
    UFUNCTION(BlueprintCallable)
    UStageCommonDataAsset* GetStageCommonDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStageBgm* GetStageBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBranchTypeNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageBranchType GetBranchTypeFlagOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBranchFlagName(EStageBranchType _type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBranchFlag(EStageBranchType _type) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearUseBranchTypes();
    
    UFUNCTION(BlueprintCallable)
    void ClarBranchFlagAll();
    
    UFUNCTION(BlueprintCallable)
    void AddUseBranchType(EStageBranchType _type);
    
};

