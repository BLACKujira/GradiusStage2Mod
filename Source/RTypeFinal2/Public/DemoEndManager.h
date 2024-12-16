#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DemoEndManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UDemoEndManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgDemoEnd;
    
    UDemoEndManager();

};

