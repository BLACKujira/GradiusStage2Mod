#pragma once
#include "CoreMinimal.h"
#include "GS_Base.h"
#include "GameStateMachineInterface.h"
#include "GS_Idle.generated.h"

UCLASS(Blueprintable)
class UGS_Idle : public UGS_Base, public IGameStateMachineInterface {
    GENERATED_BODY()
public:
    UGS_Idle();


    // Fix for true pure virtual functions not being implemented
};

