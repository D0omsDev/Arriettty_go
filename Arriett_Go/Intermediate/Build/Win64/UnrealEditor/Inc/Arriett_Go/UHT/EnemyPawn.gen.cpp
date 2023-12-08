// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/EnemyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AEnemyPawn::StaticRegisterNativesAEnemyPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPawn);
	UClass* Z_Construct_UClass_AEnemyPawn_NoRegister()
	{
		return AEnemyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGamePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyPawn.h" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawn_Statics::ClassParams = {
		&AEnemyPawn::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyPawn()
	{
		if (!Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton, Z_Construct_UClass_AEnemyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AEnemyPawn>()
	{
		return AEnemyPawn::StaticClass();
	}
	AEnemyPawn::AEnemyPawn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawn);
	AEnemyPawn::~AEnemyPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EnemyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EnemyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPawn, AEnemyPawn::StaticClass, TEXT("AEnemyPawn"), &Z_Registration_Info_UClass_AEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPawn), 575695499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EnemyPawn_h_4242262889(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_EnemyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
