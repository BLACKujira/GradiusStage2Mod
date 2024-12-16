#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E28GameMode.h"
#include "E28GameMode_Competition.generated.h"

class AController;

UCLASS(Blueprintable, NonTransient)
class AE28GameMode_Competition : public AE28GameMode {
    GENERATED_BODY()
public:
    AE28GameMode_Competition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnAircraftPawn(AController* _newPlayer, const FTransform& _spawnTransform);
    
};

