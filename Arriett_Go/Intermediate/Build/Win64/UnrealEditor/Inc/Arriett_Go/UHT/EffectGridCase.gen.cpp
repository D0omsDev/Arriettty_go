// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/EffectGridCase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectGridCase() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEffectGridCase();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEffectGridCase_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AEffectGridCase::StaticRegisterNativesAEffectGridCase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectGridCase);
	UClass* Z_Construct_UClass_AEffectGridCase_NoRegister()
	{
		return AEffectGridCase::StaticClass();
	}
	struct Z_Construct_UClass_AEffectGridCase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectGridCase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridCase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectGridCase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectGridCase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EffectGridCase.h" },
		{ "ModuleRelativePath", "EffectGridCase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectGridCase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectGridCase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectGridCase_Statics::ClassParams = {
		&AEffectGridCase::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectGridCase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffectGridCase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEffectGridCase()
	{
		if (!Z_Registration_Info_UClass_AEffectGridCase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectGridCase.OuterSingleton, Z_Construct_UClass_AEffectGridCase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEffectGridCase.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AEffectGridCase>()
	{
		return AEffectGridCase::StaticClass();
	}
	AEffectGridCase::AEffectGridCase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectGridCase);
	AEffectGridCase::~AEffectGridCase() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EffectGridCase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EffectGridCase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEffectGridCase, AEffectGridCase::StaticClass, TEXT("AEffectGridCase"), &Z_Registration_Info_UClass_AEffectGridCase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectGridCase), 3204059456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EffectGridCase_h_4290862880(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EffectGridCase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EffectGridCase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
