// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/GamePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePawn() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void AGamePawn::StaticRegisterNativesAGamePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePawn);
	UClass* Z_Construct_UClass_AGamePawn_NoRegister()
	{
		return AGamePawn::StaticClass();
	}
	struct Z_Construct_UClass_AGamePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartCase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GamePawn.h" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase_MetaData[] = {
		{ "Category", "GamePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Current case of the pawn\n" },
#endif
		{ "ModuleRelativePath", "GamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Current case of the pawn" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase = { "CurrentCase", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, CurrentCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData[] = {
		{ "Category", "GamePawn" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase = { "StartCase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, StartCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePawn_Statics::ClassParams = {
		&AGamePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGamePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGamePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGamePawn()
	{
		if (!Z_Registration_Info_UClass_AGamePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePawn.OuterSingleton, Z_Construct_UClass_AGamePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamePawn.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AGamePawn>()
	{
		return AGamePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePawn);
	AGamePawn::~AGamePawn() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePawn, AGamePawn::StaticClass, TEXT("AGamePawn"), &Z_Registration_Info_UClass_AGamePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePawn), 317679549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_2830053900(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
