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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrapMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrapMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeShape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConeShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp_TrapMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BearTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp_TrapMesh = { "TrapMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABearTrap, TrapMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp_TrapMesh_MetaData), Z_Construct_UClass_ABearTrap_Statics::NewProp_TrapMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp_ConeShape_MetaData[] = {
		{ "ModuleRelativePath", "BearTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp_ConeShape = { "ConeShape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABearTrap, ConeShape), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp_ConeShape_MetaData), Z_Construct_UClass_ABearTrap_Statics::NewProp_ConeShape_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABearTrap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp_TrapMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp_ConeShape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearTrap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearTrap_Statics::ClassParams = {
		&ABearTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABearTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams), Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo[] = {
		{ ETrapState_StaticEnum, TEXT("ETrapState"), &Z_Registration_Info_UEnum_ETrapState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2080863586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABearTrap, ABearTrap::StaticClass, TEXT("ABearTrap"), &Z_Registration_Info_UClass_ABearTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearTrap), 720323921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_3230523856(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_BearTrap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
