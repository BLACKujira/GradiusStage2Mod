#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL170B.generated.h"

class UEL170BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEL170B : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL170BEnv* Env;
    
public:
    AEL170B(const FObjectInitializer& ObjectInitializer);

};

