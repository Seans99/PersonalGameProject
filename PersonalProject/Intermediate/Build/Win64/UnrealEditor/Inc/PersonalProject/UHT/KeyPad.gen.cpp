// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Actors/KeyPad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyPad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class AKeyPad
void AKeyPad::StaticRegisterNativesAKeyPad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyPad);
UClass* Z_Construct_UClass_AKeyPad_NoRegister()
{
	return AKeyPad::StaticClass();
}
struct Z_Construct_UClass_AKeyPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/KeyPad.h" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPadMesh_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt0_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt1_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt2_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt3_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt4_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt5_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt6_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt7_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt8_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt9_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPadScreen_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPadMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt5;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt6;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt7;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt8;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt9;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPadScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadMesh = { "KeyPadMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPadMesh_MetaData), NewProp_KeyPadMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt0 = { "KeyPrompt0", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt0), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt0_MetaData), NewProp_KeyPrompt0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt1 = { "KeyPrompt1", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt1), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt1_MetaData), NewProp_KeyPrompt1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt2 = { "KeyPrompt2", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt2), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt2_MetaData), NewProp_KeyPrompt2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt3 = { "KeyPrompt3", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt3), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt3_MetaData), NewProp_KeyPrompt3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt4 = { "KeyPrompt4", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt4), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt4_MetaData), NewProp_KeyPrompt4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt5 = { "KeyPrompt5", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt5), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt5_MetaData), NewProp_KeyPrompt5_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt6 = { "KeyPrompt6", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt6), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt6_MetaData), NewProp_KeyPrompt6_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt7 = { "KeyPrompt7", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt7), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt7_MetaData), NewProp_KeyPrompt7_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt8 = { "KeyPrompt8", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt8), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt8_MetaData), NewProp_KeyPrompt8_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt9 = { "KeyPrompt9", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt9), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt9_MetaData), NewProp_KeyPrompt9_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadScreen = { "KeyPadScreen", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPadScreen), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPadScreen_MetaData), NewProp_KeyPadScreen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeyPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyPad_Statics::ClassParams = {
	&AKeyPad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKeyPad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyPad()
{
	if (!Z_Registration_Info_UClass_AKeyPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyPad.OuterSingleton, Z_Construct_UClass_AKeyPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyPad.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<AKeyPad>()
{
	return AKeyPad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyPad);
AKeyPad::~AKeyPad() {}
// End Class AKeyPad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyPad, AKeyPad::StaticClass, TEXT("AKeyPad"), &Z_Registration_Info_UClass_AKeyPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyPad), 2303381843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_1162792653(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
