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
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	DEFINE_FUNCTION(AGamePawn::execTimelineFinishedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineFinishedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamePawn::execTimelineCallback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineCallback(Z_Param_TimeValue);
		P_NATIVE_END;
	}
	void AGamePawn::StaticRegisterNativesAGamePawn()
	{
		UClass* Class = AGamePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimelineCallback", &AGamePawn::execTimelineCallback },
			{ "TimelineFinishedCallback", &AGamePawn::execTimelineFinishedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics
	{
		struct GamePawn_eventTimelineCallback_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::NewProp_TimeValue = { "TimeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamePawn_eventTimelineCallback_Parms, TimeValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::NewProp_TimeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePawn, nullptr, "TimelineCallback", nullptr, nullptr, Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::GamePawn_eventTimelineCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::GamePawn_eventTimelineCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGamePawn_TimelineCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePawn_TimelineCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamePawn, nullptr, "TimelineFinishedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePawn);
	UClass* Z_Construct_UClass_AGamePawn_NoRegister()
	{
		return AGamePawn::StaticClass();
	}
	struct Z_Construct_UClass_AGamePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatXCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatXCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatYCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatYCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatZCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatZCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZOffsetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPawnAnimation_MetaData[];
#endif
		static void NewProp_bPawnAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPawnAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveFloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveFloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimelineDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGamePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamePawn_TimelineCallback, "TimelineCallback" }, // 1919278480
		{ &Z_Construct_UFunction_AGamePawn_TimelineFinishedCallback, "TimelineFinishedCallback" }, // 451576624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GamePawn.h" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData[] = {
		{ "Category", "GamePawn" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase = { "StartCase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, StartCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_NextCase_MetaData[] = {
		{ "Category", "GamePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Next case of the pawn\n" },
#endif
		{ "ModuleRelativePath", "GamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Next case of the pawn" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_NextCase = { "NextCase", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, NextCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_NextCase_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_NextCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_MyTimeline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timeline Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_MyTimeline = { "MyTimeline", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, MyTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_MyTimeline_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_MyTimeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatXCurve_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatXCurve = { "FloatXCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, FloatXCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatXCurve_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatXCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatYCurve_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatYCurve = { "FloatYCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, FloatYCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatYCurve_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatYCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatZCurve_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatZCurve = { "FloatZCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, FloatZCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatZCurve_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatZCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_ZOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_ZOffsetCurve = { "ZOffsetCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, ZOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_ZOffsetCurve_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_ZOffsetCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	void Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation_SetBit(void* Obj)
	{
		((AGamePawn*)Obj)->bPawnAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation = { "bPawnAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGamePawn), &Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_JumpHeight_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_JumpHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_CurveFloatValue_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_CurveFloatValue = { "CurveFloatValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, CurveFloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_CurveFloatValue_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_CurveFloatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePawn_Statics::NewProp_TimelineDirection_MetaData[] = {
		{ "ModuleRelativePath", "GamePawn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGamePawn_Statics::NewProp_TimelineDirection = { "TimelineDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePawn, TimelineDirection), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePawn_Statics::NewProp_TimelineDirection_MetaData), Z_Construct_UClass_AGamePawn_Statics::NewProp_TimelineDirection_MetaData) }; // 4229933074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_StartCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_CurrentCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_NextCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_MyTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatXCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatYCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_FloatZCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_ZOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_bPawnAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_JumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_CurveFloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePawn_Statics::NewProp_TimelineDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePawn_Statics::ClassParams = {
		&AGamePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGamePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePawn, AGamePawn::StaticClass, TEXT("AGamePawn"), &Z_Registration_Info_UClass_AGamePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePawn), 2195923804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_3874562505(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_GamePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
