// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Components/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UHealthComponent();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Delegate FHealthCompSignature
struct Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PersonalProject, nullptr, "HealthCompSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHealthCompSignature_DelegateWrapper(const FMulticastScriptDelegate& HealthCompSignature)
{
	HealthCompSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHealthCompSignature

// Begin Class UHealthComponent
void UHealthComponent::StaticRegisterNativesUHealthComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
{
	return UHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDamage_MetaData[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamage = { "OnDamage", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnDamage), Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDamage_MetaData), NewProp_OnDamage_MetaData) }; // 2195131853
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnDeath), Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 2195131853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
	&UHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponent()
{
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UHealthComponent>()
{
	return UHealthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// End Class UHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_HealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 2457164184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_HealthComponent_h_3205928433(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Components_HealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
