#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameSaveCopyResult.h"
#include "EGameSaveExistsResult.h"
#include "Templates/SubclassOf.h"
#include "GameSavedata.generated.h"

class USaveGame;
class USavedataBinary;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameSavedata : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USavedataBinary* ThumbnailBinary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USavedataBinary* IconImageBinary;
    
public:
    UGameSavedata();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString_GameSaveExistsResult(EGameSaveExistsResult _result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString_GameSaveCopyResult(EGameSaveCopyResult _result);
    
    UFUNCTION(BlueprintCallable)
    bool SetThumbnailTextureRawData(const TArray<uint8>& _rawData);
    
    UFUNCTION(BlueprintCallable)
    USavedataBinary* SetThumbnailTexture(UTextureRenderTarget2D* _thumbImage, USaveGame* _data);
    
    UFUNCTION(BlueprintCallable)
    void SetNotSaveFlag(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMetaTitle(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetMetaSubTitle(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetMetaDetail(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    bool SetIconImageTexture(UTextureRenderTarget2D* _iconImage);
    
    UFUNCTION(BlueprintCallable)
    bool SetIconImageRawData(const TArray<uint8>& _rawData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SaveNameRemoveThumbnail(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SaveNameRemoveIcon(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveNameIsThumbnail(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveNameIsPilotAlbum(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveNameIsIcon(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveNameIsAlbum(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToMemory(USaveGame* SaveGameObject, TArray<uint8>& OutSaveData);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseThumbnailIconImage();
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromMemory(const TArray<uint8>& InSaveData);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetThumbnailTexture(const TArray<uint8>& _rawData, TSoftObjectPtr<UTexture2D>& _iconImage, USaveGame*& _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSuffixThumbnail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSuffixIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringUseTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPrefixPilotAlbum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPrefixAlbum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlatformSaveIconSize(int32& _x, int32& _y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNotSaveFlag() const;
    
    UFUNCTION(BlueprintCallable)
    static EGameSaveExistsResult DoesSaveGameExistWithResult(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSaveGameExist(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteGameInSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> ConvertTexture(UTexture* Img);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* ConvertRawData(TArray<uint8> rawData);
    
    UFUNCTION(BlueprintCallable)
    void ClearMetaData();
    
};

