#pragma once
#include "CoreMinimal.h"
#include "EBS703_MOVECOMMAND.h"
#include "BS703MoveCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS703MoveCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS703_MOVECOMMAND CommandA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ParamA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS703_MOVECOMMAND CommandB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ParamB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS703_MOVECOMMAND CommandC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ParamC;
    
    RTYPEFINAL2_API FBS703MoveCommand();
};

