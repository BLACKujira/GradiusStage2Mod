// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/GzKeyboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGzKeyboardComponent() {}
// Cross Module References
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardComponent_NoRegister();
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
	GZKEYBOARDMODULE_API UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult();
	GZKEYBOARDMODULE_API UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType();
	GZKEYBOARDMODULE_API UFunction* Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGzKeyboardComponent::execGetInputString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInputString(Z_Param_Out__outString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardComponent::execGetResult)
	{
		P_GET_ENUM_REF(EGzKeyboardResult,Z_Param_Out__outResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResult((EGzKeyboardResult&)(Z_Param_Out__outResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardComponent::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGzKeyboardComponent::execstart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__inUserIndex);
		P_GET_ENUM(EGzKeyboardType,Z_Param__inInputType);
		P_GET_PROPERTY(FIntProperty,Z_Param__inInputOptions);
		P_GET_PROPERTY(FIntProperty,Z_Param__inInputLength);
		P_GET_PROPERTY(FStrProperty,Z_Param__inTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param__inSubTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param__inPlaceHolder);
		P_GET_PROPERTY(FStrProperty,Z_Param__inInputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->start(Z_Param__inUserIndex,EGzKeyboardType(Z_Param__inInputType),Z_Param__inInputOptions,Z_Param__inInputLength,Z_Param__inTitle,Z_Param__inSubTitle,Z_Param__inPlaceHolder,Z_Param__inInputText);
		P_NATIVE_END;
	}
	void UGzKeyboardComponent::StaticRegisterNativesUGzKeyboardComponent()
	{
		UClass* Class = UGzKeyboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputString", &UGzKeyboardComponent::execGetInputString },
			{ "GetResult", &UGzKeyboardComponent::execGetResult },
			{ "IsRunning", &UGzKeyboardComponent::execIsRunning },
			{ "start", &UGzKeyboardComponent::execstart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics
	{
		struct GzKeyboardComponent_eventGetInputString_Parms
		{
			FString _outString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::NewProp__outString = { "_outString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventGetInputString_Parms, _outString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::NewProp__outString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardComponent, nullptr, "GetInputString", nullptr, nullptr, sizeof(GzKeyboardComponent_eventGetInputString_Parms), Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardComponent_GetInputString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardComponent_GetInputString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics
	{
		struct GzKeyboardComponent_eventGetResult_Parms
		{
			EGzKeyboardResult _outResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__outResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__outResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::NewProp__outResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventGetResult_Parms, _outResult), Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::NewProp__outResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::NewProp__outResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardComponent, nullptr, "GetResult", nullptr, nullptr, sizeof(GzKeyboardComponent_eventGetResult_Parms), Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardComponent_GetResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardComponent_GetResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics
	{
		struct GzKeyboardComponent_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GzKeyboardComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GzKeyboardComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardComponent, nullptr, "IsRunning", nullptr, nullptr, sizeof(GzKeyboardComponent_eventIsRunning_Parms), Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGzKeyboardComponent_start_Statics
	{
		struct GzKeyboardComponent_eventstart_Parms
		{
			int32 _inUserIndex;
			EGzKeyboardType _inInputType;
			int32 _inInputOptions;
			int32 _inInputLength;
			FString _inTitle;
			FString _inSubTitle;
			FString _inPlaceHolder;
			FString _inInputText;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__inInputType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__inInputType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inInputOptions;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inInputLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inSubTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inSubTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inPlaceHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inPlaceHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inInputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__inInputText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inUserIndex = { "_inUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputType = { "_inInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inInputType), Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputOptions = { "_inInputOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inInputOptions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputLength = { "_inInputLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inInputLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inTitle = { "_inTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inTitle), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inSubTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inSubTitle = { "_inSubTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inSubTitle), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inSubTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inPlaceHolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inPlaceHolder = { "_inPlaceHolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inPlaceHolder), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inPlaceHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inPlaceHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputText = { "_inInputText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GzKeyboardComponent_eventstart_Parms, _inInputText), METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputText_MetaData)) };
	void Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GzKeyboardComponent_eventstart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GzKeyboardComponent_eventstart_Parms), &Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inSubTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inPlaceHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp__inInputText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGzKeyboardComponent, nullptr, "start", nullptr, nullptr, sizeof(GzKeyboardComponent_eventstart_Parms), Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGzKeyboardComponent_start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGzKeyboardComponent_start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGzKeyboardComponent_NoRegister()
	{
		return UGzKeyboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGzKeyboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGzKeyboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GzKeyboardModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGzKeyboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGzKeyboardComponent_GetInputString, "GetInputString" }, // 26498384
		{ &Z_Construct_UFunction_UGzKeyboardComponent_GetResult, "GetResult" }, // 3908264674
		{ &Z_Construct_UFunction_UGzKeyboardComponent_IsRunning, "IsRunning" }, // 3476070497
		{ &Z_Construct_UFunction_UGzKeyboardComponent_start, "start" }, // 3627956215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGzKeyboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GzKeyboardComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGzKeyboardComponent_Statics::NewProp_OnFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GzKeyboardComponent" },
		{ "ModuleRelativePath", "Public/GzKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGzKeyboardComponent_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGzKeyboardComponent, OnFinished), Z_Construct_UDelegateFunction_GzKeyboardModule_GzKeyboardFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGzKeyboardComponent_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGzKeyboardComponent_Statics::NewProp_OnFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGzKeyboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGzKeyboardComponent_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGzKeyboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGzKeyboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGzKeyboardComponent_Statics::ClassParams = {
		&UGzKeyboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGzKeyboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGzKeyboardComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGzKeyboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGzKeyboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGzKeyboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGzKeyboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGzKeyboardComponent, 2569610820);
	template<> GZKEYBOARDMODULE_API UClass* StaticClass<UGzKeyboardComponent>()
	{
		return UGzKeyboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGzKeyboardComponent(Z_Construct_UClass_UGzKeyboardComponent, &UGzKeyboardComponent::StaticClass, TEXT("/Script/GzKeyboardModule"), TEXT("UGzKeyboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGzKeyboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
