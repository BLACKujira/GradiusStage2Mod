#include "PlatformChunkInstall.h"

UPlatformChunkInstall::UPlatformChunkInstall() {
    this->ClassChunkLoader = NULL;
    this->ActorChunkLoader = NULL;
}

bool UPlatformChunkInstall::UninstallChunks(const TArray<FPlatformCustomChunk>& ChunkTagsID) {
    return false;
}

bool UPlatformChunkInstall::SupportsIntelligentInstall() {
    return false;
}

bool UPlatformChunkInstall::IsChunkInstallationPending(const TArray<FPlatformCustomChunk>& ChunkTagsID) {
    return false;
}

bool UPlatformChunkInstall::InstallChunks(const TArray<FPlatformCustomChunk>& ChunkTagsID) {
    return false;
}

bool UPlatformChunkInstall::GetProgressReportingTypeSupported(EPlatformChunkProgressReportingType ReportType) {
    return false;
}

EPlatformChunkLocation UPlatformChunkInstall::GetPakchunkLocation(int32 PakchunkIndex) {
    return EPlatformChunkLocation::DoesNotExist;
}

float UPlatformChunkInstall::GetChunkProgress(int32 ChunkID, EPlatformChunkProgressReportingType ReportType) {
    return 0.0f;
}

AChunkLoaderBase* UPlatformChunkInstall::GetChunkLoader() const {
    return NULL;
}

void UPlatformChunkInstall::ExternalNotifyChunkAvailable(int32 InChunkID) {
}

void UPlatformChunkInstall::DestroyChunkLoader() {
}

AChunkLoaderBase* UPlatformChunkInstall::CreateChunkLoader() {
    return NULL;
}


