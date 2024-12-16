#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CountDataAsset.generated.h"

class UCountData_Header;

UCLASS(Blueprintable)
class UCountDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCountData_Header*> Data;
    
    UCountDataAsset();

};

