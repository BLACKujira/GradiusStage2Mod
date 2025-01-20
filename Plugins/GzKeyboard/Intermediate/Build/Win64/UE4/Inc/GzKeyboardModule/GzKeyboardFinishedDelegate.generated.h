// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGzKeyboardResult : uint8;
#ifdef GZKEYBOARDMODULE_GzKeyboardFinishedDelegate_generated_h
#error "GzKeyboardFinishedDelegate.generated.h already included, missing '#pragma once' in GzKeyboardFinishedDelegate.h"
#endif
#define GZKEYBOARDMODULE_GzKeyboardFinishedDelegate_generated_h

#define TestRTF2Stage_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFinishedDelegate_h_6_DELEGATE \
struct _Script_GzKeyboardModule_eventGzKeyboardFinished_Parms \
{ \
	EGzKeyboardResult _result; \
	FString _inputString; \
}; \
static inline void FGzKeyboardFinished_DelegateWrapper(const FMulticastScriptDelegate& GzKeyboardFinished, EGzKeyboardResult _result, const FString& _inputString) \
{ \
	_Script_GzKeyboardModule_eventGzKeyboardFinished_Parms Parms; \
	Parms._result=_result; \
	Parms._inputString=_inputString; \
	GzKeyboardFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestRTF2Stage_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFinishedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
