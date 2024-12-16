#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECompStageId.h"
#include "EStageId.h"
#include "EStageListLevel.h"
#include "StageList.h"
#include "StageListCompetition.h"
#include "StageLevel.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class UStageLevel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageLevel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsFinalStage(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDevelope(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCourseEdit(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCompetitionStage(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetResourcesNum(UObject* WorldContextObject, EStageId _inId, int32& _outResourceA, int32& _outResourceB, int32& _outResourceC);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNo(UObject* WorldContextObject, EStageId _inId, FString& _outNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNameText(UObject* WorldContextObject, EStageId _inId, FText& _outName1, FText& _outName2);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetName(UObject* WorldContextObject, EStageId _inId, FName& _outName1, FName& _outName2);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetListCompByStageId(UObject* WorldContextObject, ECompStageId _inId, FStageListCompetition& _outList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetListByStageId(UObject* WorldContextObject, EStageId _inId, FStageList& _outList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLevelPackageName(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, FString& _outPackageName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLevelAssetId(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, FPrimaryAssetId& _outPrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLevel(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, TSoftObjectPtr<UWorld>& _outLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetFinalStageIdList(UObject* WorldContextObject, TArray<EStageId>& _outIds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDifficultyColor(UObject* WorldContextObject, EStageId _inId, FLinearColor& _outColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCourseEditSortNo(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCompStageProgress(UObject* WorldContextObject, ECompStageId _inId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ECompStageId GetCompStageId(UObject* WorldContextObject, EStageId _inId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetChunkId(UObject* WorldContextObject, EStageId _inId);
    
};

