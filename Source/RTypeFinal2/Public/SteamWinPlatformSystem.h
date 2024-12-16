#pragma once
#include "CoreMinimal.h"
#include "BasePlatformSystem.h"
#include "SteamWinPlatformSystem.generated.h"

class UPackageInstalledInfo;

USTRUCT(BlueprintType)
struct FSteamWinPlatformSystem : public FBasePlatformSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPackageInstalledInfo*> PackageInstalledInfoList;
    
public:
    RTYPEFINAL2_API FSteamWinPlatformSystem();
};

