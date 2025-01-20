#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolActor.generated.h"

class UObject;
class UObjectPoolActor;

UCLASS(Abstract, Blueprintable)
class APoolActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* ObjectPoolActor;
    
    APoolActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Killed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPooled();
    
    UFUNCTION(BlueprintCallable)
    void Created(UObject* _param);
    
    UFUNCTION(BlueprintCallable)
    void Borned(UObject* _param);
};

