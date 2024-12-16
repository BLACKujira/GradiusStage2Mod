// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSInputRemapper/Public/PSInputWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSInputWrapper() {}
// Cross Module References
	PSINPUTREMAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FPSInputWrapper();
	UPackage* Z_Construct_UPackage__Script_PSInputRemapper();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FPSInputWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PSINPUTREMAPPER_API uint32 Get_Z_Construct_UScriptStruct_FPSInputWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSInputWrapper, Z_Construct_UPackage__Script_PSInputRemapper(), TEXT("PSInputWrapper"), sizeof(FPSInputWrapper), Get_Z_Construct_UScriptStruct_FPSInputWrapper_Hash());
	}
	return Singleton;
}
template<> PSINPUTREMAPPER_API UScriptStruct* StaticStruct<FPSInputWrapper>()
{
	return FPSInputWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPSInputWrapper(FPSInputWrapper::StaticStruct, TEXT("/Script/PSInputRemapper"), TEXT("PSInputWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_PSInputRemapper_StaticRegisterNativesFPSInputWrapper
{
	FScriptStruct_PSInputRemapper_StaticRegisterNativesFPSInputWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PSInputWrapper")),new UScriptStruct::TCppStructOps<FPSInputWrapper>);
	}
} ScriptStruct_PSInputRemapper_StaticRegisterNativesFPSInputWrapper;
	struct Z_Construct_UScriptStruct_FPSInputWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BindName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyAsString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyAsString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSInputWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PSInputWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSInputWrapper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_BindName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSInputWrapper" },
		{ "ModuleRelativePath", "Public/PSInputWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_BindName = { "BindName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSInputWrapper, BindName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_BindName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_BindName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSInputWrapper" },
		{ "ModuleRelativePath", "Public/PSInputWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSInputWrapper, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_KeyAsString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PSInputWrapper" },
		{ "ModuleRelativePath", "Public/PSInputWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_KeyAsString = { "KeyAsString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSInputWrapper, KeyAsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_KeyAsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_KeyAsString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSInputWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_BindName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSInputWrapper_Statics::NewProp_KeyAsString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSInputWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PSInputRemapper,
		nullptr,
		&NewStructOps,
		"PSInputWrapper",
		sizeof(FPSInputWrapper),
		alignof(FPSInputWrapper),
		Z_Construct_UScriptStruct_FPSInputWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSInputWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPSInputWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPSInputWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PSInputRemapper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PSInputWrapper"), sizeof(FPSInputWrapper), Get_Z_Construct_UScriptStruct_FPSInputWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPSInputWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPSInputWrapper_Hash() { return 3676605075U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
