#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL173B.generated.h"

class UEL173BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEL173B : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL173BEnv* Env;
    
public:
    AEL173B(const FObjectInitializer& ObjectInitializer);

};

