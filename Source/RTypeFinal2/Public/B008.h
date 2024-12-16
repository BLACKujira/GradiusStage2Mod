#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B008.generated.h"

class UMaterialInstanceDynamic;
class UP001DataAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AB008 : public ABitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BODYS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MisBodyS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB008(const FObjectInitializer& ObjectInitializer);

};

