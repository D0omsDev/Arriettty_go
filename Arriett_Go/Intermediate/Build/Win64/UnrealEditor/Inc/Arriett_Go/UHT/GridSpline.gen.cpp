// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/GridSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpline() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridSpline();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridSpline_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	DEFINE_FUNCTION(AGridSpline::execInitializeGridCases)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeGridCases();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSpline::execInitializeSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSpline(Z_Param_SizeX,Z_Param_SizeY);
		P_NATIVE_END;
	}
	void AGridSpline::StaticRegisterNativesAGridSpline()
	{
		UClass* Class = AGridSpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeGridCases", &AGridSpline::execInitializeGridCases },
			{ "InitializeSpline", &AGridSpline::execInitializeSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridSpline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSpline, nullptr, "InitializeGridCases", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGridSpline_InitializeGridCases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSpline_InitializeGridCases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics
	{
		struct GridSpline_eventInitializeSpline_Parms
		{
			int32 SizeX;
			int32 SizeY;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSpline_eventInitializeSpline_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSpline_eventInitializeSpline_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::NewProp_SizeY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridSpline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSpline, nullptr, "InitializeSpline", nullptr, nullptr, Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::GridSpline_eventInitializeSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::GridSpline_eventInitializeSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSpline_InitializeSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSpline_InitializeSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridSpline);
	UClass* Z_Construct_UClass_AGridSpline_NoRegister()
	{
		return AGridSpline::StaticClass();
	}
	struct Z_Construct_UClass_AGridSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridSpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridSpline_InitializeGridCases, "InitializeGridCases" }, // 1421122365
		{ &Z_Construct_UFunction_AGridSpline_InitializeSpline, "InitializeSpline" }, // 3510871920
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GridSpline.h" },
		{ "ModuleRelativePath", "GridSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "GridSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSpline, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::NewProp_Spline_MetaData), Z_Construct_UClass_AGridSpline_Statics::NewProp_Spline_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSpline_Statics::NewProp_Spline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridSpline_Statics::ClassParams = {
		&AGridSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridSpline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGridSpline()
	{
		if (!Z_Registration_Info_UClass_AGridSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridSpline.OuterSingleton, Z_Construct_UClass_AGridSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridSpline.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AGridSpline>()
	{
		return AGridSpline::StaticClass();
	}
	AGridSpline::AGridSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSpline);
	AGridSpline::~AGridSpline() {}
	struct Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridSpline, AGridSpline::StaticClass, TEXT("AGridSpline"), &Z_Registration_Info_UClass_AGridSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridSpline), 460994746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridSpline_h_3369895317(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
