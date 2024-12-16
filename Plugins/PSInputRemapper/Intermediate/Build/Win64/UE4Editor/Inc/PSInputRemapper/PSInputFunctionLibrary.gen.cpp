// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSInputRemapper/Public/PSInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSInputFunctionLibrary() {}
// Cross Module References
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UPSInputFunctionLibrary_NoRegister();
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UPSInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PSInputRemapper();
	PSINPUTREMAPPER_API UScriptStruct* Z_Construct_UScriptStruct_FPSInputWrapper();
	PSINPUTREMAPPER_API UEnum* Z_Construct_UEnum_PSInputRemapper_EPSInputType();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(UPSInputFunctionLibrary::execFindCurrentActionMapping)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
		P_GET_STRUCT_REF(FPSInputWrapper,Z_Param_Out_Input);
		P_GET_ENUM(EPSInputType,Z_Param_InputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPSInputFunctionLibrary::FindCurrentActionMapping(Z_Param_ActionName,Z_Param_Out_Input,EPSInputType(Z_Param_InputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPSInputFunctionLibrary::execFindCurrentActionMappings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
		P_GET_TARRAY_REF(FPSInputWrapper,Z_Param_Out_InputArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPSInputFunctionLibrary::FindCurrentActionMappings(Z_Param_ActionName,Z_Param_Out_InputArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPSInputFunctionLibrary::execGetAllActionMappingName)
	{
		P_GET_TARRAY_REF(FPSInputWrapper,Z_Param_Out_InputArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPSInputFunctionLibrary::GetAllActionMappingName(Z_Param_Out_InputArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPSInputFunctionLibrary::execUpdateActionMapping)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
		P_GET_STRUCT(FKey,Z_Param_NewInputKey);
		P_GET_ENUM(EPSInputType,Z_Param_InputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPSInputFunctionLibrary::UpdateActionMapping(Z_Param_ActionName,Z_Param_NewInputKey,EPSInputType(Z_Param_InputType));
		P_NATIVE_END;
	}
	void UPSInputFunctionLibrary::StaticRegisterNativesUPSInputFunctionLibrary()
	{
		UClass* Class = UPSInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindCurrentActionMapping", &UPSInputFunctionLibrary::execFindCurrentActionMapping },
			{ "FindCurrentActionMappings", &UPSInputFunctionLibrary::execFindCurrentActionMappings },
			{ "GetAllActionMappingName", &UPSInputFunctionLibrary::execGetAllActionMappingName },
			{ "UpdateActionMapping", &UPSInputFunctionLibrary::execUpdateActionMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics
	{
		struct PSInputFunctionLibrary_eventFindCurrentActionMapping_Parms
		{
			FString ActionName;
			FPSInputWrapper Input;
			EPSInputType InputType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventFindCurrentActionMapping_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventFindCurrentActionMapping_Parms, Input), Z_Construct_UScriptStruct_FPSInputWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventFindCurrentActionMapping_Parms, InputType), Z_Construct_UEnum_PSInputRemapper_EPSInputType, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::NewProp_InputType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSInputFunctionLibrary, nullptr, "FindCurrentActionMapping", nullptr, nullptr, sizeof(PSInputFunctionLibrary_eventFindCurrentActionMapping_Parms), Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics
	{
		struct PSInputFunctionLibrary_eventFindCurrentActionMappings_Parms
		{
			FString ActionName;
			TArray<FPSInputWrapper> InputArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventFindCurrentActionMappings_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_InputArray_Inner = { "InputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPSInputWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_InputArray = { "InputArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventFindCurrentActionMappings_Parms, InputArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_InputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::NewProp_InputArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSInputFunctionLibrary, nullptr, "FindCurrentActionMappings", nullptr, nullptr, sizeof(PSInputFunctionLibrary_eventFindCurrentActionMappings_Parms), Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics
	{
		struct PSInputFunctionLibrary_eventGetAllActionMappingName_Parms
		{
			TArray<FPSInputWrapper> InputArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::NewProp_InputArray_Inner = { "InputArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPSInputWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::NewProp_InputArray = { "InputArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventGetAllActionMappingName_Parms, InputArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::NewProp_InputArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::NewProp_InputArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSInputFunctionLibrary, nullptr, "GetAllActionMappingName", nullptr, nullptr, sizeof(PSInputFunctionLibrary_eventGetAllActionMappingName_Parms), Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics
	{
		struct PSInputFunctionLibrary_eventUpdateActionMapping_Parms
		{
			FString ActionName;
			FKey NewInputKey;
			EPSInputType InputType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventUpdateActionMapping_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_NewInputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_NewInputKey = { "NewInputKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventUpdateActionMapping_Parms, NewInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_NewInputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_NewInputKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSInputFunctionLibrary_eventUpdateActionMapping_Parms, InputType), Z_Construct_UEnum_PSInputRemapper_EPSInputType, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType_MetaData)) };
	void Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PSInputFunctionLibrary_eventUpdateActionMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PSInputFunctionLibrary_eventUpdateActionMapping_Parms), &Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_NewInputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSInputFunctionLibrary, nullptr, "UpdateActionMapping", nullptr, nullptr, sizeof(PSInputFunctionLibrary_eventUpdateActionMapping_Parms), Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPSInputFunctionLibrary_NoRegister()
	{
		return UPSInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPSInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPSInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PSInputRemapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPSInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMapping, "FindCurrentActionMapping" }, // 469389547
		{ &Z_Construct_UFunction_UPSInputFunctionLibrary_FindCurrentActionMappings, "FindCurrentActionMappings" }, // 3688858796
		{ &Z_Construct_UFunction_UPSInputFunctionLibrary_GetAllActionMappingName, "GetAllActionMappingName" }, // 514064657
		{ &Z_Construct_UFunction_UPSInputFunctionLibrary_UpdateActionMapping, "UpdateActionMapping" }, // 2498179108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PSInputFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PSInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPSInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPSInputFunctionLibrary_Statics::ClassParams = {
		&UPSInputFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPSInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPSInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPSInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPSInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPSInputFunctionLibrary, 3852556575);
	template<> PSINPUTREMAPPER_API UClass* StaticClass<UPSInputFunctionLibrary>()
	{
		return UPSInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPSInputFunctionLibrary(Z_Construct_UClass_UPSInputFunctionLibrary, &UPSInputFunctionLibrary::StaticClass, TEXT("/Script/PSInputRemapper"), TEXT("UPSInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPSInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
