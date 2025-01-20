// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonalProject_init() {}
	PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature();
	PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_InteractSignature__DelegateSignature();
	PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature();
	PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PersonalProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PersonalProject()
	{
		if (!Z_Registration_Info_UPackage__Script_PersonalProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PersonalProject_HealthCompSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PersonalProject_InteractSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PersonalProject_StaminaCompSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PersonalProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x20349715,
				0xCB6D71CC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PersonalProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PersonalProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PersonalProject(Z_Construct_UPackage__Script_PersonalProject, TEXT("/Script/PersonalProject"), Z_Registration_Info_UPackage__Script_PersonalProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20349715, 0xCB6D71CC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
