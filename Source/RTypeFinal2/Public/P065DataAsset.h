#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P065DataAsset.generated.h"

UCLASS(Blueprintable)
class UP065DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP065DataAsset();

};

