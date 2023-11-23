// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arriett_Go/TurnNumber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnNumber() {}
// Cross Module References
	ARRIETT_GO_API UClass* Z_Construct_UClass_AArriett_GoGameMode_NoRegister();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UTurnNumber();
	ARRIETT_GO_API UClass* Z_Construct_UClass_UTurnNumber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Arriett_Go();
// End Cross Module References
	void UTurnNumber::StaticRegisterNativesUTurnNumber()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnNumber);
	UClass* Z_Construct_UClass_UTurnNumber_NoRegister()
	{
		return UTurnNumber::StaticClass();
	}
	struct Z_Construct_UClass_UTurnNumber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnNumberText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnNumberText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A_GameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnNumber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arriett_Go,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNumber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TurnNumber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TurnNumber.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNumber_Statics::NewProp_TurnNumberText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnNumber" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnNumber.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnNumber_Statics::NewProp_TurnNumberText = { "TurnNumberText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnNumber, TurnNumberText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::NewProp_TurnNumberText_MetaData), Z_Construct_UClass_UTurnNumber_Statics::NewProp_TurnNumberText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNumber_Statics::NewProp_A_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "TurnNumber.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnNumber_Statics::NewProp_A_GameMode = { "A_GameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnNumber, A_GameMode), Z_Construct_UClass_AArriett_GoGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::NewProp_A_GameMode_MetaData), Z_Construct_UClass_UTurnNumber_Statics::NewProp_A_GameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnNumber_Statics::NewProp_TurnNumberText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnNumber_Statics::NewProp_A_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnNumber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnNumber>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnNumber_Statics::ClassParams = {
		&UTurnNumber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurnNumber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnNumber_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNumber_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTurnNumber()
	{
		if (!Z_Registration_Info_UClass_UTurnNumber.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnNumber.OuterSingleton, Z_Construct_UClass_UTurnNumber_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnNumber.OuterSingleton;
	}
	template<> ARRIETT_GO_API UClass* StaticClass<UTurnNumber>()
	{
		return UTurnNumber::StaticClass();
	}
	UTurnNumber::UTurnNumber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnNumber);
	UTurnNumber::~UTurnNumber() {}
	struct Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_TurnNumber_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_TurnNumber_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnNumber, UTurnNumber::StaticClass, TEXT("UTurnNumber"), &Z_Registration_Info_UClass_UTurnNumber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnNumber), 2076334689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_TurnNumber_h_3116419537(TEXT("/Script/Arriett_Go"),
		Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_TurnNumber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mykud_Desktop_Cours_Arriettty_go_Arriett_Go_Source_Arriett_Go_TurnNumber_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
