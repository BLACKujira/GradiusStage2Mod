#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Checksum.generated.h"

UCLASS(Blueprintable)
class UChecksum : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChecksum();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetOnesComplementSum(int32 _prefix, const TArray<uint8>& _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetChecksumOnesWithPrefix(int32 _prefix, const TArray<uint8>& _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetChecksumOnes(const TArray<uint8>& _data);
    
};

