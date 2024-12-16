#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "E28OnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class UE28OnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableHandleDisconnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExecuteOnceHandleDisconnet;
    
public:
    UE28OnlineSessionClient();

};

