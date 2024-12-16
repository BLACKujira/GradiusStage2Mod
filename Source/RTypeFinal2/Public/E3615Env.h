#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "E3615Env.generated.h"

class AE3615;
class UAudioComponent;
class UE3615Param;

UCLASS(Blueprintable)
class UE3615Env : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3615Param* VernierParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE3615*> Verniers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioVernier;
    
public:
    UE3615Env();

};

