// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSInputRemapper/Public/PSGamepadFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSGamepadFunctionLibrary() {}
// Cross Module References
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UPSGamepadFunctionLibrary_NoRegister();
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UPSGamepadFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PSInputRemapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPSGamepadFunctionLibrary::execDisableGamepadCursor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPSGamepadFunctionLibrary::DisableGamepadCursor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPSGamepadFunctionLibrary::execEnableGamepadCursor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPSGamepadFunctionLibrary::EnableGamepadCursor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UPSGamepadFunctionLibrary::StaticRegisterNativesUPSGamepadFunctionLibrary()
	{
		UClass* Class = UPSGamepadFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableGamepadCursor", &UPSGamepadFunctionLibrary::execDisableGamepadCursor },
			{ "EnableGamepadCursor", &UPSGamepadFunctionLibrary::execEnableGamepadCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics
	{
		struct PSGamepadFunctionLibrary_eventDisableGamepadCursor_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSGamepadFunctionLibrary_eventDisableGamepadCursor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PSGamepadFunctionLibrary_eventDisableGamepadCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PSGamepadFunctionLibrary_eventDisableGamepadCursor_Parms), &Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSGamepadFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSGamepadFunctionLibrary, nullptr, "DisableGamepadCursor", nullptr, nullptr, sizeof(PSGamepadFunctionLibrary_eventDisableGamepadCursor_Parms), Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics
	{
		struct PSGamepadFunctionLibrary_eventEnableGamepadCursor_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PSGamepadFunctionLibrary_eventEnableGamepadCursor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PSGamepadFunctionLibrary_eventEnableGamepadCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PSGamepadFunctionLibrary_eventEnableGamepadCursor_Parms), &Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PSGamepadFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPSGamepadFunctionLibrary, nullptr, "EnableGamepadCursor", nullptr, nullptr, sizeof(PSGamepadFunctionLibrary_eventEnableGamepadCursor_Parms), Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPSGamepadFunctionLibrary_NoRegister()
	{
		return UPSGamepadFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PSInputRemapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPSGamepadFunctionLibrary_DisableGamepadCursor, "DisableGamepadCursor" }, // 553065011
		{ &Z_Construct_UFunction_UPSGamepadFunctionLibrary_EnableGamepadCursor, "EnableGamepadCursor" }, // 467522197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PSGamepadFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PSGamepadFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSGamepadFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::ClassParams = {
		&UPSGamepadFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPSGamepadFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPSGamepadFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPSGamepadFunctionLibrary, 3574068946);
	template<> PSINPUTREMAPPER_API UClass* StaticClass<UPSGamepadFunctionLibrary>()
	{
		return UPSGamepadFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPSGamepadFunctionLibrary(Z_Construct_UClass_UPSGamepadFunctionLibrary, &UPSGamepadFunctionLibrary::StaticClass, TEXT("/Script/PSInputRemapper"), TEXT("UPSGamepadFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPSGamepadFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
