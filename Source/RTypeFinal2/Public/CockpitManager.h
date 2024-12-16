#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CockpitManager.generated.h"

class UWidgetCockpit;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UCockpitManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetCockpit* UmgCockpit;
    
    UCockpitManager();

};

