#pragma once
#include "CoreMinimal.h"
#include "ELXXXX.h"
#include "EL169B.generated.h"

class UEL169BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEL169B : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL169BEnv* Env;
    
public:
    AEL169B(const FObjectInitializer& ObjectInitializer);

};

