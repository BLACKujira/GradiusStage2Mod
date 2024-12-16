#pragma once
#include "CoreMinimal.h"
#include "GhostPlayerBase.h"
#include "GhostPlayer.generated.h"

class UGhostRecordData;

UCLASS(Blueprintable)
class AGhostPlayer : public AGhostPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostRecordData* RecordData;
    
public:
    AGhostPlayer(const FObjectInitializer& ObjectInitializer);

};

