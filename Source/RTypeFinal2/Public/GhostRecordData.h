#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GhostRecordKey.h"
#include "GhostRecordData.generated.h"

UCLASS(Blueprintable)
class UGhostRecordData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGhostRecordKey> Keys;
    
public:
    UGhostRecordData();

};

