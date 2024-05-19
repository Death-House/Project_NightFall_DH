// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingLayout.h"
#include "AutoSettingsInput/Public/InputMappingGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingLayout() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FInputMappingLayout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingLayout;
class UScriptStruct* FInputMappingLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingLayout, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("InputMappingLayout"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingLayout.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FInputMappingLayout>()
{
	return FInputMappingLayout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMappingLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputMappingLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "EditCondition", "!bUseDefaultMappings" },
		{ "ModuleRelativePath", "Public/InputMappingLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingGroup, METADATA_PARAMS(0, nullptr) }; // 841994212
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingLayout, MappingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroups_MetaData), NewProp_MappingGroups_MetaData) }; // 841994212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"InputMappingLayout",
	Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers),
	sizeof(FInputMappingLayout),
	alignof(FInputMappingLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingLayout.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMappingLayout.InnerSingleton;
}
// End ScriptStruct FInputMappingLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingLayout_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputMappingLayout::StaticStruct, Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewStructOps, TEXT("InputMappingLayout"), &Z_Registration_Info_UScriptStruct_InputMappingLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingLayout), 1127063604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingLayout_h_2320798520(TEXT("/Script/AutoSettingsInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingLayout_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingLayout_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
