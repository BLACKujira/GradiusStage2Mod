#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "UtilTexture.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UUtilTexture : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilTexture();

    UFUNCTION(BlueprintCallable)
    static void ResizeImage(int32 SrcWidth, int32 SrcHeight, const TArray<FColor>& SrcData, int32 DstWidth, int32 DstHeight, TArray<FColor>& DstData, bool bLinearSpace);
    
    UFUNCTION(BlueprintCallable)
    static void RenderTargetUpdateResourceImmediate(UTextureRenderTarget2D* _renderTarget, bool bClearRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static void ReadPixelsFromRT(UTextureRenderTarget2D* InRT, TArray<FColor>& OutPixels);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRawDataTextureRenderTarget2D(UTextureRenderTarget2D* _TexRT, TArray<uint8>& _rawData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetColorDataTextureRenderTarget2D(UTextureRenderTarget2D* _TexRT, TArray<FColor>& _colorData);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTextureFromRawData(int32 _sizeX, int32 _sizeY, TEnumAsByte<ETextureRenderTargetFormat> _RTFormat, const TArray<uint8>& _rawData);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertSRGBAtoRGBA(TArray<uint8>& _outData, const TArray<uint8>& _inRawData);
    
    UFUNCTION(BlueprintCallable)
    static bool CompositeColorAndAlpha(TArray<uint8>& _outData, const TArray<uint8>& _inRawDataColor, const TArray<uint8>& _inRawDataAlpha);
    
};

