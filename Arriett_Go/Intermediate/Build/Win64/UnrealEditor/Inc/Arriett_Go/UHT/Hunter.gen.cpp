// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Hunter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunter() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AHunter();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AHunter_NoRegister();
	ARRIETT_GO_API UScriptStruct* Z_Construct_UScriptStruct_FHunterLine();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HunterLine;
class UScriptStruct* FHunterLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HunterLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HunterLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHunterLine, (UObject*)Z_Construct_UPackage__Script_Arriett_Go(), TEXT("HunterLine"));
	}
	return Z_Registration_Info_UScriptStruct_HunterLine.OuterSingleton;
}
template<> ARRIETT_GO_API UScriptStruct* StaticStruct<FHunterLine>()
{
	return FHunterLine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHunterLine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaseNear_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaseNear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaseFar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaseFar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHunterLine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHunterLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHunterLine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseNear_MetaData[] = {
		{ "Category", "HunterLine" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseNear = { "CaseNear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHunterLine, CaseNear), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseNear_MetaData), Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseNear_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseFar_MetaData[] = {
		{ "Category", "HunterLine" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseFar = { "CaseFar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHunterLine, CaseFar), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseFar_MetaData), Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseFar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHunterLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseNear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHunterLine_Statics::NewProp_CaseFar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHunterLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
		nullptr,
		&NewStructOps,
		"HunterLine",
		Z_Construct_UScriptStruct_FHunterLine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHunterLine_Statics::PropPointers),
		sizeof(FHunterLine),
		alignof(FHunterLine),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHunterLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHunterLine_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHunterLine_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHunterLine()
	{
		if (!Z_Registration_Info_UScriptStruct_HunterLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HunterLine.InnerSingleton, Z_Construct_UScriptStruct_FHunterLine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HunterLine.InnerSingleton;
	}
	DEFINE_FUNCTION(AHunter::execAttackTimelineFinishedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackTimelineFinishedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHunter::execAttackTimelineCallback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackTimelineCallback(Z_Param_TimeValue);
		P_NATIVE_END;
	}
	void AHunter::StaticRegisterNativesAHunter()
	{
		UClass* Class = AHunter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackTimelineCallback", &AHunter::execAttackTimelineCallback },
			{ "AttackTimelineFinishedCallback", &AHunter::execAttackTimelineFinishedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics
	{
		struct Hunter_eventAttackTimelineCallback_Parms
		{
			float TimeValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::NewProp_TimeValue = { "TimeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hunter_eventAttackTimelineCallback_Parms, TimeValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::NewProp_TimeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunter, nullptr, "AttackTimelineCallback", nullptr, nullptr, Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::Hunter_eventAttackTimelineCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::Hunter_eventAttackTimelineCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHunter_AttackTimelineCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunter_AttackTimelineCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunter, nullptr, "AttackTimelineFinishedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHunter);
	UClass* Z_Construct_UClass_AHunter_NoRegister()
	{
		return AHunter::StaticClass();
	}
	struct Z_Construct_UClass_AHunter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HunterLines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HunterLines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HunterLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HunterLineIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HunterLineIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCurveFloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCurveFloatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHunter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHunter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHunter_AttackTimelineCallback, "AttackTimelineCallback" }, // 3347580228
		{ &Z_Construct_UFunction_AHunter_AttackTimelineFinishedCallback, "AttackTimelineFinishedCallback" }, // 1637082726
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hunter.h" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines_Inner = { "HunterLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHunterLine, METADATA_PARAMS(0, nullptr) }; // 1374872116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines_MetaData[] = {
		{ "Category", "Hunter" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines = { "HunterLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHunter, HunterLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines_MetaData), Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines_MetaData) }; // 1374872116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::NewProp_RotationSound_MetaData[] = {
		{ "Category", "SoundEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_RotationSound = { "RotationSound", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHunter, RotationSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::NewProp_RotationSound_MetaData), Z_Construct_UClass_AHunter_Statics::NewProp_RotationSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::NewProp_HunterLineIndex_MetaData[] = {
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_HunterLineIndex = { "HunterLineIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHunter, HunterLineIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::NewProp_HunterLineIndex_MetaData), Z_Construct_UClass_AHunter_Statics::NewProp_HunterLineIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::NewProp_AttackTimeline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timeline Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hunter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_AttackTimeline = { "AttackTimeline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHunter, AttackTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::NewProp_AttackTimeline_MetaData), Z_Construct_UClass_AHunter_Statics::NewProp_AttackTimeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunter_Statics::NewProp_AttackCurveFloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Hunter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHunter_Statics::NewProp_AttackCurveFloatValue = { "AttackCurveFloatValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHunter, AttackCurveFloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::NewProp_AttackCurveFloatValue_MetaData), Z_Construct_UClass_AHunter_Statics::NewProp_AttackCurveFloatValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHunter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_HunterLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_RotationSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_HunterLineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_AttackTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunter_Statics::NewProp_AttackCurveFloatValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHunter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHunter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHunter_Statics::ClassParams = {
		&AHunter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHunter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHunter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHunter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHunter()
	{
		if (!Z_Registration_Info_UClass_AHunter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHunter.OuterSingleton, Z_Construct_UClass_AHunter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHunter.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AHunter>()
	{
		return AHunter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunter);
	AHunter::~AHunter() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ScriptStructInfo[] = {
		{ FHunterLine::StaticStruct, Z_Construct_UScriptStruct_FHunterLine_Statics::NewStructOps, TEXT("HunterLine"), &Z_Registration_Info_UScriptStruct_HunterLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHunterLine), 1374872116U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHunter, AHunter::StaticClass, TEXT("AHunter"), &Z_Registration_Info_UClass_AHunter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHunter), 2432182723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_2516965474(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Hunter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
