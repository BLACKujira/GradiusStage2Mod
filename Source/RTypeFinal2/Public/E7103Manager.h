#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E7103RebornParam.h"
#include "E7103Manager.generated.h"

UCLASS(Blueprintable)
class AE7103Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7103RebornParam> RebornParams;
    
public:
    AE7103Manager(const FObjectInitializer& ObjectInitializer);

};

