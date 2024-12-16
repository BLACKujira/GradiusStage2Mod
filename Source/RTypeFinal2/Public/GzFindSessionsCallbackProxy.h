#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
#include "EBODY_NO.h"
#include "EDifficulty.h"
#include "EStageId.h"
#include "MultiplayStageSearch.h"
#include "GzFindSessionsCallbackProxy.generated.h"

class APlayerController;
class UGzFindSessionsCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGzFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
// public:
//     UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//     FBlueprintFindSessionsResultDelegate OnSuccess;

//     UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//     FBlueprintFindSessionsResultDelegate OnFailure;

//     UGzFindSessionsCallbackProxy();

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static FString GetUserName(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static FString GetUserId(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static FString GetStageName(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static EStageId GetStageId(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static FString GetServerName(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static int32 GetPingInMs(const FBlueprintSessionResult& Result);

//     UFUNCTION(BlueprintCallable, BlueprintPure)
//     static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);

    // UFUNCTION(BlueprintCallable, BlueprintPure)
    // static EDifficulty GetDifficulty(const FBlueprintSessionResult& Result);

    // UFUNCTION(BlueprintCallable, BlueprintPure)
    // static int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);

    // UFUNCTION(BlueprintCallable, BlueprintPure)
    // static EBODY_NO GetBodyNo(const FBlueprintSessionResult& Result);

    // UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    // static UGzFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, const FMultiplayStageSearch& StageSearch);

};

