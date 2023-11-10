// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Arrietty_Game_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrietty_Game_GameState() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArrietty_Game_GameState();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArrietty_Game_GameState_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	DEFINE_FUNCTION(AArrietty_Game_GameState::execTemporary_InitLevel1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Temporary_InitLevel1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execGridCasesVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GridCasesVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execGridCaseDistance)
	{
		P_GET_STRUCT(FVector2D,Z_Param_GridCase1);
		P_GET_STRUCT(FVector2D,Z_Param_GridCase2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AArrietty_Game_GameState::GridCaseDistance(Z_Param_GridCase1,Z_Param_GridCase2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execGetCurrentGridCase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridCase**)Z_Param__Result=P_THIS->GetCurrentGridCase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execGetCurrentGridCasePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentGridCasePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execSetCurrentGridCase)
	{
		P_GET_OBJECT(AGridCase,Z_Param_GridCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentGridCase(Z_Param_GridCase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execSetCurrentGridCaseByPos)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentGridCaseByPos(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execSetGridCase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_OBJECT(AGridCase,Z_Param_GridCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridCase(Z_Param_X,Z_Param_Y,Z_Param_GridCase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execGetGridCase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridCase**)Z_Param__Result=P_THIS->GetGridCase(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArrietty_Game_GameState::execInitGridCases)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GridSizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridSizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitGridCases(Z_Param_GridSizeX,Z_Param_GridSizeY);
		P_NATIVE_END;
	}
	void AArrietty_Game_GameState::StaticRegisterNativesAArrietty_Game_GameState()
	{
		UClass* Class = AArrietty_Game_GameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentGridCase", &AArrietty_Game_GameState::execGetCurrentGridCase },
			{ "GetCurrentGridCasePosition", &AArrietty_Game_GameState::execGetCurrentGridCasePosition },
			{ "GetGridCase", &AArrietty_Game_GameState::execGetGridCase },
			{ "GridCaseDistance", &AArrietty_Game_GameState::execGridCaseDistance },
			{ "GridCasesVerification", &AArrietty_Game_GameState::execGridCasesVerification },
			{ "InitGridCases", &AArrietty_Game_GameState::execInitGridCases },
			{ "SetCurrentGridCase", &AArrietty_Game_GameState::execSetCurrentGridCase },
			{ "SetCurrentGridCaseByPos", &AArrietty_Game_GameState::execSetCurrentGridCaseByPos },
			{ "SetGridCase", &AArrietty_Game_GameState::execSetGridCase },
			{ "Temporary_InitLevel1", &AArrietty_Game_GameState::execTemporary_InitLevel1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics
	{
		struct Arrietty_Game_GameState_eventGetCurrentGridCase_Parms
		{
			AGridCase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGetCurrentGridCase_Parms, ReturnValue), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "GetCurrentGridCase", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::Arrietty_Game_GameState_eventGetCurrentGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::Arrietty_Game_GameState_eventGetCurrentGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics
	{
		struct Arrietty_Game_GameState_eventGetCurrentGridCasePosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGetCurrentGridCasePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "GetCurrentGridCasePosition", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::Arrietty_Game_GameState_eventGetCurrentGridCasePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::Arrietty_Game_GameState_eventGetCurrentGridCasePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics
	{
		struct Arrietty_Game_GameState_eventGetGridCase_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGetGridCase_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGetGridCase_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGetGridCase_Parms, ReturnValue), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "GetGridCase", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::Arrietty_Game_GameState_eventGetGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::Arrietty_Game_GameState_eventGetGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics
	{
		struct Arrietty_Game_GameState_eventGridCaseDistance_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_GridCase1 = { "GridCase1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGridCaseDistance_Parms, GridCase1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_GridCase2 = { "GridCase2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGridCaseDistance_Parms, GridCase2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventGridCaseDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_GridCase1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_GridCase2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "GridCaseDistance", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::Arrietty_Game_GameState_eventGridCaseDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::Arrietty_Game_GameState_eventGridCaseDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "GridCasesVerification", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics
	{
		struct Arrietty_Game_GameState_eventInitGridCases_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventInitGridCases_Parms, GridSizeX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventInitGridCases_Parms, GridSizeY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::NewProp_GridSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::NewProp_GridSizeY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "InitGridCases", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::Arrietty_Game_GameState_eventInitGridCases_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::Arrietty_Game_GameState_eventInitGridCases_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics
	{
		struct Arrietty_Game_GameState_eventSetCurrentGridCase_Parms
		{
			AGridCase* GridCase;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridCase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::NewProp_GridCase = { "GridCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetCurrentGridCase_Parms, GridCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::NewProp_GridCase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "SetCurrentGridCase", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::Arrietty_Game_GameState_eventSetCurrentGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::Arrietty_Game_GameState_eventSetCurrentGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics
	{
		struct Arrietty_Game_GameState_eventSetCurrentGridCaseByPos_Parms
		{
			int32 X;
			int32 Y;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetCurrentGridCaseByPos_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetCurrentGridCaseByPos_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "SetCurrentGridCaseByPos", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::Arrietty_Game_GameState_eventSetCurrentGridCaseByPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::Arrietty_Game_GameState_eventSetCurrentGridCaseByPos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics
	{
		struct Arrietty_Game_GameState_eventSetGridCase_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetGridCase_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetGridCase_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_GridCase = { "GridCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arrietty_Game_GameState_eventSetGridCase_Parms, GridCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::NewProp_GridCase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "SetGridCase", nullptr, nullptr, Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::Arrietty_Game_GameState_eventSetGridCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::Arrietty_Game_GameState_eventSetGridCase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArrietty_Game_GameState, nullptr, "Temporary_InitLevel1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrietty_Game_GameState);
	UClass* Z_Construct_UClass_AArrietty_Game_GameState_NoRegister()
	{
		return AArrietty_Game_GameState::StaticClass();
	}
	struct Z_Construct_UClass_AArrietty_Game_GameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrietty_Game_GameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrietty_Game_GameState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArrietty_Game_GameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCase, "GetCurrentGridCase" }, // 3764200422
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_GetCurrentGridCasePosition, "GetCurrentGridCasePosition" }, // 4017491442
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_GetGridCase, "GetGridCase" }, // 2201979270
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_GridCaseDistance, "GridCaseDistance" }, // 1581047422
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_GridCasesVerification, "GridCasesVerification" }, // 145031832
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_InitGridCases, "InitGridCases" }, // 3615632375
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCase, "SetCurrentGridCase" }, // 4124227847
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_SetCurrentGridCaseByPos, "SetCurrentGridCaseByPos" }, // 2223000834
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_SetGridCase, "SetGridCase" }, // 2413912200
		{ &Z_Construct_UFunction_AArrietty_Game_GameState_Temporary_InitLevel1, "Temporary_InitLevel1" }, // 3935984298
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrietty_Game_GameState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrietty_Game_GameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Arrietty_Game_GameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Arrietty_Game_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrietty_Game_GameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrietty_Game_GameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrietty_Game_GameState_Statics::ClassParams = {
		&AArrietty_Game_GameState::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArrietty_Game_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AArrietty_Game_GameState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArrietty_Game_GameState()
	{
		if (!Z_Registration_Info_UClass_AArrietty_Game_GameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrietty_Game_GameState.OuterSingleton, Z_Construct_UClass_AArrietty_Game_GameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArrietty_Game_GameState.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<AArrietty_Game_GameState>()
	{
		return AArrietty_Game_GameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrietty_Game_GameState);
	AArrietty_Game_GameState::~AArrietty_Game_GameState() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arrietty_Game_GameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arrietty_Game_GameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArrietty_Game_GameState, AArrietty_Game_GameState::StaticClass, TEXT("AArrietty_Game_GameState"), &Z_Registration_Info_UClass_AArrietty_Game_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrietty_Game_GameState), 1110658809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arrietty_Game_GameState_h_3915810696(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arrietty_Game_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arrietty_Game_GameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
