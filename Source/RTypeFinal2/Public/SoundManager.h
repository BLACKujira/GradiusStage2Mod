#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "SoundManager.generated.h"

class USoundManagerHelperBase;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class USoundManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundManagerHelperBase* SubsystemHelper;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USoundManagerHelperBase> SubsystemHelperClass;
    
public:
    USoundManager();

};

