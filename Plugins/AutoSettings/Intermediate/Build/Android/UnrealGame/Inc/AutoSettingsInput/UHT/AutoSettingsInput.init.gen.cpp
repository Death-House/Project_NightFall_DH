// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInput_init() {}
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AutoSettingsInput;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AutoSettingsInput()
	{
		if (!Z_Registration_Info_UPackage__Script_AutoSettingsInput.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AutoSettingsInput",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0243A429,
				0x746B4977,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AutoSettingsInput.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AutoSettingsInput.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AutoSettingsInput(Z_Construct_UPackage__Script_AutoSettingsInput, TEXT("/Script/AutoSettingsInput"), Z_Registration_Info_UPackage__Script_AutoSettingsInput, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0243A429, 0x746B4977));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
