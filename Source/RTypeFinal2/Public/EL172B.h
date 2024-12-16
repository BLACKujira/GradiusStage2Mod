#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL172B.generated.h"

class UEL172BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEL172B : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL172BEnv* Env;
    
public:
    AEL172B(const FObjectInitializer& ObjectInitializer);

};

