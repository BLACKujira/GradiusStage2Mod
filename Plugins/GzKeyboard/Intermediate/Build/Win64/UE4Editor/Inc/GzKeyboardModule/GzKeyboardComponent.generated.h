// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGzKeyboardResult : uint8;
enum class EGzKeyboardType : uint8;
#ifdef GZKEYBOARDMODULE_GzKeyboardComponent_generated_h
#error "GzKeyboardComponent.generated.h already included, missing '#pragma once' in GzKeyboardComponent.h"
#endif
#define GZKEYBOARDMODULE_GzKeyboardComponent_generated_h

#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_SPARSE_DATA
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetResult); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execstart);


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetResult); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execstart);


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGzKeyboardComponent(); \
	friend struct Z_Construct_UClass_UGzKeyboardComponent_Statics; \
public: \
	DECLARE_CLASS(UGzKeyboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GzKeyboardModule"), NO_API) \
	DECLARE_SERIALIZER(UGzKeyboardComponent)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGzKeyboardComponent(); \
	friend struct Z_Construct_UClass_UGzKeyboardComponent_Statics; \
public: \
	DECLARE_CLASS(UGzKeyboardComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GzKeyboardModule"), NO_API) \
	DECLARE_SERIALIZER(UGzKeyboardComponent)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGzKeyboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGzKeyboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGzKeyboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGzKeyboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGzKeyboardComponent(UGzKeyboardComponent&&); \
	NO_API UGzKeyboardComponent(const UGzKeyboardComponent&); \
public:


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGzKeyboardComponent(UGzKeyboardComponent&&); \
	NO_API UGzKeyboardComponent(const UGzKeyboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGzKeyboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGzKeyboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGzKeyboardComponent)


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_9_PROLOG
#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_SPARSE_DATA \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_RPC_WRAPPERS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_INCLASS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_SPARSE_DATA \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_INCLASS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GZKEYBOARDMODULE_API UClass* StaticClass<class UGzKeyboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTypeFinal2_Plugins_GzKeyboard_Source_GzKeyboardModule_Public_GzKeyboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
