// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGzKeyboardOption;
#ifdef GZKEYBOARDMODULE_GzKeyboardFunctionLibrary_generated_h
#error "GzKeyboardFunctionLibrary.generated.h already included, missing '#pragma once' in GzKeyboardFunctionLibrary.h"
#endif
#define GZKEYBOARDMODULE_GzKeyboardFunctionLibrary_generated_h

#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_SPARSE_DATA
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputOption); \
	DECLARE_FUNCTION(execStringConvertToHiragana); \
	DECLARE_FUNCTION(execStringConvertToKatakana); \
	DECLARE_FUNCTION(execStringMaskByKatakana);


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputOption); \
	DECLARE_FUNCTION(execStringConvertToHiragana); \
	DECLARE_FUNCTION(execStringConvertToKatakana); \
	DECLARE_FUNCTION(execStringMaskByKatakana);


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGzKeyboardFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGzKeyboardFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GzKeyboardModule"), NO_API) \
	DECLARE_SERIALIZER(UGzKeyboardFunctionLibrary)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUGzKeyboardFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGzKeyboardFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GzKeyboardModule"), NO_API) \
	DECLARE_SERIALIZER(UGzKeyboardFunctionLibrary)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGzKeyboardFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGzKeyboardFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGzKeyboardFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGzKeyboardFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGzKeyboardFunctionLibrary(UGzKeyboardFunctionLibrary&&); \
	NO_API UGzKeyboardFunctionLibrary(const UGzKeyboardFunctionLibrary&); \
public:


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGzKeyboardFunctionLibrary(UGzKeyboardFunctionLibrary&&); \
	NO_API UGzKeyboardFunctionLibrary(const UGzKeyboardFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGzKeyboardFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGzKeyboardFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGzKeyboardFunctionLibrary)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_7_PROLOG
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_SPARSE_DATA \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_RPC_WRAPPERS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_INCLASS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_SPARSE_DATA \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GZKEYBOARDMODULE_API UClass* StaticClass<class UGzKeyboardFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
