#pragma once
#include "CoreMinimal.h"
#include "EP099.h"
#include "BS7082.generated.h"

class AEFXXXX;
class AEnemyActor;
class UEnemyPathDataAsset;
class USplineCmdAsset;

UCLASS(Blueprintable)
class ABS7082 : public AEP099 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USplineCmdAsset*> MovePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USplineCmdAsset*> LastPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEFXXXX* BS7082ForceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* EntryPathData;
    
public:
    ABS7082(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CmdEvent2(FName _eventName, int32 _value);
    
};

