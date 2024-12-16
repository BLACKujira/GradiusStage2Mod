#pragma once
#include "CoreMinimal.h"
#include "PawnBase.h"
#include "AircraftDummyPawn.generated.h"

UCLASS(Blueprintable)
class AAircraftDummyPawn : public APawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPhase;
    
public:
    AAircraftDummyPawn(const FObjectInitializer& ObjectInitializer);

};

