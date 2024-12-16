#pragma once
#include "CoreMinimal.h"
#include "BasePlatformSystem.h"
#include "DmmWinPlatformSystem.generated.h"

class UPackageInstalledInfo;

USTRUCT(BlueprintType)
struct FDmmWinPlatformSystem : public FBasePlatformSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPackageInstalledInfo*> PackageInstalledInfoList;
    
public:
    RTYPEFINAL2_API FDmmWinPlatformSystem();
};

