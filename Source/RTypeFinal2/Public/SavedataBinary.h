#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SavedataBinary.generated.h"

UCLASS(Blueprintable)
class USavedataBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Binary;
    
    USavedataBinary();

};

