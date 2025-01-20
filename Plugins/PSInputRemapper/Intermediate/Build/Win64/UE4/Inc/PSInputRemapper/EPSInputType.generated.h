// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PSINPUTREMAPPER_EPSInputType_generated_h
#error "EPSInputType.generated.h already included, missing '#pragma once' in EPSInputType.h"
#endif
#define PSINPUTREMAPPER_EPSInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestRTF2Stage_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_EPSInputType_h


#define FOREACH_ENUM_EPSINPUTTYPE(op) \
	op(EPSInputType::Keyboard) \
	op(EPSInputType::Mouse) \
	op(EPSInputType::Gamepad) \
	op(EPSInputType::KeyboardOrMouse) 

enum class EPSInputType : uint8;
template<> PSINPUTREMAPPER_API UEnum* StaticEnum<EPSInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
