#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H010.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AH010 : public AHActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Splash;
    
public:
    AH010(const FObjectInitializer& ObjectInitializer);

};

