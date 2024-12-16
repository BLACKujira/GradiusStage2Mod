#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnErrorOccurredDelegate.h"
#include "OnFinishedDelegate.h"
#include "OnScoreEntryFinishedDelegate.h"
#include "RankingCond.h"
#include "RankingData.h"
#include "RankHttpActor.generated.h"

UCLASS(Blueprintable)
class ARankHttpActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingData> rankDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Image;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished onUserEntryFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished onAggregateFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished onUploadPlayerInfoFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished onGetPlayerRanking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreEntryFinished onScoreEntryFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnErrorOccurred onErrorOccurred;
    
    ARankHttpActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UploadPlayerInfo(TArray<uint8> Img);
    
    UFUNCTION(BlueprintCallable)
    void ScoreEntry(FRankingData rankData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReceived();
    
    UFUNCTION(BlueprintCallable)
    void GetRanking(FRankingCond RankingCond);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRankingData> GetRankDataList();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerRanking(FRankingCond RankingCond);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerInfo(const FString& UserId, const FString& Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetImage();
    
    UFUNCTION(BlueprintCallable)
    void AuthAndUserEntry(FRankingData rankData);
    
    UFUNCTION(BlueprintCallable)
    void AggregateRanking(const FString& Stage);
    
};

