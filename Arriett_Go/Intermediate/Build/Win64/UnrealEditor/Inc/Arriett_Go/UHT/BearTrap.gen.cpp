// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/BearTrap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrap() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_ABearTrap();
	ARRIETT_GO_API UClass* Z_Construct_UClass_ABearTrap_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEffectGridCase();
	ARRIETT_GO_API UEnum* Z_Construct_UEnum_Arriett_Go_ETrapState();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrapState;
	static UEnum* ETrapState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrapState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrapState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arriett_Go_ETrapState, (UObject*)Z_Construct_UPackage__Script_Arriett_Go(), TEXT("ETrapState"));
		}
		return Z_Registration_Info_UEnum_ETrapState.OuterSingleton;
	}
	template<> ARRIETT_GO_API UEnum* StaticEnum<ETrapState>()
	{
		return ETrapState_StaticEnum();
	}
	struct Z_Construct_UEnum_Arriett_Go_ETrapState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enumerators[] = {
		{ "ETrapState::Idle", (int64)ETrapState::Idle },
		{ "ETrapState::FirstTrigger", (int64)ETrapState::FirstTrigger },
		{ "ETrapState::Prepared", (int64)ETrapState::Prepared },
		{ "ETrapState::Active", (int64)ETrapState::Active },
		{ "ETrapState::Disabled", (int64)ETrapState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/**\n * \n */" },
		{ "Active.Name", "ETrapState::Active" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Disabled.Comment", "/**\n * \n */" },
		{ "Disabled.Name", "ETrapState::Disabled" },
		{ "FirstTrigger.Comment", "/**\n * \n */" },
		{ "FirstTrigger.Name", "ETrapState::FirstTrigger" },
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.Name", "ETrapState::Idle" },
		{ "ModuleRelativePath", "BearTrap.h" },
		{ "Prepared.Comment", "/**\n * \n */" },
		{ "Prepared.Name", "ETrapState::Prepared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arriett_Go,
		nullptr,
		"ETrapState",
		"ETrapState",
		Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arriett_Go_ETrapState()
	{
		if (!Z_Registration_Info_UEnum_ETrapState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrapState.InnerSingleton, Z_Construct_UEnum_Arriett_Go_ETrapState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrapState.InnerSingleton;
	}
	void ABearTrap::StaticRegisterNativesABearTrap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABearTrap);
	UClass* Z_Construct_UClass_ABearTrap_NoRegister()
	{
		return ABearTrap::StaticClass();
	}
	struct Z_Construct_UClass_ABearTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEffectGridCase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BearTrap.h" },
		{ "ModuleRelativePath", "BearTrap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearTrap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearTrap_Statics::ClassParams = {
		&ABearTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams), Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABearTrap()
	{
		if (!Z_Registration_Info_UClass_ABearTrap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABearTrap.OuterSingleton, Z_Construct_UClass_ABearTrap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABearTrap.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<ABearTrap>()
	{
		return ABearTrap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearTrap);
	ABearTrap::~ABearTrap() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo[] = {
		{ ETrapState_StaticEnum, TEXT("ETrapState"), &Z_Registration_Info_UEnum_ETrapState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2080863586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABearTrap, ABearTrap::StaticClass, TEXT("ABearTrap"), &Z_Registration_Info_UClass_ABearTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearTrap), 2639069449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_785621760(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
