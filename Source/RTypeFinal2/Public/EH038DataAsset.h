#pragma once
#include "CoreMinimal.h"
#include "EH038Form.h"
#include "H000DataAsset.h"
#include "EH038DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UEH038DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMoveLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> PathEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEH038Form> ColForms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEH038Form ColFormB;
    
    UEH038DataAsset();

};

