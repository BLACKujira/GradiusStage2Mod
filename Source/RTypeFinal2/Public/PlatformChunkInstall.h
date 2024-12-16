#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPlatformChunkLocation.h"
#include "EPlatformChunkProgressReportingType.h"
#include "PlatformChunkInstalledDelegateDelegate.h"
#include "PlatformCustomChunk.h"
#include "PlatformChunkInstall.generated.h"

class AChunkLoaderBase;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class UPlatformChunkInstall : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath PathChunkLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassChunkLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkLoaderBase* ActorChunkLoader;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformChunkInstalledDelegate OnInstalled;
    
    UPlatformChunkInstall();

    UFUNCTION(BlueprintCallable)
    bool UninstallChunks(const TArray<FPlatformCustomChunk>& ChunkTagsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsIntelligentInstall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChunkInstallationPending(const TArray<FPlatformCustomChunk>& ChunkTagsID);
    
    UFUNCTION(BlueprintCallable)
    bool InstallChunks(const TArray<FPlatformCustomChunk>& ChunkTagsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProgressReportingTypeSupported(EPlatformChunkProgressReportingType ReportType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatformChunkLocation GetPakchunkLocation(int32 PakchunkIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChunkProgress(int32 ChunkID, EPlatformChunkProgressReportingType ReportType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AChunkLoaderBase* GetChunkLoader() const;
    
    UFUNCTION(BlueprintCallable)
    void ExternalNotifyChunkAvailable(int32 InChunkID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyChunkLoader();
    
    UFUNCTION(BlueprintCallable)
    AChunkLoaderBase* CreateChunkLoader();
    
};

