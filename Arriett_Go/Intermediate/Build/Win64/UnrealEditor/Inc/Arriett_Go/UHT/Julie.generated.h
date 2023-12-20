// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Julie.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRIETT_GO_Julie_generated_h
#error "Julie.generated.h already included, missing '#pragma once' in Julie.h"
#endif
#define ARRIETT_GO_Julie_generated_h

#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_SPARSE_DATA
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_ACCESSORS
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJulie(); \
	friend struct Z_Construct_UClass_AJulie_Statics; \
public: \
	DECLARE_CLASS(AJulie, AGamePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), NO_API) \
	DECLARE_SERIALIZER(AJulie)


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJulie(AJulie&&); \
	NO_API AJulie(const AJulie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJulie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJulie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJulie) \
	NO_API virtual ~AJulie();


#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_24_PROLOG
#define FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_SPARSE_DATA \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_ACCESSORS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class AJulie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucie_Documents_Chaperon_Github_Arriettty_go_Arriett_Go_Source_Arriett_Go_Julie_h


#define FOREACH_ENUM_EJULIEDEATHANIMATION(op) \
	op(EJulieDeathAnimation::JDA_Confetti) \
	op(EJulieDeathAnimation::JDA_Flying) 

enum class EJulieDeathAnimation : uint8;
template<> struct TIsUEnumClass<EJulieDeathAnimation> { enum { Value = true }; };
template<> ARRIETT_GO_API UEnum* StaticEnum<EJulieDeathAnimation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
