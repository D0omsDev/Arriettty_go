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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStartCase_MetaData[];
#endif
		static void NewProp_bIsStartCase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStartCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnsInCase_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnsInCase_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PawnsInCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
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
		{ "IncludePath", "GridCase.h" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase_MetaData[] = {
		{ "Category", "GridCase" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	void Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase_SetBit(void* Obj)
	{
		((AGridCase*)Obj)->bIsStartCase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase = { "bIsStartCase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridCase), &Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "GridCase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase_Inner = { "PawnsInCase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGamePawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase = { "PawnsInCase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, PawnsInCase), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_X_MetaData[] = {
		{ "Category", "GridCase" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_X_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "GridCase" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Y_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "GridCase" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Z), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Z_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Z_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "GridCase" },
		{ "ModuleRelativePath", "GridCase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridCase, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData), Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox_MetaData[] = {
		{ "ModuleRelativePath", "GridCase.h" },
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_bIsStartCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_PawnsInCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridCase_Statics::NewProp_LinkBoxInstancedMesh,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridCase, AGridCase::StaticClass, TEXT("AGridCase"), &Z_Registration_Info_UClass_AGridCase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridCase), 1218047637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_512164410(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
