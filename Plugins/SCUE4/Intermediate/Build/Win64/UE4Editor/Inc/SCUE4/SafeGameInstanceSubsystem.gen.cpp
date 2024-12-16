// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SafeGameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeGameInstanceSubsystem() {}
// Cross Module References
	SCUE4_API UClass* Z_Construct_UClass_USafeGameInstanceSubsystem_NoRegister();
	SCUE4_API UClass* Z_Construct_UClass_USafeGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
// End Cross Module References
	DEFINE_FUNCTION(USafeGameInstanceSubsystem::execHideGameGuardConsole)
	{
		P_GET_UBOOL(Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideGameGuardConsole(Z_Param_Set);
		P_NATIVE_END;
	}
	void USafeGameInstanceSubsystem::StaticRegisterNativesUSafeGameInstanceSubsystem()
	{
		UClass* Class = USafeGameInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideGameGuardConsole", &USafeGameInstanceSubsystem::execHideGameGuardConsole },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics
	{
		struct SafeGameInstanceSubsystem_eventHideGameGuardConsole_Parms
		{
			bool Set;
		};
		static void NewProp_Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Set;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::NewProp_Set_SetBit(void* Obj)
	{
		((SafeGameInstanceSubsystem_eventHideGameGuardConsole_Parms*)Obj)->Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeGameInstanceSubsystem_eventHideGameGuardConsole_Parms), &Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::NewProp_Set_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SafeGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeGameInstanceSubsystem, nullptr, "HideGameGuardConsole", nullptr, nullptr, sizeof(SafeGameInstanceSubsystem_eventHideGameGuardConsole_Parms), Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USafeGameInstanceSubsystem_NoRegister()
	{
		return USafeGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USafeGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideGameGuard_MetaData[];
#endif
		static void NewProp_HideGameGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideGameGuard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowDebugging_MetaData[];
#endif
		static void NewProp_AllowDebugging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowDebugging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScannerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ScannerInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USafeGameInstanceSubsystem_HideGameGuardConsole, "HideGameGuardConsole" }, // 2625840451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SafeGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SafeGameInstanceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeGameInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/SafeGameInstanceSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard_SetBit(void* Obj)
	{
		((USafeGameInstanceSubsystem*)Obj)->HideGameGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard = { "HideGameGuard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeGameInstanceSubsystem), &Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeGameInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/SafeGameInstanceSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging_SetBit(void* Obj)
	{
		((USafeGameInstanceSubsystem*)Obj)->AllowDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging = { "AllowDebugging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeGameInstanceSubsystem), &Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_ScannerInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeGameInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/SafeGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_ScannerInterval = { "ScannerInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeGameInstanceSubsystem, ScannerInterval), METADATA_PARAMS(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_ScannerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_ScannerInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_HideGameGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_AllowDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::NewProp_ScannerInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeGameInstanceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::ClassParams = {
		&USafeGameInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeGameInstanceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USafeGameInstanceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USafeGameInstanceSubsystem, 3596697427);
	template<> SCUE4_API UClass* StaticClass<USafeGameInstanceSubsystem>()
	{
		return USafeGameInstanceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeGameInstanceSubsystem(Z_Construct_UClass_USafeGameInstanceSubsystem, &USafeGameInstanceSubsystem::StaticClass, TEXT("/Script/SCUE4"), TEXT("USafeGameInstanceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeGameInstanceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
