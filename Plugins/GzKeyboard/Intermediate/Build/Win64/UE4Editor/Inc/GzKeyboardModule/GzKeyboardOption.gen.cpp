// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/GzKeyboardOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGzKeyboardOption() {}
// Cross Module References
	GZKEYBOARDMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGzKeyboardOption();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
// End Cross Module References
class UScriptStruct* FGzKeyboardOption::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GZKEYBOARDMODULE_API uint32 Get_Z_Construct_UScriptStruct_FGzKeyboardOption_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGzKeyboardOption, Z_Construct_UPackage__Script_GzKeyboardModule(), TEXT("GzKeyboardOption"), sizeof(FGzKeyboardOption), Get_Z_Construct_UScriptStruct_FGzKeyboardOption_Hash());
	}
	return Singleton;
}
template<> GZKEYBOARDMODULE_API UScriptStruct* StaticStruct<FGzKeyboardOption>()
{
	return FGzKeyboardOption::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGzKeyboardOption(FGzKeyboardOption::StaticStruct, TEXT("/Script/GzKeyboardModule"), TEXT("GzKeyboardOption"), false, nullptr, nullptr);
static struct FScriptStruct_GzKeyboardModule_StaticRegisterNativesFGzKeyboardOption
{
	FScriptStruct_GzKeyboardModule_StaticRegisterNativesFGzKeyboardOption()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GzKeyboardOption")),new UScriptStruct::TCppStructOps<FGzKeyboardOption>);
	}
} ScriptStruct_GzKeyboardModule_StaticRegisterNativesFGzKeyboardOption;
	struct Z_Construct_UScriptStruct_FGzKeyboardOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiLine_MetaData[];
#endif
		static void NewProp_MultiLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GzKeyboardOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGzKeyboardOption>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GzKeyboardOption" },
		{ "ModuleRelativePath", "Public/GzKeyboardOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine_SetBit(void* Obj)
	{
		((FGzKeyboardOption*)Obj)->MultiLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine = { "MultiLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGzKeyboardOption), &Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::NewProp_MultiLine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GzKeyboardModule,
		nullptr,
		&NewStructOps,
		"GzKeyboardOption",
		sizeof(FGzKeyboardOption),
		alignof(FGzKeyboardOption),
		Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGzKeyboardOption()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGzKeyboardOption_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GzKeyboardModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GzKeyboardOption"), sizeof(FGzKeyboardOption), Get_Z_Construct_UScriptStruct_FGzKeyboardOption_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGzKeyboardOption_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGzKeyboardOption_Hash() { return 394079357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
