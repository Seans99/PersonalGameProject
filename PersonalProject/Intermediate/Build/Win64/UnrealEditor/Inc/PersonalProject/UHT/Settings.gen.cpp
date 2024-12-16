// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_USettings();
PERSONALPROJECT_API UClass* Z_Construct_UClass_USettings_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class USettings Function Apply
struct Z_Construct_UFunction_USettings_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "Apply", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_Apply_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Apply();
	P_NATIVE_END;
}
// End Class USettings Function Apply

// Begin Class USettings Function Back
struct Z_Construct_UFunction_USettings_Back_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_Back_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "Back", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_Back_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_Back_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_Back()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_Back_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Back();
	P_NATIVE_END;
}
// End Class USettings Function Back

// Begin Class USettings Function Close
struct Z_Construct_UFunction_USettings_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class USettings Function Close

// Begin Class USettings Function OnDisplayModeChanged
struct Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics
{
	struct Settings_eventOnDisplayModeChanged_Parms
	{
		FString InSelectedItem;
		TEnumAsByte<ESelectInfo::Type> InSelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::NewProp_InSelectedItem = { "InSelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnDisplayModeChanged_Parms, InSelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::NewProp_InSelectionType = { "InSelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnDisplayModeChanged_Parms, InSelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::NewProp_InSelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::NewProp_InSelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "OnDisplayModeChanged", nullptr, nullptr, Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::Settings_eventOnDisplayModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::Settings_eventOnDisplayModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettings_OnDisplayModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_OnDisplayModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execOnDisplayModeChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_InSelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayModeChanged(Z_Param_InSelectedItem,ESelectInfo::Type(Z_Param_InSelectionType));
	P_NATIVE_END;
}
// End Class USettings Function OnDisplayModeChanged

// Begin Class USettings Function OnMasterVolumeChanged
struct Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics
{
	struct Settings_eventOnMasterVolumeChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnMasterVolumeChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "OnMasterVolumeChanged", nullptr, nullptr, Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::Settings_eventOnMasterVolumeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::Settings_eventOnMasterVolumeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettings_OnMasterVolumeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_OnMasterVolumeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execOnMasterVolumeChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMasterVolumeChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USettings Function OnMasterVolumeChanged

// Begin Class USettings Function OnMusicVolumeChanged
struct Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics
{
	struct Settings_eventOnMusicVolumeChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnMusicVolumeChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "OnMusicVolumeChanged", nullptr, nullptr, Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::Settings_eventOnMusicVolumeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::Settings_eventOnMusicVolumeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettings_OnMusicVolumeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_OnMusicVolumeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execOnMusicVolumeChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMusicVolumeChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USettings Function OnMusicVolumeChanged

// Begin Class USettings Function OnResolutionChanged
struct Z_Construct_UFunction_USettings_OnResolutionChanged_Statics
{
	struct Settings_eventOnResolutionChanged_Parms
	{
		FString InSelectedItem;
		TEnumAsByte<ESelectInfo::Type> InSelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::NewProp_InSelectedItem = { "InSelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnResolutionChanged_Parms, InSelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::NewProp_InSelectionType = { "InSelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settings_eventOnResolutionChanged_Parms, InSelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::NewProp_InSelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::NewProp_InSelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "OnResolutionChanged", nullptr, nullptr, Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::Settings_eventOnResolutionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::Settings_eventOnResolutionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettings_OnResolutionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_OnResolutionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execOnResolutionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_InSelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResolutionChanged(Z_Param_InSelectedItem,ESelectInfo::Type(Z_Param_InSelectionType));
	P_NATIVE_END;
}
// End Class USettings Function OnResolutionChanged

// Begin Class USettings Function OnVSyncChanged
struct Z_Construct_UFunction_USettings_OnVSyncChanged_Statics
{
	struct Settings_eventOnVSyncChanged_Parms
	{
		bool bInIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::NewProp_bInIsChecked_SetBit(void* Obj)
{
	((Settings_eventOnVSyncChanged_Parms*)Obj)->bInIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::NewProp_bInIsChecked = { "bInIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settings_eventOnVSyncChanged_Parms), &Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::NewProp_bInIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::NewProp_bInIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "OnVSyncChanged", nullptr, nullptr, Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::Settings_eventOnVSyncChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::Settings_eventOnVSyncChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettings_OnVSyncChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_OnVSyncChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execOnVSyncChanged)
{
	P_GET_UBOOL(Z_Param_bInIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVSyncChanged(Z_Param_bInIsChecked);
	P_NATIVE_END;
}
// End Class USettings Function OnVSyncChanged

// Begin Class USettings Function ShowAccessibilitySettings
struct Z_Construct_UFunction_USettings_ShowAccessibilitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_ShowAccessibilitySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "ShowAccessibilitySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_ShowAccessibilitySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_ShowAccessibilitySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_ShowAccessibilitySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_ShowAccessibilitySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execShowAccessibilitySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAccessibilitySettings();
	P_NATIVE_END;
}
// End Class USettings Function ShowAccessibilitySettings

// Begin Class USettings Function ShowAudioSettings
struct Z_Construct_UFunction_USettings_ShowAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_ShowAudioSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "ShowAudioSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_ShowAudioSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_ShowAudioSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_ShowAudioSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_ShowAudioSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execShowAudioSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAudioSettings();
	P_NATIVE_END;
}
// End Class USettings Function ShowAudioSettings

// Begin Class USettings Function ShowControlsSettings
struct Z_Construct_UFunction_USettings_ShowControlsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_ShowControlsSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "ShowControlsSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_ShowControlsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_ShowControlsSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_ShowControlsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_ShowControlsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execShowControlsSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowControlsSettings();
	P_NATIVE_END;
}
// End Class USettings Function ShowControlsSettings

// Begin Class USettings Function ShowDisplaySettings
struct Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "ShowDisplaySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_ShowDisplaySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execShowDisplaySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDisplaySettings();
	P_NATIVE_END;
}
// End Class USettings Function ShowDisplaySettings

// Begin Class USettings
void USettings::StaticRegisterNativesUSettings()
{
	UClass* Class = USettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &USettings::execApply },
		{ "Back", &USettings::execBack },
		{ "Close", &USettings::execClose },
		{ "OnDisplayModeChanged", &USettings::execOnDisplayModeChanged },
		{ "OnMasterVolumeChanged", &USettings::execOnMasterVolumeChanged },
		{ "OnMusicVolumeChanged", &USettings::execOnMusicVolumeChanged },
		{ "OnResolutionChanged", &USettings::execOnResolutionChanged },
		{ "OnVSyncChanged", &USettings::execOnVSyncChanged },
		{ "ShowAccessibilitySettings", &USettings::execShowAccessibilitySettings },
		{ "ShowAudioSettings", &USettings::execShowAudioSettings },
		{ "ShowControlsSettings", &USettings::execShowControlsSettings },
		{ "ShowDisplaySettings", &USettings::execShowDisplaySettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettings);
UClass* Z_Construct_UClass_USettings_NoRegister()
{
	return USettings::StaticClass();
}
struct Z_Construct_UClass_USettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Settings.h" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImg_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsBackgroundImg_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibilityButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySettings_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsSettings_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibilitySettings_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButtons_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModeComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSyncCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolutions_MetaData[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModes_MetaData[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsBackgroundImg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessibilityButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplaySettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessibilitySettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayModeComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolutionComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSyncCheckBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterVolumeSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicVolumeSlider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Resolutions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayModes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayModes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettings_Apply, "Apply" }, // 487313601
		{ &Z_Construct_UFunction_USettings_Back, "Back" }, // 1190003293
		{ &Z_Construct_UFunction_USettings_Close, "Close" }, // 249359394
		{ &Z_Construct_UFunction_USettings_OnDisplayModeChanged, "OnDisplayModeChanged" }, // 121858667
		{ &Z_Construct_UFunction_USettings_OnMasterVolumeChanged, "OnMasterVolumeChanged" }, // 1553505150
		{ &Z_Construct_UFunction_USettings_OnMusicVolumeChanged, "OnMusicVolumeChanged" }, // 1687306441
		{ &Z_Construct_UFunction_USettings_OnResolutionChanged, "OnResolutionChanged" }, // 1075504879
		{ &Z_Construct_UFunction_USettings_OnVSyncChanged, "OnVSyncChanged" }, // 763715170
		{ &Z_Construct_UFunction_USettings_ShowAccessibilitySettings, "ShowAccessibilitySettings" }, // 2928490662
		{ &Z_Construct_UFunction_USettings_ShowAudioSettings, "ShowAudioSettings" }, // 3036620564
		{ &Z_Construct_UFunction_USettings_ShowControlsSettings, "ShowControlsSettings" }, // 3163461455
		{ &Z_Construct_UFunction_USettings_ShowDisplaySettings, "ShowDisplaySettings" }, // 2872304857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_BackgroundImg = { "BackgroundImg", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, BackgroundImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImg_MetaData), NewProp_BackgroundImg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_SettingsBackgroundImg = { "SettingsBackgroundImg", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, SettingsBackgroundImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsBackgroundImg_MetaData), NewProp_SettingsBackgroundImg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplayButton = { "DisplayButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplayButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayButton_MetaData), NewProp_DisplayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AudioButton = { "AudioButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AudioButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioButton_MetaData), NewProp_AudioButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ControlsButton = { "ControlsButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ControlsButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsButton_MetaData), NewProp_ControlsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AccessibilityButton = { "AccessibilityButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AccessibilityButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibilityButton_MetaData), NewProp_AccessibilityButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, BackButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_CloseBtn = { "CloseBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, CloseBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseBtn_MetaData), NewProp_CloseBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ApplyBtn = { "ApplyBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ApplyBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyBtn_MetaData), NewProp_ApplyBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplaySettings = { "DisplaySettings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplaySettings), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaySettings_MetaData), NewProp_DisplaySettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AudioSettings), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSettings_MetaData), NewProp_AudioSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ControlsSettings = { "ControlsSettings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ControlsSettings), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsSettings_MetaData), NewProp_ControlsSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AccessibilitySettings = { "AccessibilitySettings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AccessibilitySettings), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibilitySettings_MetaData), NewProp_AccessibilitySettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_SettingsButtons = { "SettingsButtons", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, SettingsButtons), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsButtons_MetaData), NewProp_SettingsButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplayModeComboBox = { "DisplayModeComboBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplayModeComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModeComboBox_MetaData), NewProp_DisplayModeComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ResolutionComboBox = { "ResolutionComboBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ResolutionComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionComboBox_MetaData), NewProp_ResolutionComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_VSyncCheckBox = { "VSyncCheckBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, VSyncCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSyncCheckBox_MetaData), NewProp_VSyncCheckBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_MasterVolumeSlider = { "MasterVolumeSlider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, MasterVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolumeSlider_MetaData), NewProp_MasterVolumeSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_MusicVolumeSlider = { "MusicVolumeSlider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, MusicVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolumeSlider_MetaData), NewProp_MusicVolumeSlider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_Resolutions_Inner = { "Resolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_Resolutions = { "Resolutions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, Resolutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolutions_MetaData), NewProp_Resolutions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplayModes_Inner = { "DisplayModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplayModes = { "DisplayModes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplayModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayModes_MetaData), NewProp_DisplayModes_MetaData) }; // 3411615937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_BackgroundImg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_SettingsBackgroundImg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AudioButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ControlsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AccessibilityButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_CloseBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ApplyBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ControlsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AccessibilitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_SettingsButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplayModeComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ResolutionComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_VSyncCheckBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_MasterVolumeSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_MusicVolumeSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_Resolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_Resolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplayModes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplayModes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettings_Statics::ClassParams = {
	&USettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettings()
{
	if (!Z_Registration_Info_UClass_USettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettings.OuterSingleton, Z_Construct_UClass_USettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettings.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<USettings>()
{
	return USettings::StaticClass();
}
USettings::USettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettings);
USettings::~USettings() {}
// End Class USettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettings, USettings::StaticClass, TEXT("USettings"), &Z_Registration_Info_UClass_USettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettings), 1778416336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_2215151127(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
