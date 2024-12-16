#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilPosition.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilPosition : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilPosition();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FVector TransVectorWorldToScreenActor(UObject* _worldContext, FVector _wnml);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FVector TransVectorScreenActorToWorld(UObject* _worldContext, FVector _snml);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FRotator TransRotationWorldToScreenActor(UObject* _worldContext, FRotator _wpos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FRotator TransRotationScreenActorToWorld(UObject* _worldContext, FRotator _spos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FVector TransPositionWorldToScreenActor(UObject* _worldContext, FVector _wpos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static FVector TransPositionScreenActorToWorld(UObject* _worldContext, FVector _spos);
    
};

