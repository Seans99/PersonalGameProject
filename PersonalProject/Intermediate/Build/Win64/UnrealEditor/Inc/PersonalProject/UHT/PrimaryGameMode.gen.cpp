// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/PrimaryGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameMode();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameMode_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UTitleScreen_NoRegister();
PERSONALPROJECT_API UEnum* Z_Construct_UEnum_PersonalProject_EGameState();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PersonalProject_EGameState, (UObject*)Z_Construct_UPackage__Script_PersonalProject(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> PERSONALPROJECT_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_PersonalProject_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGameOver.DisplayName", "Game Over" },
		{ "EGameOver.Name", "EGameState::EGameOver" },
		{ "EInGame.DisplayName", "In Game" },
		{ "EInGame.Name", "EGameState::EInGame" },
		{ "EPause.DisplayName", "Pause" },
		{ "EPause.Name", "EGameState::EPause" },
		{ "ETitleScreen.DisplayName", "TitleScreen" },
		{ "ETitleScreen.Name", "EGameState::ETitleScreen" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::ETitleScreen", (int64)EGameState::ETitleScreen },
		{ "EGameState::EInGame", (int64)EGameState::EInGame },
		{ "EGameState::EPause", (int64)EGameState::EPause },
		{ "EGameState::EGameOver", (int64)EGameState::EGameOver },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PersonalProject_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PersonalProject,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_PersonalProject_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PersonalProject_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PersonalProject_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PersonalProject_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PersonalProject_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_PersonalProject_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Class APrimaryGameMode
void APrimaryGameMode::StaticRegisterNativesAPrimaryGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryGameMode);
UClass* Z_Construct_UClass_APrimaryGameMode_NoRegister()
{
	return APrimaryGameMode::StaticClass();
}
struct Z_Construct_UClass_APrimaryGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrimarySystems/PrimaryGameMode.h" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
		{ "Category", "PrimaryGameMode" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleScreenLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level1_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleScreenWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleScreenWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleScreenLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Level1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TitleScreenWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleScreenWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_bDebugMode_SetBit(void* Obj)
{
	((APrimaryGameMode*)Obj)->bDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APrimaryGameMode), &Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugMode_MetaData), NewProp_bDebugMode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenLevel = { "TitleScreenLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrimaryGameMode, TitleScreenLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleScreenLevel_MetaData), NewProp_TitleScreenLevel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_Level1 = { "Level1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrimaryGameMode, Level1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level1_MetaData), NewProp_Level1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenWidgetClass = { "TitleScreenWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrimaryGameMode, TitleScreenWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTitleScreen_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleScreenWidgetClass_MetaData), NewProp_TitleScreenWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenWidget = { "TitleScreenWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrimaryGameMode, TitleScreenWidget), Z_Construct_UClass_UTitleScreen_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleScreenWidget_MetaData), NewProp_TitleScreenWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrimaryGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_bDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_Level1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryGameMode_Statics::NewProp_TitleScreenWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APrimaryGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryGameMode_Statics::ClassParams = {
	&APrimaryGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APrimaryGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryGameMode()
{
	if (!Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton, Z_Construct_UClass_APrimaryGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryGameMode>()
{
	return APrimaryGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryGameMode);
APrimaryGameMode::~APrimaryGameMode() {}
// End Class APrimaryGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 685128169U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryGameMode, APrimaryGameMode::StaticClass, TEXT("APrimaryGameMode"), &Z_Registration_Info_UClass_APrimaryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryGameMode), 4263900750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_2386096995(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
