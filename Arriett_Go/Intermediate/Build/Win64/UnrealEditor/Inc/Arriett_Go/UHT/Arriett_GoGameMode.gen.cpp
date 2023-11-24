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
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ARRIETT_GO_API UEnum* Z_Construct_UEnum_Arriett_Go_EGameModeState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameModeState;
	static UEnum* EGameModeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameModeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameModeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arriett_Go_EGameModeState, (UObject*)Z_Construct_UPackage__Script_Arriett_Go(), TEXT("EGameModeState"));
		}
		return Z_Registration_Info_UEnum_EGameModeState.OuterSingleton;
	}
	template<> ARRIETT_GO_API UEnum* StaticEnum<EGameModeState>()
	{
		return EGameModeState_StaticEnum();
	}
	struct Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enumerators[] = {
		{ "EGameModeState::WaitForInput", (int64)EGameModeState::WaitForInput },
		{ "EGameModeState::EnemiesActions", (int64)EGameModeState::EnemiesActions },
		{ "EGameModeState::EffectGridCasesActions", (int64)EGameModeState::EffectGridCasesActions },
		{ "EGameModeState::CheckEndGame", (int64)EGameModeState::CheckEndGame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enum_MetaDataParams[] = {
		{ "CheckEndGame.Name", "EGameModeState::CheckEndGame" },
		{ "EffectGridCasesActions.Name", "EGameModeState::EffectGridCasesActions" },
		{ "EnemiesActions.Name", "EGameModeState::EnemiesActions" },
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
		{ "WaitForInput.Name", "EGameModeState::WaitForInput" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arriett_Go,
		nullptr,
		"EGameModeState",
		"EGameModeState",
		Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arriett_Go_EGameModeState()
	{
		if (!Z_Registration_Info_UEnum_EGameModeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameModeState.InnerSingleton, Z_Construct_UEnum_Arriett_Go_EGameModeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameModeState.InnerSingleton;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execTemporary_InitLevel2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Temporary_InitLevel2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execTemporary_InitLevel1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Temporary_InitLevel1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGridCasesVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GridCasesVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGridCaseDistance)
	{
		P_GET_STRUCT(FVector2D,Z_Param_GridCase1);
		P_GET_STRUCT(FVector2D,Z_Param_GridCase2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AArriett_GoGameMode::GridCaseDistance(Z_Param_GridCase1,Z_Param_GridCase2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execSetGridCase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_OBJECT(AGridCase,Z_Param_GridCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridCase(Z_Param_X,Z_Param_Y,Z_Param_GridCase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGetGridCase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridCase**)Z_Param__Result=P_THIS->GetGridCase(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execInitGridCases)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GridSizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridSizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitGridCases(Z_Param_GridSizeX,Z_Param_GridSizeY);
		P_NATIVE_END;
	}
	void AArriett_GoGameMode::StaticRegisterNativesAArriett_GoGameMode()
	{
		UClass* Class = AArriett_GoGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGridCase", &AArriett_GoGameMode::execGetGridCase },
			{ "GridCaseDistance", &AArriett_GoGameMode::execGridCaseDistance },
			{ "GridCasesVerification", &AArriett_GoGameMode::execGridCasesVerification },
			{ "InitGridCases", &AArriett_GoGameMode::execInitGridCases },
			{ "SetGridCase", &AArriett_GoGameMode::execSetGridCase },
			{ "Temporary_InitLevel1", &AArriett_GoGameMode::execTemporary_InitLevel1 },
			{ "Temporary_InitLevel2", &AArriett_GoGameMode::execTemporary_InitLevel2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics
	{
		struct Arriett_GoGameMode_eventGetGridCase_Parms
		{
			int32 X;
			int32 Y;
			AGridCase* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGetGridCase_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGetGridCase_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGetGridCase_Parms, ReturnValue), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "GetGridCase", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::Arriett_GoGameMode_eventGetGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::Arriett_GoGameMode_eventGetGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "GridCasesVerification", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics
	{
		struct Arriett_GoGameMode_eventInitGridCases_Parms
		{
			int32 GridSizeX;
			int32 GridSizeY;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventInitGridCases_Parms, GridSizeX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventInitGridCases_Parms, GridSizeY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::NewProp_GridSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::NewProp_GridSizeY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "InitGridCases", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::Arriett_GoGameMode_eventInitGridCases_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::Arriett_GoGameMode_eventInitGridCases_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics
	{
		struct Arriett_GoGameMode_eventSetGridCase_Parms
		{
			int32 X;
			int32 Y;
			AGridCase* GridCase;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridCase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventSetGridCase_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventSetGridCase_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_GridCase = { "GridCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventSetGridCase_Parms, GridCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::NewProp_GridCase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "SetGridCase", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::Arriett_GoGameMode_eventSetGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::Arriett_GoGameMode_eventSetGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "Temporary_InitLevel1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "Temporary_InitLevel2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArriett_GoGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GetGridCase, "GetGridCase" }, // 4008788318
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GridCaseDistance, "GridCaseDistance" }, // 3394368946
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GridCasesVerification, "GridCasesVerification" }, // 1461694601
		{ &Z_Construct_UFunction_AArriett_GoGameMode_InitGridCases, "InitGridCases" }, // 1729372718
		{ &Z_Construct_UFunction_AArriett_GoGameMode_SetGridCase, "SetGridCase" }, // 3168985142
		{ &Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel1, "Temporary_InitLevel1" }, // 3517887620
		{ &Z_Construct_UFunction_AArriett_GoGameMode_Temporary_InitLevel2, "Temporary_InitLevel2" }, // 2099990152
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArriett_GoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArriett_GoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArriett_GoGameMode_Statics::ClassParams = {
		&AArriett_GoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::EnumInfo[] = {
		{ EGameModeState_StaticEnum, TEXT("EGameModeState"), &Z_Registration_Info_UEnum_EGameModeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 526400032U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArriett_GoGameMode, AArriett_GoGameMode::StaticClass, TEXT("AArriett_GoGameMode"), &Z_Registration_Info_UClass_AArriett_GoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArriett_GoGameMode), 1346396285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_2998326062(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
