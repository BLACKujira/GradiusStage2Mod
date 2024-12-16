#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH010.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AEH010 : public AEHXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Splash;
    
public:
    AEH010(const FObjectInitializer& ObjectInitializer);

};

