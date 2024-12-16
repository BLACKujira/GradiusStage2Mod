#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCUE4Settings.generated.h"

UCLASS(Blueprintable, Config=Game)
class SCUE4_API USCUE4Settings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyGeneratorPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IllegalKeywords;
    
    USCUE4Settings();

};

