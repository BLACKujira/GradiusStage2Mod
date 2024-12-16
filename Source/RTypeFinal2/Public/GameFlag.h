#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFlag.generated.h"

class UDataTable;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameFlag : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FlagNumberDataTable;
    
public:
    UGameFlag();

    UFUNCTION(BlueprintCallable)
    void SetByNo(int32 _no);
    
    UFUNCTION(BlueprintCallable)
    void SetByName(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNo(FName _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetByNo(int32 _no) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetByName(FName _name) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearByNo(int32 _no);
    
    UFUNCTION(BlueprintCallable)
    void ClearByName(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDLC();
    
};

