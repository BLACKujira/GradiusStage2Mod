#pragma once
#include "CoreMinimal.h"
#include "GS_Base.h"
#include "GameStateMachineInterface.h"
#include "Templates/SubclassOf.h"
#include "GS_GameClear.generated.h"

class UWidgetClearScr;

UCLASS(Blueprintable)
class UGS_GameClear : public UGS_Base, public IGameStateMachineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetClearScr> ClassClearScr;
    
public:
    UGS_GameClear();


    // Fix for true pure virtual functions not being implemented
};

