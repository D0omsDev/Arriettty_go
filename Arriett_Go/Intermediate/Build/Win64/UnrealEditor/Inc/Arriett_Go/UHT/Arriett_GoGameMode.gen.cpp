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
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEffectGridCase_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AJulie_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UFiniteStateMachine();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UGameModeStateMachine();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UGameModeStateMachine_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UGameModeStateMachine::StaticRegisterNativesUGameModeStateMachine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameModeStateMachine);
	UClass* Z_Construct_UClass_UGameModeStateMachine_NoRegister()
	{
		return UGameModeStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UGameModeStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameModeStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFiniteStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameModeStateMachine_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Arriett_GoGameMode.h" },
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameModeStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameModeStateMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameModeStateMachine_Statics::ClassParams = {
		&UGameModeStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameModeStateMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameModeStateMachine_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameModeStateMachine()
	{
		if (!Z_Registration_Info_UClass_UGameModeStateMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameModeStateMachine.OuterSingleton, Z_Construct_UClass_UGameModeStateMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameModeStateMachine.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UGameModeStateMachine>()
	{
		return UGameModeStateMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameModeStateMachine);
	UGameModeStateMachine::~UGameModeStateMachine() {}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGridCaseDistance)
	{
		P_GET_STRUCT(FVector2D,Z_Param_GridCase1);
		P_GET_STRUCT(FVector2D,Z_Param_GridCase2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AArriett_GoGameMode::GridCaseDistance(Z_Param_GridCase1,Z_Param_GridCase2);
		P_NATIVE_END;
	}
	void AArriett_GoGameMode::StaticRegisterNativesAArriett_GoGameMode()
	{
		UClass* Class = AArriett_GoGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GridCaseDistance", &AArriett_GoGameMode::execGridCaseDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics
	{
		struct Arriett_GoGameMode_eventGridCaseDistance_Parms
		{
			FVector2D GridCase1;
			FVector2D GridCase2;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCase1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCase2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_GridCase1 = { "GridCase1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGridCaseDistance_Parms, GridCase1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_GridCase2 = { "GridCase2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGridCaseDistance_Parms, GridCase2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGridCaseDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_GridCase1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_GridCase2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "GridCaseDistance", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::Arriett_GoGameMode_eventGridCaseDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::Arriett_GoGameMode_eventGridCaseDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArriett_GoGameMode);
	UClass* Z_Construct_UClass_AArriett_GoGameMode_NoRegister()
	{
		return AArriett_GoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArriett_GoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridCases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectGridCases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectGridCases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectGridCases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedCase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementEnded_MetaData[];
#endif
		static void NewProp_PlayerMovementEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerMovementEnded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectGridCasesToActivate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectGridCasesToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectGridCasesToActivate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemiesToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemiesToMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArriett_GoGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance, "GridCaseDistance" }, // 3394368946
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Arriett_GoGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_Inner = { "GridCases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The array containing all the grid cases\n" },
#endif
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array containing all the grid cases" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases = { "GridCases", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, GridCases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player pawn\n" },
#endif
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player pawn" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, PlayerPawn), Z_Construct_UClass_AJulie_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerPawn_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerPawn_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The enemies pawns\n" },
#endif
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The enemies pawns" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_Inner = { "EffectGridCases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEffectGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The array containing all the effect grid cases\n" },
#endif
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array containing all the effect grid cases" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases = { "EffectGridCases", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EffectGridCases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//States Variables\n" },
#endif
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase = { "SelectedCase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, SelectedCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_MetaData[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_SetBit(void* Obj)
	{
		((AArriett_GoGameMode*)Obj)->PlayerMovementEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded = { "PlayerMovementEnded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArriett_GoGameMode), &Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_Inner = { "EffectGridCasesToActivate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEffectGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_MetaData[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate = { "EffectGridCasesToActivate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EffectGridCasesToActivate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_Inner = { "EnemiesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove = { "EnemiesToMove", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EnemiesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM_MetaData[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM = { "FSM", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, FSM), Z_Construct_UClass_UGameModeStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArriett_GoGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArriett_GoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArriett_GoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArriett_GoGameMode_Statics::ClassParams = {
		&AArriett_GoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArriett_GoGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameModeStateMachine, UGameModeStateMachine::StaticClass, TEXT("UGameModeStateMachine"), &Z_Registration_Info_UClass_UGameModeStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameModeStateMachine), 1834762063U) },
		{ Z_Construct_UClass_AArriett_GoGameMode, AArriett_GoGameMode::StaticClass, TEXT("AArriett_GoGameMode"), &Z_Registration_Info_UClass_AArriett_GoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArriett_GoGameMode), 2122318548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_1769393312(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
