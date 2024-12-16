// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/GzKeyboardFinishedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGzKeyboardFinishedDelegate() {}
// Cross Module References
	GZKEYBOARDMODULE_API UFunction* Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
	GZKEYBOARDMODULE_API UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics
	{
		struct _Script_GzKeyboardModule_eventGzKeyboardFinished_Parms
		{
			EGzKeyboardResult _result;
			FString _inputString;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__result = { "_result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GzKeyboardModule_eventGzKeyboardFinished_Parms, _result), Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__inputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__inputString = { "_inputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GzKeyboardModule_eventGzKeyboardFinished_Parms, _inputString), METADATA_PARAMS(Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__inputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__inputString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::NewProp__inputString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardFinishedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GzKeyboardModule, nullptr, "GzKeyboardFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_GzKeyboardModule_eventGzKeyboardFinished_Parms), Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
