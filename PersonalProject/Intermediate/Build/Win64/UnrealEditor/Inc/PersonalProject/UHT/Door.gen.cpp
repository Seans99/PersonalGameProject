// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Actors/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ADoor();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ADoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Door.h" },
		{ "ModuleRelativePath", "Actors/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIslocked_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Actors/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static void NewProp_bIslocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIslocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bIslocked_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIslocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIslocked = { "bIslocked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIslocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIslocked_MetaData), NewProp_bIslocked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIslocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 2421408494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_4212153440(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
