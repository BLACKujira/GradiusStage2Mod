#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P065.generated.h"

class UP065DataAsset;

UCLASS(Blueprintable)
class AP065 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP065DataAsset* DataAsset;
    
public:
    AP065(const FObjectInitializer& ObjectInitializer);

};

