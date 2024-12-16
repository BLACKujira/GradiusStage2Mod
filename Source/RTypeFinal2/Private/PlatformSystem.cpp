#include "PlatformSystem.h"

UPlatformSystem::UPlatformSystem() {
}

void UPlatformSystem::SetBoostMode(EPlatformBoostMode _mode) {
}

bool UPlatformSystem::PackageUnmount(UPackageInstalledInfo* _inInfo) {
    return false;
}

bool UPlatformSystem::PackageMount(APlayerController* _playerController, UPackageInstalledInfo* _inInfo) {
    return false;
}

bool UPlatformSystem::PackageGetInstallInfo(TArray<UPackageInstalledInfo*>& _outInfo) {
    return false;
}

bool UPlatformSystem::PackageGetContentIdList(TArray<FName>& _outContentIds, const TArray<UPackageInstalledInfo*>& _inInfos) {
    return false;
}

bool UPlatformSystem::PackageGetContentId(TArray<FName>& _outContentIds, const UPackageInstalledInfo* _inInfo) {
    return false;
}

bool UPlatformSystem::PackageEnumerateInstalledInfo(APlayerController* _playerController) {
    return false;
}

bool UPlatformSystem::IsConsole() const {
    return false;
}

void UPlatformSystem::GetPlatformContentIds(TArray<FName>& _outContentIds, EContentPlatformType _platformType) {
}

EGamePadType UPlatformSystem::GetGamePadType() const {
    return EGamePadType::None;
}

bool UPlatformSystem::ConvertRgbaToPng(TArray<uint8>& _outData, const TArray<uint8>& _inData, int32 _width, int32 _height, EPlatformPngPixelFormat _pixelFormat, EPlatformPngColorSpace _colorSpace) {
    return false;
}

bool UPlatformSystem::ConvertColorToPng(TArray<uint8>& _outData, const TArray<FColor>& _inData, int32 _width, int32 _height, EPlatformPngPixelFormat _pixelFormat, EPlatformPngColorSpace _colorSpace) {
    return false;
}

FString UPlatformSystem::AchievmentIdToIdString(FName _idEnum) const {
    return TEXT("");
}


