#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SafeInt.h"
#include "EDlcType.h"
#include "GameDlc.generated.h"

class UGameDlcContentAsset;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameDlc : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameDlc();

    UFUNCTION(BlueprintCallable)
    void SetLockContents(bool _isLock);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableDlcId(FSafeInt _dlcId);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableDlcIdList(TArray<FSafeInt>& _dlcIdList, EDlcType _dlcType);
    
    UFUNCTION(BlueprintCallable)
    FSafeInt GetDlcIdByName(FName _dataName, EDlcType _dlcType);
    
    UFUNCTION(BlueprintCallable)
    FSafeInt GetDlcId(int32 _dataId, EDlcType _dlcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDlcDataNames(FSafeInt _dlcId, TArray<FName>& _outNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDlcDataIds(FSafeInt _dlcId, TArray<int32>& _outIds) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEnableContentTable(UGameDlcContentAsset* _contentAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddEnableContentIdList(const TArray<FName>& _contentIdList);
    
    UFUNCTION(BlueprintCallable)
    void AddEnableContentId(FName _contentId);
    
};

