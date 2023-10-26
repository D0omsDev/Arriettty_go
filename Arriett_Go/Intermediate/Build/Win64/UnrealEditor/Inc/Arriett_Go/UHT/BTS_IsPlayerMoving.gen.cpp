// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/AI/BTS/BTS_IsPlayerMoving.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_IsPlayerMoving() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTS_IsPlayerMoving();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTS_IsPlayerMoving_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UBTS_IsPlayerMoving::StaticRegisterNativesUBTS_IsPlayerMoving()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_IsPlayerMoving);
	UClass* Z_Construct_UClass_UBTS_IsPlayerMoving_NoRegister()
	{
		return UBTS_IsPlayerMoving::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_IsPlayerMoving_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTS/BTS_IsPlayerMoving.h" },
		{ "ModuleRelativePath", "AI/BTS/BTS_IsPlayerMoving.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_IsPlayerMoving>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::ClassParams = {
		&UBTS_IsPlayerMoving::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTS_IsPlayerMoving()
	{
		if (!Z_Registration_Info_UClass_UBTS_IsPlayerMoving.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_IsPlayerMoving.OuterSingleton, Z_Construct_UClass_UBTS_IsPlayerMoving_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_IsPlayerMoving.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UBTS_IsPlayerMoving>()
	{
		return UBTS_IsPlayerMoving::StaticClass();
	}
	UBTS_IsPlayerMoving::UBTS_IsPlayerMoving(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_IsPlayerMoving);
	UBTS_IsPlayerMoving::~UBTS_IsPlayerMoving() {}
	struct Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTS_IsPlayerMoving_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTS_IsPlayerMoving_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_IsPlayerMoving, UBTS_IsPlayerMoving::StaticClass, TEXT("UBTS_IsPlayerMoving"), &Z_Registration_Info_UClass_UBTS_IsPlayerMoving, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_IsPlayerMoving), 800709148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTS_IsPlayerMoving_h_3083927429(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTS_IsPlayerMoving_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTS_IsPlayerMoving_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
