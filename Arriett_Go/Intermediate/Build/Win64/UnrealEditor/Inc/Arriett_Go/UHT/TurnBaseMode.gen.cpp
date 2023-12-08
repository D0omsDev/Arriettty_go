// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Misc/TurnBaseMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBaseMode() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_ATurnBaseMode();
	ARRIETT_GO_API UClass* Z_Construct_UClass_ATurnBaseMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void ATurnBaseMode::StaticRegisterNativesATurnBaseMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurnBaseMode);
	UClass* Z_Construct_UClass_ATurnBaseMode_NoRegister()
	{
		return ATurnBaseMode::StaticClass();
	}
	struct Z_Construct_UClass_ATurnBaseMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnBaseMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBaseMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBaseMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Misc/TurnBaseMode.h" },
		{ "ModuleRelativePath", "Misc/TurnBaseMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnBaseMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBaseMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnBaseMode_Statics::ClassParams = {
		&ATurnBaseMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBaseMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnBaseMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATurnBaseMode()
	{
		if (!Z_Registration_Info_UClass_ATurnBaseMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnBaseMode.OuterSingleton, Z_Construct_UClass_ATurnBaseMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurnBaseMode.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<ATurnBaseMode>()
	{
		return ATurnBaseMode::StaticClass();
	}
	ATurnBaseMode::ATurnBaseMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBaseMode);
	ATurnBaseMode::~ATurnBaseMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Misc_TurnBaseMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Misc_TurnBaseMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurnBaseMode, ATurnBaseMode::StaticClass, TEXT("ATurnBaseMode"), &Z_Registration_Info_UClass_ATurnBaseMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBaseMode), 378020399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Misc_TurnBaseMode_h_720259239(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Misc_TurnBaseMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Misc_TurnBaseMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
