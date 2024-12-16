#include "UtilTexture.h"

UUtilTexture::UUtilTexture() {
}

void UUtilTexture::ResizeImage(int32 SrcWidth, int32 SrcHeight, const TArray<FColor>& SrcData, int32 DstWidth, int32 DstHeight, TArray<FColor>& DstData, bool bLinearSpace) {
}

void UUtilTexture::RenderTargetUpdateResourceImmediate(UTextureRenderTarget2D* _renderTarget, bool bClearRenderTarget) {
}

void UUtilTexture::ReadPixelsFromRT(UTextureRenderTarget2D* InRT, TArray<FColor>& OutPixels) {
}

bool UUtilTexture::GetRawDataTextureRenderTarget2D(UTextureRenderTarget2D* _TexRT, TArray<uint8>& _rawData) {
    return false;
}

bool UUtilTexture::GetColorDataTextureRenderTarget2D(UTextureRenderTarget2D* _TexRT, TArray<FColor>& _colorData) {
    return false;
}

UTexture2D* UUtilTexture::CreateTextureFromRawData(int32 _sizeX, int32 _sizeY, TEnumAsByte<ETextureRenderTargetFormat> _RTFormat, const TArray<uint8>& _rawData) {
    return NULL;
}

bool UUtilTexture::ConvertSRGBAtoRGBA(TArray<uint8>& _outData, const TArray<uint8>& _inRawData) {
    return false;
}

bool UUtilTexture::CompositeColorAndAlpha(TArray<uint8>& _outData, const TArray<uint8>& _inRawDataColor, const TArray<uint8>& _inRawDataAlpha) {
    return false;
}


