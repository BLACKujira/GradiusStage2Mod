#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "FocusStackElement.h"
#include "E28GameViewportClient.generated.h"

class AConfirmDialog;

UCLASS(Blueprintable, NonTransient)
class UE28GameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AConfirmDialog* DialogActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusStackElement> LowFocusStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusStackElement> HighFocusStacks;
    
public:
    UE28GameViewportClient();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusStacksNum(bool _prioHigh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFocusStacksName(bool _prioHigh, int32 _index);
    
};

