#pragma once
#include "CoreMinimal.h"
#include "BasePlatformSystem.generated.h"

class UDataTable;
class UPlatformSystem;

USTRUCT(BlueprintType)
struct FBasePlatformSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlatformSystem* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ContentIdDataTable;
    
public:
    RTYPEFINAL2_API FBasePlatformSystem();
};

