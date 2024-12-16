#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H015DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UH015DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnNum[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BubbleNumPerColumn[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpTime[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapidInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenBottomBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathDataLine1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathDataLine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathDataLine3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathDataFloat;
    
    UH015DataAsset();

};

