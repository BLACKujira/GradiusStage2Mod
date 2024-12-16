// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPSInputWrapper;
enum class EPSInputType : uint8;
struct FKey;
#ifdef PSINPUTREMAPPER_PSInputFunctionLibrary_generated_h
#error "PSInputFunctionLibrary.generated.h already included, missing '#pragma once' in PSInputFunctionLibrary.h"
#endif
#define PSINPUTREMAPPER_PSInputFunctionLibrary_generated_h

#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_SPARSE_DATA
#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindCurrentActionMapping); \
	DECLARE_FUNCTION(execFindCurrentActionMappings); \
	DECLARE_FUNCTION(execGetAllActionMappingName); \
	DECLARE_FUNCTION(execUpdateActionMapping);


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindCurrentActionMapping); \
	DECLARE_FUNCTION(execFindCurrentActionMappings); \
	DECLARE_FUNCTION(execGetAllActionMappingName); \
	DECLARE_FUNCTION(execUpdateActionMapping);


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPSInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPSInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPSInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSInputRemapper"), NO_API) \
	DECLARE_SERIALIZER(UPSInputFunctionLibrary)


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPSInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPSInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPSInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSInputRemapper"), NO_API) \
	DECLARE_SERIALIZER(UPSInputFunctionLibrary)


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPSInputFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPSInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPSInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPSInputFunctionLibrary(UPSInputFunctionLibrary&&); \
	NO_API UPSInputFunctionLibrary(const UPSInputFunctionLibrary&); \
public:


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPSInputFunctionLibrary(UPSInputFunctionLibrary&&); \
	NO_API UPSInputFunctionLibrary(const UPSInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPSInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSInputFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPSInputFunctionLibrary)


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_9_PROLOG
#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_SPARSE_DATA \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_RPC_WRAPPERS \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_INCLASS \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_SPARSE_DATA \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PSINPUTREMAPPER_API UClass* StaticClass<class UPSInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTypeFinal2_Plugins_PSInputRemapper_Source_PSInputRemapper_Public_PSInputFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
