#pragma once
#include "CoreMinimal.h"
#include "EPlatformCustomChunkType.h"
#include "PlatformCustomChunk.generated.h"

USTRUCT(BlueprintType)
struct FPlatformCustomChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChunkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformCustomChunkType ChunkType;
    
    RTYPEFINAL2_API FPlatformCustomChunk();
};

