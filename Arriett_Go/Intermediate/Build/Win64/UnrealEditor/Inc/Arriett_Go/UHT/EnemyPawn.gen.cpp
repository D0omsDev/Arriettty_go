// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Public/Pawns/Enemies/EnemyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/Enemies/EnemyPawn.h" },
		{ "ModuleRelativePath", "Public/Pawns/Enemies/EnemyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_AttackSound_MetaData[] = {
		{ "Category", "SoundEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Enemies/EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_AttackSound = { "AttackSound", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, AttackSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_AttackSound_MetaData), Z_Construct_UClass_AEnemyPawn_Statics::NewProp_AttackSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_AttackSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawn_Statics::ClassParams = {
		&AEnemyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawn);
	AEnemyPawn::~AEnemyPawn() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Enemies_EnemyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Enemies_EnemyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPawn, AEnemyPawn::StaticClass, TEXT("AEnemyPawn"), &Z_Registration_Info_UClass_AEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPawn), 3867579832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Enemies_EnemyPawn_h_2345585471(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Enemies_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Enemies_EnemyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
