#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "H000DataAsset.h"
#include "EH010DataAsset.generated.h"

UCLASS(Blueprintable)
class UEH010DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApGrow[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApKeep[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApDecay[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApSpark[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float growTime[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CartridgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeSpeed_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeSpeed_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CartridgeLifeTime;
    
    UEH010DataAsset();

};

