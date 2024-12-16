#pragma once
#include "CoreMinimal.h"
#include "L019PartN.h"
#include "LBase.h"
#include "L019.generated.h"

class UAudioComponent;
class UL019Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL019 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL019PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL019Env* Env;
    
public:
    AL019(const FObjectInitializer& ObjectInitializer);

};

