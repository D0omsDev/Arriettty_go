// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/LevelActor/BasPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasPickUp() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_ABasPickUp();
	ARRIETT_GO_API UClass* Z_Construct_UClass_ABasPickUp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void ABasPickUp::StaticRegisterNativesABasPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasPickUp);
	UClass* Z_Construct_UClass_ABasPickUp_NoRegister()
	{
		return ABasPickUp::StaticClass();
	}
	struct Z_Construct_UClass_ABasPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasPickUp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelActor/BasPickUp.h" },
		{ "ModuleRelativePath", "LevelActor/BasPickUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasPickUp_Statics::ClassParams = {
		&ABasPickUp::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasPickUp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABasPickUp()
	{
		if (!Z_Registration_Info_UClass_ABasPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasPickUp.OuterSingleton, Z_Construct_UClass_ABasPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasPickUp.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<ABasPickUp>()
	{
		return ABasPickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasPickUp);
	ABasPickUp::~ABasPickUp() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_LevelActor_BasPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_LevelActor_BasPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasPickUp, ABasPickUp::StaticClass, TEXT("ABasPickUp"), &Z_Registration_Info_UClass_ABasPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasPickUp), 3225715126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_LevelActor_BasPickUp_h_2190476215(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_LevelActor_BasPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_LevelActor_BasPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
