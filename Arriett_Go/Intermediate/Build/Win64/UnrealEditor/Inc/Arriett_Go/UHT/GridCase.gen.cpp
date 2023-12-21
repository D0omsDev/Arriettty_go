// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/GridCase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCase() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGamePawn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ARRIETT_GO_API UEnum* Z_Construct_UEnum_Arriett_Go_ECaseColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECaseColor;
	static UEnum* ECaseColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECaseColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECaseColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arriett_Go_ECaseColor, (UObject*)Z_Construct_UPackage__Script_Arriett_Go(), TEXT("ECaseColor"));
		}
		return Z_Registration_Info_UEnum_ECaseColor.OuterSingleton;
	}
	template<> ARRIETT_GO_API UEnum* StaticEnum<ECaseColor>()
	{
		return ECaseColor_StaticEnum();
	}
	struct Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enumerators[] = {
		{ "ECaseColor::CaseColor_Black", (int64)ECaseColor::CaseColor_Black },
		{ "ECaseColor::CaseColor_Red", (int64)ECaseColor::CaseColor_Red },
		{ "ECaseColor::CaseColor_Blue", (int64)ECaseColor::CaseColor_Blue },
		{ "ECaseColor::CaseColor_Green", (int64)ECaseColor::CaseColor_Green },
		{ "ECaseColor::CaseColor_Yellow", (int64)ECaseColor::CaseColor_Yellow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enum_MetaDataParams[] = {
		{ "CaseColor_Black.Name", "ECaseColor::CaseColor_Black" },
		{ "CaseColor_Blue.Name", "ECaseColor::CaseColor_Blue" },
		{ "CaseColor_Green.Name", "ECaseColor::CaseColor_Green" },
		{ "CaseColor_Red.Name", "ECaseColor::CaseColor_Red" },
		{ "CaseColor_Yellow.Name", "ECaseColor::CaseColor_Yellow" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arriett_Go,
		nullptr,
		"ECaseColor",
		"ECaseColor",
		Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arriett_Go_ECaseColor()
	{
		if (!Z_Registration_Info_UEnum_ECaseColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECaseColor.InnerSingleton, Z_Construct_UEnum_Arriett_Go_ECaseColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECaseColor.InnerSingleton;
	}
	void AGridCase::StaticRegisterNativesAGridCase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridCase);
	UClass* Z_Construct_UClass_AGridCase_NoRegister()
	{
		return AGridCase::StaticClass();
	}
	struct Z_Construct_UClass_AGridCase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnsOnCase_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnsOnCase_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PawnsOnCase;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkBoxMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkBoxMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkBoxInstancedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkBoxInstancedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBlack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBlack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialGreen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBlue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialYellow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialYellow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridCase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Class used to manage the cases of the grid\n* */" },
#endif
		{ "IncludePath", "GridCase.h" },
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Class used to manage the cases of the grid" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "GridCase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The mesh of the case\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh of the case" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase_Inner = { "PawnsOnCase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGamePawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The List of the pawns currently on the case\n" },
#endif
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The List of the pawns currently on the case" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase = { "PawnsOnCase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, PawnsOnCase), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "GridCase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The list of the neighbors of the case\n" },
#endif
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of the neighbors of the case" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Mesh used to link the cases\n" },
#endif
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Mesh used to link the cases" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox = { "LinkBox", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, LinkBox), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh = { "LinkBoxMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, LinkBoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh = { "LinkBoxInstancedMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, LinkBoxInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*\x09\x09\x09\x09MATERIALS VARIABLES\x09\x09\x09\x09                       *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "GridCase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MATERIALS VARIABLES                                                    *" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlack = { "MaterialBlack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, MaterialBlack), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlack_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialRed_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialRed = { "MaterialRed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, MaterialRed), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialRed_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialRed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialGreen_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialGreen = { "MaterialGreen", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, MaterialGreen), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialGreen_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialGreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlue_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlue = { "MaterialBlue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, MaterialBlue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlue_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialYellow_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialYellow = { "MaterialYellow", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, MaterialYellow), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialYellow_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialYellow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsOnCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_MaterialYellow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridCase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridCase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridCase_Statics::ClassParams = {
		&AGridCase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridCase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridCase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGridCase()
	{
		if (!Z_Registration_Info_UClass_AGridCase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridCase.OuterSingleton, Z_Construct_UClass_AGridCase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridCase.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AGridCase>()
	{
		return AGridCase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridCase);
	AGridCase::~AGridCase() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::EnumInfo[] = {
		{ ECaseColor_StaticEnum, TEXT("ECaseColor"), &Z_Registration_Info_UEnum_ECaseColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3596984818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridCase, AGridCase::StaticClass, TEXT("AGridCase"), &Z_Registration_Info_UClass_AGridCase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridCase), 1510007463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_748628429(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
