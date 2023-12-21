// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Public/Pawns/Player/Julie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJulie() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AJulie();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AJulie_NoRegister();
	ARRIETT_GO_API UEnum* Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJulieDeathAnimation;
	static UEnum* EJulieDeathAnimation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJulieDeathAnimation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJulieDeathAnimation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation, (UObject*)Z_Construct_UPackage__Script_Arriett_Go(), TEXT("EJulieDeathAnimation"));
		}
		return Z_Registration_Info_UEnum_EJulieDeathAnimation.OuterSingleton;
	}
	template<> ARRIETT_GO_API UEnum* StaticEnum<EJulieDeathAnimation>()
	{
		return EJulieDeathAnimation_StaticEnum();
	}
	struct Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enumerators[] = {
		{ "EJulieDeathAnimation::JDA_Confetti", (int64)EJulieDeathAnimation::JDA_Confetti },
		{ "EJulieDeathAnimation::JDA_Flying", (int64)EJulieDeathAnimation::JDA_Flying },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum used to know the type of death animation\n * */" },
#endif
		{ "JDA_Confetti.Name", "EJulieDeathAnimation::JDA_Confetti" },
		{ "JDA_Flying.Name", "EJulieDeathAnimation::JDA_Flying" },
		{ "ModuleRelativePath", "Public/Pawns/Player/Julie.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum used to know the type of death animation" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arriett_Go,
		nullptr,
		"EJulieDeathAnimation",
		"EJulieDeathAnimation",
		Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation()
	{
		if (!Z_Registration_Info_UEnum_EJulieDeathAnimation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJulieDeathAnimation.InnerSingleton, Z_Construct_UEnum_Arriett_Go_EJulieDeathAnimation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJulieDeathAnimation.InnerSingleton;
	}
	void AJulie::StaticRegisterNativesAJulie()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJulie);
	UClass* Z_Construct_UClass_AJulie_NoRegister()
	{
		return AJulie::StaticClass();
	}
	struct Z_Construct_UClass_AJulie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JulieMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JulieMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJulie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGamePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJulie_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class used to manage the Player pawn of the game\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/Player/Julie.h" },
		{ "ModuleRelativePath", "Public/Pawns/Player/Julie.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class used to manage the Player pawn of the game" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJulie_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Player/Julie.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJulie_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJulie, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AJulie_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJulie_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Player/Julie.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJulie_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJulie, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AJulie_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJulie_Statics::NewProp_JulieMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Player/Julie.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJulie_Statics::NewProp_JulieMesh = { "JulieMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJulie, JulieMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::NewProp_JulieMesh_MetaData), Z_Construct_UClass_AJulie_Statics::NewProp_JulieMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJulie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJulie_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJulie_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJulie_Statics::NewProp_JulieMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJulie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJulie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJulie_Statics::ClassParams = {
		&AJulie::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJulie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::Class_MetaDataParams), Z_Construct_UClass_AJulie_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJulie_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AJulie()
	{
		if (!Z_Registration_Info_UClass_AJulie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJulie.OuterSingleton, Z_Construct_UClass_AJulie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJulie.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AJulie>()
	{
		return AJulie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJulie);
	AJulie::~AJulie() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::EnumInfo[] = {
		{ EJulieDeathAnimation_StaticEnum, TEXT("EJulieDeathAnimation"), &Z_Registration_Info_UEnum_EJulieDeathAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3531103201U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJulie, AJulie::StaticClass, TEXT("AJulie"), &Z_Registration_Info_UClass_AJulie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJulie), 4278924685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_4120423999(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_Player_Julie_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
