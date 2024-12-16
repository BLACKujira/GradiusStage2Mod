#pragma once
#include "CoreMinimal.h"
#include "SafeRotator.h"
#include "SafeVector3D.h"
#include "SafeTransform.generated.h"

USTRUCT(BlueprintType)
struct SCUE4_API FSafeTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSafeVector3D Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSafeVector3D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSafeRotator Rotation;
    
public:
    FSafeTransform();
};

