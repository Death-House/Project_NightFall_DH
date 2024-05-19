// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#include "AutoSettingsInput/Public/InputMappingGroup.h"
#include "AutoSettingsInput/Public/InputMappingLayout.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingPreset() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FInputMappingPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingPreset;
class UScriptStruct* FInputMappingPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingPreset, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("InputMappingPreset"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingPreset.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FInputMappingPreset>()
{
	return FInputMappingPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMappingPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A complete set of input mappings making up a preset\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "A complete set of input mappings making up a preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetTag_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// Tag for this preset\n" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "Tag for this preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultMappings_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// If true, use default mappings defined in Input page in project settings\n" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "If true, use default mappings defined in Input page in project settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputLayout_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// Input mappings for this preset if not using default mappings\n" },
		{ "EditCondition", "!bUseDefaultMappings" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "Input mappings for this preset if not using default mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetTag;
	static void NewProp_bUseDefaultMappings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag = { "PresetTag", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingPreset, PresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetTag_MetaData), NewProp_PresetTag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_SetBit(void* Obj)
{
	((FInputMappingPreset*)Obj)->bUseDefaultMappings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings = { "bUseDefaultMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputMappingPreset), &Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultMappings_MetaData), NewProp_bUseDefaultMappings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout = { "InputLayout", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingPreset, InputLayout), Z_Construct_UScriptStruct_FInputMappingLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputLayout_MetaData), NewProp_InputLayout_MetaData) }; // 1127063604
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingGroup, METADATA_PARAMS(0, nullptr) }; // 841994212
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingPreset, MappingGroups_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroups_MetaData), NewProp_MappingGroups_MetaData) }; // 841994212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"InputMappingPreset",
	Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers),
	sizeof(FInputMappingPreset),
	alignof(FInputMappingPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingPreset.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMappingPreset.InnerSingleton;
}
// End ScriptStruct FInputMappingPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingPreset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputMappingPreset::StaticStruct, Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewStructOps, TEXT("InputMappingPreset"), &Z_Registration_Info_UScriptStruct_InputMappingPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingPreset), 548858416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingPreset_h_3314586387(TEXT("/Script/AutoSettingsInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingPreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingPreset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
