#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeathManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UDeathManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgDeath;
    
    UDeathManager();

};

