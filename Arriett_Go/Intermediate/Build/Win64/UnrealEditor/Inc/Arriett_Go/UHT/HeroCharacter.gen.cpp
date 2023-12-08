// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Characters/HeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AHeroCharacter();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroCharacter);
	UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
	{
		return AHeroCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHeroCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/HeroCharacter.h" },
		{ "ModuleRelativePath", "Characters/HeroCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroCharacter_Statics::ClassParams = {
		&AHeroCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHeroCharacter()
	{
		if (!Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton, Z_Construct_UClass_AHeroCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AHeroCharacter>()
	{
		return AHeroCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
	AHeroCharacter::~AHeroCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_HeroCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_HeroCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeroCharacter, AHeroCharacter::StaticClass, TEXT("AHeroCharacter"), &Z_Registration_Info_UClass_AHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroCharacter), 434453497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_HeroCharacter_h_3529661132(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_HeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_HeroCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
