#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SoundNodeOggPlayer.generated.h"

class UFileMediaSource;
class USoundWaveProcedural;

UCLASS(Blueprintable, EditInlineNew)
class USoundNodeOggPlayer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* OggMediaSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LoopStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LoopLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundWaveProcedural* SoundWaveProcedural;
    
public:
    USoundNodeOggPlayer();

};

