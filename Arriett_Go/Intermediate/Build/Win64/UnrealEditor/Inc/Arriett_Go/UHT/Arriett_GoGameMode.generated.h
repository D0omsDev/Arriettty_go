// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Arriett_GoGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridCase;
#ifdef ARRIETT_GO_Arriett_GoGameMode_generated_h
#error "Arriett_GoGameMode.generated.h already included, missing '#pragma once' in Arriett_GoGameMode.h"
#endif
#define ARRIETT_GO_Arriett_GoGameMode_generated_h

#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_SPARSE_DATA
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTemporary_InitLevel2); \
	DECLARE_FUNCTION(execTemporary_InitLevel1); \
	DECLARE_FUNCTION(execGridCasesVerification); \
	DECLARE_FUNCTION(execGridCaseDistance); \
	DECLARE_FUNCTION(execSetGridCase); \
	DECLARE_FUNCTION(execGetGridCase); \
	DECLARE_FUNCTION(execInitGridCases);


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArriett_GoGameMode(); \
	friend struct Z_Construct_UClass_AArriett_GoGameMode_Statics; \
public: \
	DECLARE_CLASS(AArriett_GoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), ARRIETT_GO_API) \
	DECLARE_SERIALIZER(AArriett_GoGameMode)


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARRIETT_GO_API AArriett_GoGameMode(AArriett_GoGameMode&&); \
	ARRIETT_GO_API AArriett_GoGameMode(const AArriett_GoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARRIETT_GO_API, AArriett_GoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArriett_GoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArriett_GoGameMode) \
	ARRIETT_GO_API virtual ~AArriett_GoGameMode();


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_31_PROLOG
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_SPARSE_DATA \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class AArriett_GoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Arriett_GoGameMode_h


#define FOREACH_ENUM_EGAMEMODESTATE(op) \
	op(EGameModeState::WaitForInput) \
	op(EGameModeState::EnemiesActions) \
	op(EGameModeState::EffectGridCasesActions) \
	op(EGameModeState::CheckEndGame) 

enum class EGameModeState : uint8;
template<> struct TIsUEnumClass<EGameModeState> { enum { Value = true }; };
template<> ARRIETT_GO_API UEnum* StaticEnum<EGameModeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
