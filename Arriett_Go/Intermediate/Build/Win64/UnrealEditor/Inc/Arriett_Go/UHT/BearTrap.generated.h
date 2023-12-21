// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cases/EffectCases/BearTrap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRIETT_GO_BearTrap_generated_h
#error "BearTrap.generated.h already included, missing '#pragma once' in BearTrap.h"
#endif
#define ARRIETT_GO_BearTrap_generated_h

#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_SPARSE_DATA
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABearTrap(); \
	friend struct Z_Construct_UClass_ABearTrap_Statics; \
public: \
	DECLARE_CLASS(ABearTrap, AEffectGridCase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), NO_API) \
	DECLARE_SERIALIZER(ABearTrap)


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABearTrap(ABearTrap&&); \
	NO_API ABearTrap(const ABearTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABearTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABearTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABearTrap) \
	NO_API virtual ~ABearTrap();


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_23_PROLOG
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_SPARSE_DATA \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class ABearTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Cases_EffectCases_BearTrap_h


#define FOREACH_ENUM_ETRAPSTATE(op) \
	op(ETrapState::Idle) \
	op(ETrapState::FirstTrigger) \
	op(ETrapState::Prepared) \
	op(ETrapState::Active) \
	op(ETrapState::Disabled) 

enum class ETrapState : uint8;
template<> struct TIsUEnumClass<ETrapState> { enum { Value = true }; };
template<> ARRIETT_GO_API UEnum* StaticEnum<ETrapState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
