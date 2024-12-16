#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL096B.generated.h"

class UEL096BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEL096B : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL096BEnv* Env;
    
public:
    AEL096B(const FObjectInitializer& ObjectInitializer);

};

