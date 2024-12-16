// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/GzKeyboardFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGzKeyboardFunctionLibrary() {}
// Cross Module References
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardFunctionLibrary_NoRegister();
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
	GZKEYBOARDMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGzKeyboardOption();
// End Cross Module References
	DEFINE_FUNCTION(UGzKeyboardFunctionLibrary::execGetInputOption)
	{
		P_GET_STRUCT_REF(FGzKeyboardOption,Z_Param_Out__option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGzKeyboardFunctionLibrary::GetInputOption(Z_Param_Out__option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardFunctionLibrary::execStringConvertToHiragana)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__inString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGzKeyboardFunctionLibrary::StringConvertToHiragana(Z_Param__inString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardFunctionLibrary::execStringConvertToKatakana)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__inString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGzKeyboardFunctionLibrary::StringConvertToKatakana(Z_Param__inString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardFunctionLibrary::execStringMaskByKatakana)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__inString);
		P_GET_PROPERTY(FStrProperty,Z_Param__targetString);
		P_GET_PROPERTY(FStrProperty,Z_Param__maskString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGzKeyboardFunctionLibrary::StringMaskByKatakana(Z_Param__inString,Z_Param__targetString,Z_Param__maskString);
		P_NATIVE_END;
	}
	void UGzKeyboardFunctionLibrary::StaticRegisterNativesUGzKeyboardFunctionLibrary()
	{
		UClass* Class = UGzKeyboardFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputOption", &UGzKeyboardFunctionLibrary::execGetInputOption },
			{ "StringConvertToHiragana", &UGzKeyboardFunctionLibrary::execStringConvertToHiragana },
			{ "StringConvertToKatakana", &UGzKeyboardFunctionLibrary::execStringConvertToKatakana },
			{ "StringMaskByKatakana", &UGzKeyboardFunctionLibrary::execStringMaskByKatakana },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics
	{
		struct GzKeyboardFunctionLibrary_eventGetInputOption_Parms
		{
			FGzKeyboardOption _option;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__option;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp__option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp__option = { "_option", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventGetInputOption_Parms, _option), Z_Construct_UScriptStruct_FGzKeyboardOption, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp__option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp__option_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventGetInputOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp__option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardFunctionLibrary, nullptr, "GetInputOption", nullptr, nullptr, sizeof(GzKeyboardFunctionLibrary_eventGetInputOption_Parms), Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics
	{
		struct GzKeyboardFunctionLibrary_eventStringConvertToHiragana_Parms
		{
			FString _inString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp__inString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp__inString = { "_inString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringConvertToHiragana_Parms, _inString), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp__inString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp__inString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringConvertToHiragana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp__inString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardFunctionLibrary, nullptr, "StringConvertToHiragana", nullptr, nullptr, sizeof(GzKeyboardFunctionLibrary_eventStringConvertToHiragana_Parms), Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics
	{
		struct GzKeyboardFunctionLibrary_eventStringConvertToKatakana_Parms
		{
			FString _inString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp__inString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp__inString = { "_inString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringConvertToKatakana_Parms, _inString), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp__inString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp__inString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringConvertToKatakana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp__inString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardFunctionLibrary, nullptr, "StringConvertToKatakana", nullptr, nullptr, sizeof(GzKeyboardFunctionLibrary_eventStringConvertToKatakana_Parms), Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics
	{
		struct GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms
		{
			FString _inString;
			FString _targetString;
			FString _maskString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__targetString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maskString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__maskString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__inString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__inString = { "_inString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms, _inString), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__inString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__inString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__targetString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__targetString = { "_targetString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms, _targetString), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__targetString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__targetString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__maskString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__maskString = { "_maskString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms, _maskString), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__maskString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__maskString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__inString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__targetString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp__maskString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardFunctionLibrary, nullptr, "StringMaskByKatakana", nullptr, nullptr, sizeof(GzKeyboardFunctionLibrary_eventStringMaskByKatakana_Parms), Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGzKeyboardFunctionLibrary_NoRegister()
	{
		return UGzKeyboardFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GzKeyboardModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGzKeyboardFunctionLibrary_GetInputOption, "GetInputOption" }, // 3729739991
		{ &Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToHiragana, "StringConvertToHiragana" }, // 737261575
		{ &Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringConvertToKatakana, "StringConvertToKatakana" }, // 3749683848
		{ &Z_Construct_UFunction_UGzKeyboardFunctionLibrary_StringMaskByKatakana, "StringMaskByKatakana" }, // 75001382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GzKeyboardFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GzKeyboardFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGzKeyboardFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::ClassParams = {
		&UGzKeyboardFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGzKeyboardFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGzKeyboardFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGzKeyboardFunctionLibrary, 4293079627);
	template<> GZKEYBOARDMODULE_API UClass* StaticClass<UGzKeyboardFunctionLibrary>()
	{
		return UGzKeyboardFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGzKeyboardFunctionLibrary(Z_Construct_UClass_UGzKeyboardFunctionLibrary, &UGzKeyboardFunctionLibrary::StaticClass, TEXT("/Script/GzKeyboardModule"), TEXT("UGzKeyboardFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGzKeyboardFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
