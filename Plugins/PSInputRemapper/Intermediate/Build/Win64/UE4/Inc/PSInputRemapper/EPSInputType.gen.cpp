// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSInputRemapper/Public/EPSInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPSInputType() {}
// Cross Module References
	PSINPUTREMAPPER_API UEnum* Z_Construct_UEnum_PSInputRemapper_EPSInputType();
	UPackage* Z_Construct_UPackage__Script_PSInputRemapper();
// End Cross Module References
	static UEnum* EPSInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PSInputRemapper_EPSInputType, Z_Construct_UPackage__Script_PSInputRemapper(), TEXT("EPSInputType"));
		}
		return Singleton;
	}
	template<> PSINPUTREMAPPER_API UEnum* StaticEnum<EPSInputType>()
	{
		return EPSInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPSInputType(EPSInputType_StaticEnum, TEXT("/Script/PSInputRemapper"), TEXT("EPSInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PSInputRemapper_EPSInputType_Hash() { return 2841378077U; }
	UEnum* Z_Construct_UEnum_PSInputRemapper_EPSInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PSInputRemapper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPSInputType"), 0, Get_Z_Construct_UEnum_PSInputRemapper_EPSInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSInputType::Keyboard", (int64)EPSInputType::Keyboard },
				{ "EPSInputType::Mouse", (int64)EPSInputType::Mouse },
				{ "EPSInputType::Gamepad", (int64)EPSInputType::Gamepad },
				{ "EPSInputType::KeyboardOrMouse", (int64)EPSInputType::KeyboardOrMouse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gamepad.Name", "EPSInputType::Gamepad" },
				{ "Keyboard.Name", "EPSInputType::Keyboard" },
				{ "KeyboardOrMouse.Name", "EPSInputType::KeyboardOrMouse" },
				{ "ModuleRelativePath", "Public/EPSInputType.h" },
				{ "Mouse.Name", "EPSInputType::Mouse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PSInputRemapper,
				nullptr,
				"EPSInputType",
				"EPSInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
