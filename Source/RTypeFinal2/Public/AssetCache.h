#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetCache.generated.h"

class UBydoData;
class UGalleryData;
class UManualData;
class UObject;
class UPlayerDefs;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UAssetCache : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CacheForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CurrentDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDefs* PlayerDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGalleryData* GalleryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBydoData* BydoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManualData* ManualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentGarageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CacheForGhost;
    
public:
    UAssetCache();

    UFUNCTION(BlueprintCallable)
    void SetPlayerDefs(UPlayerDefs* _defs);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCache(const TArray<UObject*>& _newData);
    
    UFUNCTION(BlueprintCallable)
    void SetManualData(UManualData* _defs);
    
    UFUNCTION(BlueprintCallable)
    void SetGhostCache(const TArray<UObject*>& _newData);
    
    UFUNCTION(BlueprintCallable)
    void SetGalleryData(UGalleryData* _defs);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGarageIndex(int32 _index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDecalTex(UTextureRenderTarget2D* _decalTex);
    
    UFUNCTION(BlueprintCallable)
    void SetBydoData(UBydoData* _defs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetWorldAsObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerDefs* GetPlayerDefs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetPlayerCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManualData* GetManualData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetGhostCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGalleryData* GetGalleryData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGarageIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetCurrentDecalTex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBydoData* GetBydoData();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* CreateIndependentRenderTarget2D(int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerCache();
    
    UFUNCTION(BlueprintCallable)
    void ClearGhostCache();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerCache(const TArray<UObject*>& _newData);
    
};

