#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_ScrollMesh.generated.h"

UCLASS(Blueprintable)
class UCountData_ScrollMesh : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UCountData_ScrollMesh();

};

