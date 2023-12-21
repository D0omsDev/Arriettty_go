// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/Public/Misc/Arriett_GoGameMode.h"
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
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
		{ "IncludePath", "Misc/Arriett_GoGameMode.h" },
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
	DEFINE_FUNCTION(AArriett_GoGameMode::execPauseHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execLoseGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoseGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execWinGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execRestartCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGetCollectible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCollectible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execSetCollectible)
	{
		P_GET_UBOOL(Z_Param_NewCollectible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollectible(Z_Param_NewCollectible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execAddTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execGetNbTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNbTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArriett_GoGameMode::execSetNbTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNbTurn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNbTurn(Z_Param_NewNbTurn);
		P_NATIVE_END;
	}
	void AArriett_GoGameMode::StaticRegisterNativesAArriett_GoGameMode()
	{
		UClass* Class = AArriett_GoGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTurn", &AArriett_GoGameMode::execAddTurn },
			{ "GetCollectible", &AArriett_GoGameMode::execGetCollectible },
			{ "GetNbTurn", &AArriett_GoGameMode::execGetNbTurn },
			{ "LoseGame", &AArriett_GoGameMode::execLoseGame },
			{ "PauseHandler", &AArriett_GoGameMode::execPauseHandler },
			{ "RestartCurrentLevel", &AArriett_GoGameMode::execRestartCurrentLevel },
			{ "SetCollectible", &AArriett_GoGameMode::execSetCollectible },
			{ "SetNbTurn", &AArriett_GoGameMode::execSetNbTurn },
			{ "WinGame", &AArriett_GoGameMode::execWinGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "AddTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_AddTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_AddTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics
	{
		struct Arriett_GoGameMode_eventGetCollectible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Arriett_GoGameMode_eventGetCollectible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Arriett_GoGameMode_eventGetCollectible_Parms), &Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "GetCollectible", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::Arriett_GoGameMode_eventGetCollectible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::Arriett_GoGameMode_eventGetCollectible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics
	{
		struct Arriett_GoGameMode_eventGetNbTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventGetNbTurn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "GetNbTurn", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::Arriett_GoGameMode_eventGetNbTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::Arriett_GoGameMode_eventGetNbTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "LoseGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_LoseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_LoseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*\x09\x09\x09\x09PAUSE FUNCTIONS                                       *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PAUSE FUNCTIONS                                       *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "PauseHandler", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*\x09\x09\x09\x09LEVEL FUNCTIONS                                       *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LEVEL FUNCTIONS                                       *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "RestartCurrentLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics
	{
		struct Arriett_GoGameMode_eventSetCollectible_Parms
		{
			bool NewCollectible;
		};
		static void NewProp_NewCollectible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCollectible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::NewProp_NewCollectible_SetBit(void* Obj)
	{
		((Arriett_GoGameMode_eventSetCollectible_Parms*)Obj)->NewCollectible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::NewProp_NewCollectible = { "NewCollectible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Arriett_GoGameMode_eventSetCollectible_Parms), &Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::NewProp_NewCollectible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::NewProp_NewCollectible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*                COLLECTIBLES FUNCTIONS                                *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COLLECTIBLES FUNCTIONS                                *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "SetCollectible", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::Arriett_GoGameMode_eventSetCollectible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::Arriett_GoGameMode_eventSetCollectible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics
	{
		struct Arriett_GoGameMode_eventSetNbTurn_Parms
		{
			int32 NewNbTurn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNbTurn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::NewProp_NewNbTurn = { "NewNbTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Arriett_GoGameMode_eventSetNbTurn_Parms, NewNbTurn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::NewProp_NewNbTurn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*                TURN FUNCTIONS                                        *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TURN FUNCTIONS                                        *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "SetNbTurn", nullptr, nullptr, Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::Arriett_GoGameMode_eventSetNbTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::Arriett_GoGameMode_eventSetNbTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArriett_GoGameMode, nullptr, "WinGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AArriett_GoGameMode_WinGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArriett_GoGameMode_WinGame_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCollectible_MetaData[];
#endif
		static void NewProp_bHasCollectible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCollectible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamePaused_MetaData[];
#endif
		static void NewProp_bIsGamePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamePaused;
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
		{ &Z_Construct_UFunction_AArriett_GoGameMode_AddTurn, "AddTurn" }, // 2316348301
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GetCollectible, "GetCollectible" }, // 1363615197
		{ &Z_Construct_UFunction_AArriett_GoGameMode_GetNbTurn, "GetNbTurn" }, // 3940208412
		{ &Z_Construct_UFunction_AArriett_GoGameMode_LoseGame, "LoseGame" }, // 667008273
		{ &Z_Construct_UFunction_AArriett_GoGameMode_PauseHandler, "PauseHandler" }, // 4250581076
		{ &Z_Construct_UFunction_AArriett_GoGameMode_RestartCurrentLevel, "RestartCurrentLevel" }, // 776959207
		{ &Z_Construct_UFunction_AArriett_GoGameMode_SetCollectible, "SetCollectible" }, // 1457827530
		{ &Z_Construct_UFunction_AArriett_GoGameMode_SetNbTurn, "SetNbTurn" }, // 3669594846
		{ &Z_Construct_UFunction_AArriett_GoGameMode_WinGame, "WinGame" }, // 781693820
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Misc/Arriett_GoGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_Inner = { "GridCases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_GridCases_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The array containing all the grid cases\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array containing all the effect grid cases" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases = { "EffectGridCases", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EffectGridCases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCases_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The bool that indicates if the player has gotten the collectible\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bool that indicates if the player has gotten the collectible" },
#endif
	};
#endif
	void Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible_SetBit(void* Obj)
	{
		((AArriett_GoGameMode*)Obj)->bHasCollectible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible = { "bHasCollectible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArriett_GoGameMode), &Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PauseWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*\x09\x09\x09\x09PAUSE  VARIABLES                                       *\n\x09***********************************************************************/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PAUSE  VARIABLES                                       *" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PauseWidget = { "PauseWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, PauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PauseWidget_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PauseWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused_SetBit(void* Obj)
	{
		((AArriett_GoGameMode*)Obj)->bIsGamePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused = { "bIsGamePaused", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArriett_GoGameMode), &Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/***********************************************************************\n\x09*\x09\x09\x09\x09STATES VARIABLES                                       *\n\x09***********************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STATES VARIABLES                                       *" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase = { "SelectedCase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, SelectedCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_SelectedCase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PlayerMovementEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate = { "EffectGridCasesToActivate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EffectGridCasesToActivate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EffectGridCasesToActivate_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_Inner = { "EnemiesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove = { "EnemiesToMove", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArriett_GoGameMode, EnemiesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData), Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_EnemiesToMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_FSM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Arriett_GoGameMode.h" },
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bHasCollectible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_PauseWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArriett_GoGameMode_Statics::NewProp_bIsGamePaused,
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
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Misc_Arriett_GoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Misc_Arriett_GoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameModeStateMachine, UGameModeStateMachine::StaticClass, TEXT("UGameModeStateMachine"), &Z_Registration_Info_UClass_UGameModeStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameModeStateMachine), 2532041857U) },
		{ Z_Construct_UClass_AArriett_GoGameMode, AArriett_GoGameMode::StaticClass, TEXT("AArriett_GoGameMode"), &Z_Registration_Info_UClass_AArriett_GoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArriett_GoGameMode), 681718230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Misc_Arriett_GoGameMode_h_967275125(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Misc_Arriett_GoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Misc_Arriett_GoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
