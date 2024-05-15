// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingOption() {}

// Begin Cross Module References
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin ScriptStruct FSettingOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SettingOption;
class UScriptStruct* FSettingOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SettingOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SettingOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingOption, (UObject*)Z_Construct_UPackage__Script_AutoSettings(), TEXT("SettingOption"));
	}
	return Z_Registration_Info_UScriptStruct_SettingOption.OuterSingleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FSettingOption>()
{
	return FSettingOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSettingOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Display label / internal value pair\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Display label / internal value pair" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "// Display label\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Display label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "// Internal value that the console variable will be set to - If blank will use the array index of the element\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Internal value that the console variable will be set to - If blank will use the array index of the element" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettingOption, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettingOption, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	nullptr,
	&NewStructOps,
	"SettingOption",
	Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers),
	sizeof(FSettingOption),
	alignof(FSettingOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSettingOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSettingOption()
{
	if (!Z_Registration_Info_UScriptStruct_SettingOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SettingOption.InnerSingleton, Z_Construct_UScriptStruct_FSettingOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SettingOption.InnerSingleton;
}
// End ScriptStruct FSettingOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOption_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSettingOption::StaticStruct, Z_Construct_UScriptStruct_FSettingOption_Statics::NewStructOps, TEXT("SettingOption"), &Z_Registration_Info_UScriptStruct_SettingOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSettingOption), 3534661630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOption_h_328347253(TEXT("/Script/AutoSettings"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOption_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
