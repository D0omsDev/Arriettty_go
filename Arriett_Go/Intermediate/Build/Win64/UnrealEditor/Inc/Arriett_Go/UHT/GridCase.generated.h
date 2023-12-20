// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridCase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARRIETT_GO_GridCase_generated_h
#error "GridCase.generated.h already included, missing '#pragma once' in GridCase.h"
#endif
#define ARRIETT_GO_GridCase_generated_h

#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_SPARSE_DATA
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_ACCESSORS
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridCase(); \
	friend struct Z_Construct_UClass_AGridCase_Statics; \
public: \
	DECLARE_CLASS(AGridCase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arriett_Go"), NO_API) \
	DECLARE_SERIALIZER(AGridCase)


#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridCase(AGridCase&&); \
	NO_API AGridCase(const AGridCase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridCase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridCase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridCase) \
	NO_API virtual ~AGridCase();


#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_17_PROLOG
#define FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_SPARSE_DATA \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_ACCESSORS \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARRIETT_GO_API UClass* StaticClass<class AGridCase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_GridCase_h


#define FOREACH_ENUM_ECASECOLOR(op) \
	op(ECaseColor::CaseColor_Black) \
	op(ECaseColor::CaseColor_Red) \
	op(ECaseColor::CaseColor_Blue) \
	op(ECaseColor::CaseColor_Green) \
	op(ECaseColor::CaseColor_Yellow) 

enum class ECaseColor : uint8;
template<> struct TIsUEnumClass<ECaseColor> { enum { Value = true }; };
template<> ARRIETT_GO_API UEnum* StaticEnum<ECaseColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
