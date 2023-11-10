// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Arriett_GoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArriett_GoGameMode() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArriett_GoGameMode();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArriett_GoGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AArriett_GoGameMode::StaticRegisterNativesAArriett_GoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArriett_GoGameMode);
	UClass* Z_Construct_UClass_AArriett_GoGameMode_NoRegister()
	{
		return AArriett_GoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArriett_GoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Arriett_GoGameMode.h" },
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArriett_GoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArriett_GoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArriett_GoGameMode_Statics::ClassParams = {
		&AArriett_GoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArriett_GoGameMode()
	{
		if (!Z_Registration_Info_UClass_AArriett_GoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArriett_GoGameMode.OuterSingleton, Z_Construct_UClass_AArriett_GoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArriett_GoGameMode.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AArriett_GoGameMode>()
	{
		return AArriett_GoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArriett_GoGameMode);
	AArriett_GoGameMode::~AArriett_GoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArriett_GoGameMode, AArriett_GoGameMode::StaticClass, TEXT("AArriett_GoGameMode"), &Z_Registration_Info_UClass_AArriett_GoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArriett_GoGameMode), 2345009080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_680158975(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
