#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UUtilDataTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilDataTable();

    UFUNCTION(BlueprintCallable)
    static bool Reimport(UDataTable* _dataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSourceFile(UDataTable* _dataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetRowStructName(UDataTable* _dataTable);
    
};

