// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/AI/BTS/BTT_IncrementIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_IncrementIndex() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTT_IncrementIndex();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UBTT_IncrementIndex_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UBTT_IncrementIndex::StaticRegisterNativesUBTT_IncrementIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_IncrementIndex);
	UClass* Z_Construct_UClass_UBTT_IncrementIndex_NoRegister()
	{
		return UBTT_IncrementIndex::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_IncrementIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_IncrementIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_IncrementIndex_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_IncrementIndex_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTS/BTT_IncrementIndex.h" },
		{ "ModuleRelativePath", "AI/BTS/BTT_IncrementIndex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_IncrementIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_IncrementIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_IncrementIndex_Statics::ClassParams = {
		&UBTT_IncrementIndex::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_IncrementIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_IncrementIndex_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTT_IncrementIndex()
	{
		if (!Z_Registration_Info_UClass_UBTT_IncrementIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_IncrementIndex.OuterSingleton, Z_Construct_UClass_UBTT_IncrementIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_IncrementIndex.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UBTT_IncrementIndex>()
	{
		return UBTT_IncrementIndex::StaticClass();
	}
	UBTT_IncrementIndex::UBTT_IncrementIndex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_IncrementIndex);
	UBTT_IncrementIndex::~UBTT_IncrementIndex() {}
	struct Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTT_IncrementIndex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTT_IncrementIndex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_IncrementIndex, UBTT_IncrementIndex::StaticClass, TEXT("UBTT_IncrementIndex"), &Z_Registration_Info_UClass_UBTT_IncrementIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_IncrementIndex), 2059481261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTT_IncrementIndex_h_2358821432(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTT_IncrementIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arriett_Go_Source_Arriett_Go_AI_BTS_BTT_IncrementIndex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
