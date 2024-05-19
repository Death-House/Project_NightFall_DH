// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/AutoSettingsConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsConfig() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsConfig();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsConfig_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UAutoSettingsConfig
void UAutoSettingsConfig::StaticRegisterNativesUAutoSettingsConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsConfig);
UClass* Z_Construct_UClass_UAutoSettingsConfig_NoRegister()
{
	return UAutoSettingsConfig::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Plugin configuration page in Project Settings\n" },
		{ "IncludePath", "Misc/AutoSettingsConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Plugin configuration page in Project Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsIniName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Config ini file (without extension) that settings are saved to.\n// Requires engine restart for changes to take effect.\n// Note: Unreal prefers names that contain the string \"user\"\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Config ini file (without extension) that settings are saved to.\nRequires engine restart for changes to take effect.\nNote: Unreal prefers names that contain the string \"user\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSectionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Config section that settings are saved to within the config ini file\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Config section that settings are saved to within the config ini file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SettingsIniName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SettingsSectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName = { "SettingsIniName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsConfig, SettingsIniName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsIniName_MetaData), NewProp_SettingsIniName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName = { "SettingsSectionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsConfig, SettingsSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsSectionName_MetaData), NewProp_SettingsSectionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoSettingsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsConfig_Statics::ClassParams = {
	&UAutoSettingsConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsConfig()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsConfig.OuterSingleton, Z_Construct_UClass_UAutoSettingsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsConfig.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingsConfig>()
{
	return UAutoSettingsConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsConfig);
UAutoSettingsConfig::~UAutoSettingsConfig() {}
// End Class UAutoSettingsConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsConfig, UAutoSettingsConfig::StaticClass, TEXT("UAutoSettingsConfig"), &Z_Registration_Info_UClass_UAutoSettingsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsConfig), 1901791840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_2008971273(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
