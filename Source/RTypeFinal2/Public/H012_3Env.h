#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "SearchUnit.h"
#include "H012_3Env.generated.h"

class ARADAR;
class UTMarkWidget;

UCLASS(Blueprintable)
class UH012_3Env : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARADAR* RADAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSearchUnit> Searched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTMarkWidget*> TMarkWidgets;
    
public:
    UH012_3Env();

};

