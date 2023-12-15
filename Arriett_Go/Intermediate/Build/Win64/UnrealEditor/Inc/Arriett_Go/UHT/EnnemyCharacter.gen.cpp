// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Characters/EnnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnnemyCharacter() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnnemyCharacter();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnnemyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AEnnemyCharacter::StaticRegisterNativesAEnnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnnemyCharacter);
	UClass* Z_Construct_UClass_AEnnemyCharacter_NoRegister()
	{
		return AEnnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnnemyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnnemyCharacter.h" },
		{ "ModuleRelativePath", "Characters/EnnemyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnnemyCharacter_Statics::ClassParams = {
		&AEnnemyCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnnemyCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AEnnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnnemyCharacter.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AEnnemyCharacter>()
	{
		return AEnnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnnemyCharacter);
	AEnnemyCharacter::~AEnnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_EnnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_EnnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnnemyCharacter, AEnnemyCharacter::StaticClass, TEXT("AEnnemyCharacter"), &Z_Registration_Info_UClass_AEnnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnnemyCharacter), 592537789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_EnnemyCharacter_h_3805448639(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_EnnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Characters_EnnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
