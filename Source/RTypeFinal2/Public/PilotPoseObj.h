#pragma once
#include "CoreMinimal.h"
#include "EPATTACH_ID.h"
#include "PilotPoseObj.generated.h"

class UAnimSequence;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPilotPoseObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPATTACH_ID AttachID;
    
    RTYPEFINAL2_API FPilotPoseObj();
};

