// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawns/GamePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRIETT_GO_GamePawn_generated_h
#error "GamePawn.generated.h already included, missing '#pragma once' in GamePawn.h"
#endif
#define ARRIETT_GO_GamePawn_generated_h

#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_SPARSE_DATA
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeathTimelineFinishedCallback); \
	DECLARE_FUNCTION(execDeathTimelineCallback); \
	DECLARE_FUNCTION(execPlayDeathTimeline); \
	DECLARE_FUNCTION(execTimelineFinishedCallback); \
	DECLARE_FUNCTION(execTimelineCallback);


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_ACCESSORS
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePawn(); \
	friend struct Z_Construct_UClass_AGamePawn_Statics; \
public: \
	DECLARE_CLASS(AGamePawn, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), NO_API) \
	DECLARE_SERIALIZER(AGamePawn)


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePawn(AGamePawn&&); \
	NO_API AGamePawn(const AGamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGamePawn) \
	NO_API virtual ~AGamePawn();


#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_30_PROLOG
#define FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_SPARSE_DATA \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_ACCESSORS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class AGamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Chaperon_rouge_Arriettty_go_Arriett_Go_Source_Arriett_Go_Public_Pawns_GamePawn_h


#define FOREACH_ENUM_EPAWNMOVEMENTTYPE(op) \
	op(EPawnMovementType::PawnMovementType_Travel) \
	op(EPawnMovementType::PawnMovementType_Rotate) \
	op(EPawnMovementType::PawnMovementType_None) 

enum class EPawnMovementType : uint8;
template<> struct TIsUEnumClass<EPawnMovementType> { enum { Value = true }; };
template<> ARRIETT_GO_API UEnum* StaticEnum<EPawnMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
