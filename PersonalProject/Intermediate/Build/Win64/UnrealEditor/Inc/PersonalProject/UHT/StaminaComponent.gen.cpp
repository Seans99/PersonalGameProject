// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Components/StaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UStaminaComponent();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Delegate FStaminaCompSignature
struct Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PersonalProject, nullptr, "StaminaCompSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStaminaCompSignature_DelegateWrapper(const FMulticastScriptDelegate& StaminaCompSignature)
{
	StaminaCompSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FStaminaCompSignature

// Begin Class UStaminaComponent
void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaComponent);
UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
{
	return UStaminaComponent::StaticClass();
}
struct Z_Construct_UClass_UStaminaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StaminaComponent.h" },
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "StaminaComponent" },
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "StaminaComponent" },
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingStamina_MetaData[] = {
		{ "Category", "StaminaComponent" },
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaLoss_MetaData[] = {
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaRegain_MetaData[] = {
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaDepleted_MetaData[] = {
		{ "ModuleRelativePath", "Components/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStamina;
	static void NewProp_bIsUsingStamina_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingStamina;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaLoss;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaRegain;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaDepleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
void Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsUsingStamina_SetBit(void* Obj)
{
	((UStaminaComponent*)Obj)->bIsUsingStamina = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsUsingStamina = { "bIsUsingStamina", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStaminaComponent), &Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsUsingStamina_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsingStamina_MetaData), NewProp_bIsUsingStamina_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaLoss = { "OnStaminaLoss", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, OnStaminaLoss), Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaLoss_MetaData), NewProp_OnStaminaLoss_MetaData) }; // 4248527717
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaRegain = { "OnStaminaRegain", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, OnStaminaRegain), Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaRegain_MetaData), NewProp_OnStaminaRegain_MetaData) }; // 4248527717
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaDepleted = { "OnStaminaDepleted", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, OnStaminaDepleted), Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaDepleted_MetaData), NewProp_OnStaminaDepleted_MetaData) }; // 4248527717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsUsingStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaRegain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_OnStaminaDepleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
	&UStaminaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaminaComponent()
{
	if (!Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UStaminaComponent>()
{
	return UStaminaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
UStaminaComponent::~UStaminaComponent() {}
// End Class UStaminaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_StaminaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaComponent, UStaminaComponent::StaticClass, TEXT("UStaminaComponent"), &Z_Registration_Info_UClass_UStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaComponent), 3459777232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_StaminaComponent_h_1321745229(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_StaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_StaminaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
