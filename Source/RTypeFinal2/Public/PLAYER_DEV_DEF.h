#pragma once
#include "CoreMinimal.h"
#include "EBODY_NO.h"
#include "EStageId.h"
#include "RESOURCES.h"
#include "PLAYER_DEV_DEF.generated.h"

USTRUCT(BlueprintType)
struct FPLAYER_DEV_DEF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEarlyModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO Developed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO Cleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRESOURCES RESOURCES;
    
    RTYPEFINAL2_API FPLAYER_DEV_DEF();
};

