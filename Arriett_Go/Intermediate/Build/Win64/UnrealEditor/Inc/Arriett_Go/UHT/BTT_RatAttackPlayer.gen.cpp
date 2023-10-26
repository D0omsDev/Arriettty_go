// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/AI/Rat/BTT_RatAttackPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_RatAttackPlayer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTT_RatAttackPlayer();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTT_RatAttackPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UBTT_RatAttackPlayer::StaticRegisterNativesUBTT_RatAttackPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_RatAttackPlayer);
	UClass* Z_Construct_UClass_UBTT_RatAttackPlayer_NoRegister()
	{
		return UBTT_RatAttackPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_RatAttackPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Rat/BTT_RatAttackPlayer.h" },
		{ "ModuleRelativePath", "AI/Rat/BTT_RatAttackPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_RatAttackPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::ClassParams = {
		&UBTT_RatAttackPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTT_RatAttackPlayer()
	{
		if (!Z_Registration_Info_UClass_UBTT_RatAttackPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_RatAttackPlayer.OuterSingleton, Z_Construct_UClass_UBTT_RatAttackPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_RatAttackPlayer.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UBTT_RatAttackPlayer>()
	{
		return UBTT_RatAttackPlayer::StaticClass();
	}
	UBTT_RatAttackPlayer::UBTT_RatAttackPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_RatAttackPlayer);
	UBTT_RatAttackPlayer::~UBTT_RatAttackPlayer() {}
	struct Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_Rat_BTT_RatAttackPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_Rat_BTT_RatAttackPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_RatAttackPlayer, UBTT_RatAttackPlayer::StaticClass, TEXT("UBTT_RatAttackPlayer"), &Z_Registration_Info_UClass_UBTT_RatAttackPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_RatAttackPlayer), 2143306060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_Rat_BTT_RatAttackPlayer_h_658502568(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_Rat_BTT_RatAttackPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_Rat_BTT_RatAttackPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
