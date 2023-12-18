// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArriett_GoGameMode_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_AGridCase_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UFiniteStateMachine_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameMode();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameMode_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeCaseEffect();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeCaseEffect_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEndGame();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEndGame_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEndTurn();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEndTurn_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEnemyMovement();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeEnemyMovement_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeInputWait();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModeInputWait_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModePlayerMovement();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_GameModePlayerMovement_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UState::StaticRegisterNativesUState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState);
	UClass* Z_Construct_UClass_UState_NoRegister()
	{
		return UState::StaticClass();
	}
	struct Z_Construct_UClass_UState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_Statics::NewProp_FSM_MetaData[] = {
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UState_Statics::NewProp_FSM = { "FSM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UState, FSM), Z_Construct_UClass_UFiniteStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::NewProp_FSM_MetaData), Z_Construct_UClass_UState_Statics::NewProp_FSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UState_Statics::NewProp_FSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_Statics::ClassParams = {
		&UState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UState()
	{
		if (!Z_Registration_Info_UClass_UState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState.OuterSingleton, Z_Construct_UClass_UState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState>()
	{
		return UState::StaticClass();
	}
	UState::UState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState);
	UState::~UState() {}
	void UState_GameMode::StaticRegisterNativesUState_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameMode);
	UClass* Z_Construct_UClass_UState_GameMode_NoRegister()
	{
		return UState_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamemode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Gamemode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameMode_Statics::NewProp_Gamemode_MetaData[] = {
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UState_GameMode_Statics::NewProp_Gamemode = { "Gamemode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UState_GameMode, Gamemode), Z_Construct_UClass_AArriett_GoGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameMode_Statics::NewProp_Gamemode_MetaData), Z_Construct_UClass_UState_GameMode_Statics::NewProp_Gamemode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UState_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UState_GameMode_Statics::NewProp_Gamemode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameMode_Statics::ClassParams = {
		&UState_GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UState_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UState_GameMode()
	{
		if (!Z_Registration_Info_UClass_UState_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameMode.OuterSingleton, Z_Construct_UClass_UState_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameMode.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameMode>()
	{
		return UState_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameMode);
	UState_GameMode::~UState_GameMode() {}
	void UState_GameModeInputWait::StaticRegisterNativesUState_GameModeInputWait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModeInputWait);
	UClass* Z_Construct_UClass_UState_GameModeInputWait_NoRegister()
	{
		return UState_GameModeInputWait::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModeInputWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModeInputWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeInputWait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeInputWait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModeInputWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModeInputWait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModeInputWait_Statics::ClassParams = {
		&UState_GameModeInputWait::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeInputWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModeInputWait_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UState_GameModeInputWait()
	{
		if (!Z_Registration_Info_UClass_UState_GameModeInputWait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModeInputWait.OuterSingleton, Z_Construct_UClass_UState_GameModeInputWait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModeInputWait.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModeInputWait>()
	{
		return UState_GameModeInputWait::StaticClass();
	}
	UState_GameModeInputWait::UState_GameModeInputWait() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModeInputWait);
	UState_GameModeInputWait::~UState_GameModeInputWait() {}
	void UState_GameModePlayerMovement::StaticRegisterNativesUState_GameModePlayerMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModePlayerMovement);
	UClass* Z_Construct_UClass_UState_GameModePlayerMovement_NoRegister()
	{
		return UState_GameModePlayerMovement::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModePlayerMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedCase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModePlayerMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModePlayerMovement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModePlayerMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModePlayerMovement_Statics::NewProp_SelectedCase_MetaData[] = {
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UState_GameModePlayerMovement_Statics::NewProp_SelectedCase = { "SelectedCase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UState_GameModePlayerMovement, SelectedCase), Z_Construct_UClass_AGridCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModePlayerMovement_Statics::NewProp_SelectedCase_MetaData), Z_Construct_UClass_UState_GameModePlayerMovement_Statics::NewProp_SelectedCase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UState_GameModePlayerMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UState_GameModePlayerMovement_Statics::NewProp_SelectedCase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModePlayerMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModePlayerMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModePlayerMovement_Statics::ClassParams = {
		&UState_GameModePlayerMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UState_GameModePlayerMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModePlayerMovement_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModePlayerMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModePlayerMovement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModePlayerMovement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UState_GameModePlayerMovement()
	{
		if (!Z_Registration_Info_UClass_UState_GameModePlayerMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModePlayerMovement.OuterSingleton, Z_Construct_UClass_UState_GameModePlayerMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModePlayerMovement.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModePlayerMovement>()
	{
		return UState_GameModePlayerMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModePlayerMovement);
	UState_GameModePlayerMovement::~UState_GameModePlayerMovement() {}
	void UState_GameModeCaseEffect::StaticRegisterNativesUState_GameModeCaseEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModeCaseEffect);
	UClass* Z_Construct_UClass_UState_GameModeCaseEffect_NoRegister()
	{
		return UState_GameModeCaseEffect::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModeCaseEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NextStateClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModeCaseEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeCaseEffect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeCaseEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeCaseEffect_Statics::NewProp_NextStateClass_MetaData[] = {
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UState_GameModeCaseEffect_Statics::NewProp_NextStateClass = { "NextStateClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UState_GameModeCaseEffect, NextStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UState_GameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeCaseEffect_Statics::NewProp_NextStateClass_MetaData), Z_Construct_UClass_UState_GameModeCaseEffect_Statics::NewProp_NextStateClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UState_GameModeCaseEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UState_GameModeCaseEffect_Statics::NewProp_NextStateClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModeCaseEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModeCaseEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModeCaseEffect_Statics::ClassParams = {
		&UState_GameModeCaseEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UState_GameModeCaseEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeCaseEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeCaseEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModeCaseEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeCaseEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UState_GameModeCaseEffect()
	{
		if (!Z_Registration_Info_UClass_UState_GameModeCaseEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModeCaseEffect.OuterSingleton, Z_Construct_UClass_UState_GameModeCaseEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModeCaseEffect.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModeCaseEffect>()
	{
		return UState_GameModeCaseEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModeCaseEffect);
	UState_GameModeCaseEffect::~UState_GameModeCaseEffect() {}
	void UState_GameModeEnemyMovement::StaticRegisterNativesUState_GameModeEnemyMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModeEnemyMovement);
	UClass* Z_Construct_UClass_UState_GameModeEnemyMovement_NoRegister()
	{
		return UState_GameModeEnemyMovement::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModeEnemyMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModeEnemyMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::ClassParams = {
		&UState_GameModeEnemyMovement::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UState_GameModeEnemyMovement()
	{
		if (!Z_Registration_Info_UClass_UState_GameModeEnemyMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModeEnemyMovement.OuterSingleton, Z_Construct_UClass_UState_GameModeEnemyMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModeEnemyMovement.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModeEnemyMovement>()
	{
		return UState_GameModeEnemyMovement::StaticClass();
	}
	UState_GameModeEnemyMovement::UState_GameModeEnemyMovement() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModeEnemyMovement);
	UState_GameModeEnemyMovement::~UState_GameModeEnemyMovement() {}
	void UState_GameModeEndTurn::StaticRegisterNativesUState_GameModeEndTurn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModeEndTurn);
	UClass* Z_Construct_UClass_UState_GameModeEndTurn_NoRegister()
	{
		return UState_GameModeEndTurn::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModeEndTurn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModeEndTurn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEndTurn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeEndTurn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModeEndTurn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModeEndTurn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModeEndTurn_Statics::ClassParams = {
		&UState_GameModeEndTurn::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEndTurn_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModeEndTurn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UState_GameModeEndTurn()
	{
		if (!Z_Registration_Info_UClass_UState_GameModeEndTurn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModeEndTurn.OuterSingleton, Z_Construct_UClass_UState_GameModeEndTurn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModeEndTurn.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModeEndTurn>()
	{
		return UState_GameModeEndTurn::StaticClass();
	}
	UState_GameModeEndTurn::UState_GameModeEndTurn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModeEndTurn);
	UState_GameModeEndTurn::~UState_GameModeEndTurn() {}
	void UState_GameModeEndGame::StaticRegisterNativesUState_GameModeEndGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UState_GameModeEndGame);
	UClass* Z_Construct_UClass_UState_GameModeEndGame_NoRegister()
	{
		return UState_GameModeEndGame::StaticClass();
	}
	struct Z_Construct_UClass_UState_GameModeEndGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_GameModeEndGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UState_GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEndGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_GameModeEndGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State.h" },
		{ "ModuleRelativePath", "State.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_GameModeEndGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState_GameModeEndGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UState_GameModeEndGame_Statics::ClassParams = {
		&UState_GameModeEndGame::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UState_GameModeEndGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UState_GameModeEndGame_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UState_GameModeEndGame()
	{
		if (!Z_Registration_Info_UClass_UState_GameModeEndGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UState_GameModeEndGame.OuterSingleton, Z_Construct_UClass_UState_GameModeEndGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UState_GameModeEndGame.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UState_GameModeEndGame>()
	{
		return UState_GameModeEndGame::StaticClass();
	}
	UState_GameModeEndGame::UState_GameModeEndGame() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState_GameModeEndGame);
	UState_GameModeEndGame::~UState_GameModeEndGame() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_State_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_State_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UState, UState::StaticClass, TEXT("UState"), &Z_Registration_Info_UClass_UState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState), 838781463U) },
		{ Z_Construct_UClass_UState_GameMode, UState_GameMode::StaticClass, TEXT("UState_GameMode"), &Z_Registration_Info_UClass_UState_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameMode), 2884070091U) },
		{ Z_Construct_UClass_UState_GameModeInputWait, UState_GameModeInputWait::StaticClass, TEXT("UState_GameModeInputWait"), &Z_Registration_Info_UClass_UState_GameModeInputWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModeInputWait), 1575741558U) },
		{ Z_Construct_UClass_UState_GameModePlayerMovement, UState_GameModePlayerMovement::StaticClass, TEXT("UState_GameModePlayerMovement"), &Z_Registration_Info_UClass_UState_GameModePlayerMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModePlayerMovement), 565850382U) },
		{ Z_Construct_UClass_UState_GameModeCaseEffect, UState_GameModeCaseEffect::StaticClass, TEXT("UState_GameModeCaseEffect"), &Z_Registration_Info_UClass_UState_GameModeCaseEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModeCaseEffect), 3654658877U) },
		{ Z_Construct_UClass_UState_GameModeEnemyMovement, UState_GameModeEnemyMovement::StaticClass, TEXT("UState_GameModeEnemyMovement"), &Z_Registration_Info_UClass_UState_GameModeEnemyMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModeEnemyMovement), 784904336U) },
		{ Z_Construct_UClass_UState_GameModeEndTurn, UState_GameModeEndTurn::StaticClass, TEXT("UState_GameModeEndTurn"), &Z_Registration_Info_UClass_UState_GameModeEndTurn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModeEndTurn), 1990005972U) },
		{ Z_Construct_UClass_UState_GameModeEndGame, UState_GameModeEndGame::StaticClass, TEXT("UState_GameModeEndGame"), &Z_Registration_Info_UClass_UState_GameModeEndGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UState_GameModeEndGame), 1945520590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_State_h_2063872145(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_State_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
