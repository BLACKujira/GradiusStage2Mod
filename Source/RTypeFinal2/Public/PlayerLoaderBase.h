#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomizeSetting.h"
#include "PlayerLoaderFinishedDelegate.h"
#include "PlayerLoaderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class APlayerLoaderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoaderFinished OnFinished;
    
    APlayerLoaderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssetLoadForCompetition(const FCustomizeSetting& _customizeSetting, bool _bRemote);
    
};

