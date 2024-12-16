#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H023DataAsset.generated.h"

class UAnimSequence;
class USkeletalMesh;

UCLASS(Blueprintable)
class UH023DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* LeaderM;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeaderAS[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeaderAE[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BulletM;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BulletA[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HuntT[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearT[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeformT[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRE[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRL[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BRE[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BRL[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApRate[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCL_VU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCL_VD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCL_SU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCL_SD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCE_VU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCE_VD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCE_SU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCE_SD;
    
    UH023DataAsset();

};

