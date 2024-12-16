#include "RankHttpActor.h"

ARankHttpActor::ARankHttpActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceived = false;
}

void ARankHttpActor::UploadPlayerInfo(TArray<uint8> Img) {
}

void ARankHttpActor::ScoreEntry(FRankingData rankData) {
}

bool ARankHttpActor::IsReceived() {
    return false;
}

void ARankHttpActor::GetRanking(FRankingCond RankingCond) {
}

TArray<FRankingData> ARankHttpActor::GetRankDataList() {
    return TArray<FRankingData>();
}

void ARankHttpActor::GetPlayerRanking(FRankingCond RankingCond) {
}

void ARankHttpActor::GetPlayerInfo(const FString& UserId, const FString& Platform) {
}

TArray<uint8> ARankHttpActor::GetImage() {
    return TArray<uint8>();
}

void ARankHttpActor::AuthAndUserEntry(FRankingData rankData) {
}

void ARankHttpActor::AggregateRanking(const FString& Stage) {
}


