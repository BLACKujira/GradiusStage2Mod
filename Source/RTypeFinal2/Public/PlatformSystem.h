#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EContentPlatformType.h"
#include "EGamePadType.h"
#include "EPlatformBoostMode.h"
#include "EPlatformPngColorSpace.h"
#include "EPlatformPngPixelFormat.h"
#include "PackageGetInstalledInfoDelegate.h"
#include "PackageMountDelegate.h"
#include "PlatformSystem.generated.h"

class APlayerController;
class UPackageInstalledInfo;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UPlatformSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageGetInstalledInfo OnFinishedPackageInstalledInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageMount OnFinishedPackageMount;
    
    UPlatformSystem();

    UFUNCTION(BlueprintCallable)
    void SetBoostMode(EPlatformBoostMode _mode);
    
    UFUNCTION(BlueprintCallable)
    bool PackageUnmount(UPackageInstalledInfo* _inInfo);
    
    UFUNCTION(BlueprintCallable)
    bool PackageMount(APlayerController* _playerController, UPackageInstalledInfo* _inInfo);
    
    UFUNCTION(BlueprintCallable)
    bool PackageGetInstallInfo(TArray<UPackageInstalledInfo*>& _outInfo);
    
    UFUNCTION(BlueprintCallable)
    bool PackageGetContentIdList(TArray<FName>& _outContentIds, const TArray<UPackageInstalledInfo*>& _inInfos);
    
    UFUNCTION(BlueprintCallable)
    bool PackageGetContentId(TArray<FName>& _outContentIds, const UPackageInstalledInfo* _inInfo);
    
    UFUNCTION(BlueprintCallable)
    bool PackageEnumerateInstalledInfo(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsole() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlatformContentIds(TArray<FName>& _outContentIds, EContentPlatformType _platformType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGamePadType GetGamePadType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ConvertRgbaToPng(TArray<uint8>& _outData, const TArray<uint8>& _inData, int32 _width, int32 _height, EPlatformPngPixelFormat _pixelFormat, EPlatformPngColorSpace _colorSpace);
    
    UFUNCTION(BlueprintCallable)
    bool ConvertColorToPng(TArray<uint8>& _outData, const TArray<FColor>& _inData, int32 _width, int32 _height, EPlatformPngPixelFormat _pixelFormat, EPlatformPngColorSpace _colorSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AchievmentIdToIdString(FName _idEnum) const;
    
};

