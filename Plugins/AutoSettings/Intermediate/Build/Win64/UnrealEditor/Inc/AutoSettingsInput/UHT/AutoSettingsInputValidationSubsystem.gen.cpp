// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Private/Misc/AutoSettingsInputValidationSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputValidationSubsystem() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UAutoSettingsInputValidationSubsystem
void UAutoSettingsInputValidationSubsystem::StaticRegisterNativesUAutoSettingsInputValidationSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsInputValidationSubsystem);
UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_NoRegister()
{
	return UAutoSettingsInputValidationSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/AutoSettingsInputValidationSubsystem.h" },
		{ "ModuleRelativePath", "Private/Misc/AutoSettingsInputValidationSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputValidationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::ClassParams = {
	&UAutoSettingsInputValidationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsInputValidationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsInputValidationSubsystem.OuterSingleton, Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsInputValidationSubsystem.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputValidationSubsystem>()
{
	return UAutoSettingsInputValidationSubsystem::StaticClass();
}
UAutoSettingsInputValidationSubsystem::UAutoSettingsInputValidationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputValidationSubsystem);
UAutoSettingsInputValidationSubsystem::~UAutoSettingsInputValidationSubsystem() {}
// End Class UAutoSettingsInputValidationSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Private_Misc_AutoSettingsInputValidationSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsInputValidationSubsystem, UAutoSettingsInputValidationSubsystem::StaticClass, TEXT("UAutoSettingsInputValidationSubsystem"), &Z_Registration_Info_UClass_UAutoSettingsInputValidationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsInputValidationSubsystem), 1588574202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Private_Misc_AutoSettingsInputValidationSubsystem_h_1276053217(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Private_Misc_AutoSettingsInputValidationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Private_Misc_AutoSettingsInputValidationSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
