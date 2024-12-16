#pragma once
#include "CoreMinimal.h"
#include "GS_Base.h"
#include "GameStateMachineInterface.h"
#include "GS_GameLoop.generated.h"

UCLASS(Blueprintable)
class UGS_GameLoop : public UGS_Base, public IGameStateMachineInterface {
    GENERATED_BODY()
public:
    UGS_GameLoop();


    // Fix for true pure virtual functions not being implemented
};

