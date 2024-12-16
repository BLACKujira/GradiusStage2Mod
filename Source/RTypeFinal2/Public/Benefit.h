#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BenefitSave.h"
#include "Benefit.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UBenefit : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBenefitSave Savedata;
    
    UBenefit();

};

