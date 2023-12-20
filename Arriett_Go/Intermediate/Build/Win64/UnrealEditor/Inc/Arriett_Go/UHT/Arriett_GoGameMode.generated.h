// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Arriett_GoGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRIETT_GO_Arriett_GoGameMode_generated_h
#error "Arriett_GoGameMode.generated.h already included, missing '#pragma once' in Arriett_GoGameMode.h"
#endif
#define ARRIETT_GO_Arriett_GoGameMode_generated_h

#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_SPARSE_DATA
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameModeStateMachine(); \
	friend struct Z_Construct_UClass_UGameModeStateMachine_Statics; \
public: \
	DECLARE_CLASS(UGameModeStateMachine, UFiniteStateMachine, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arriett_Go"), NO_API) \
	DECLARE_SERIALIZER(UGameModeStateMachine)


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameModeStateMachine(UGameModeStateMachine&&); \
	NO_API UGameModeStateMachine(const UGameModeStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameModeStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameModeStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameModeStateMachine) \
	NO_API virtual ~UGameModeStateMachine();


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_22_PROLOG
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_SPARSE_DATA \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class UGameModeStateMachine>();

#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_SPARSE_DATA
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseHandler); \
	DECLARE_FUNCTION(execLoseGame); \
	DECLARE_FUNCTION(execWinGame); \
	DECLARE_FUNCTION(execRestartCurrentLevel); \
	DECLARE_FUNCTION(execGetCollectible); \
	DECLARE_FUNCTION(execSetCollectible); \
	DECLARE_FUNCTION(execAddTurn); \
	DECLARE_FUNCTION(execGetNbTurn); \
	DECLARE_FUNCTION(execSetNbTurn);


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArriett_GoGameMode(); \
	friend struct Z_Construct_UClass_AArriett_GoGameMode_Statics; \
public: \
	DECLARE_CLASS(AArriett_GoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), ARRIETT_GO_API) \
	DECLARE_SERIALIZER(AArriett_GoGameMode)


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARRIETT_GO_API AArriett_GoGameMode(AArriett_GoGameMode&&); \
	ARRIETT_GO_API AArriett_GoGameMode(const AArriett_GoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARRIETT_GO_API, AArriett_GoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArriett_GoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArriett_GoGameMode) \
	ARRIETT_GO_API virtual ~AArriett_GoGameMode();


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_37_PROLOG
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_SPARSE_DATA \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class AArriett_GoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
