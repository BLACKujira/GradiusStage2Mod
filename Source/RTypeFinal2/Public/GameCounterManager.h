#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameCounterManager_CountData.h"
#include "GameCounterManager.generated.h"

class UCountDataAsset;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameCounterManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CounterExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameCounterManager_CountData> CountDataList;
    
public:
    UGameCounterManager();

    UFUNCTION(BlueprintCallable)
    void BpSetSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void BpSetEnable(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void BpSetCounter(float _value);
    
    UFUNCTION(BlueprintCallable)
    void BpRegisterCountData(const UCountDataAsset* _countDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BpGetEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetCounter() const;
    
};

