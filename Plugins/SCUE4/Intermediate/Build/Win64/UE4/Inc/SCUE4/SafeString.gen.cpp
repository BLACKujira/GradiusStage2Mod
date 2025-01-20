// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SafeString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeString() {}
// Cross Module References
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeString();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
// End Cross Module References
class UScriptStruct* FSafeString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeString, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeString"), sizeof(FSafeString), Get_Z_Construct_UScriptStruct_FSafeString_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeString>()
{
	return FSafeString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeString(FSafeString::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeString"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeString
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeString()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeString")),new UScriptStruct::TCppStructOps<FSafeString>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeString;
	struct Z_Construct_UScriptStruct_FSafeString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BASE_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BASE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SafeString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeString" },
		{ "ModuleRelativePath", "Public/SafeString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_BASE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeString" },
		{ "ModuleRelativePath", "Public/SafeString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_BASE = { "BASE", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, BASE), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_BASE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_BASE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeString" },
		{ "ModuleRelativePath", "Public/SafeString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeString" },
		{ "ModuleRelativePath", "Public/SafeString.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_BASE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeString",
		sizeof(FSafeString),
		alignof(FSafeString),
		Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeString"), sizeof(FSafeString), Get_Z_Construct_UScriptStruct_FSafeString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash() { return 3922433829U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
