// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/PlayerInputMappings.h"
#include "AutoSettingsInput/Public/InputMappingLayout.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInputMappings() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FPlayerInputMappings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInputMappings;
class UScriptStruct* FPlayerInputMappings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputMappings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInputMappings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInputMappings, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("PlayerInputMappings"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputMappings.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FPlayerInputMappings>()
{
	return FPlayerInputMappings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerInputMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Holds saved input mappings for a specific player, as well as if they are custom or from a preset\n// Used to save and load input mapping information\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "Holds saved input mappings for a specific player, as well as if they are custom or from a preset\nUsed to save and load input mapping information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// String to identify the player that owns these mappings\n// Preferably the Unique Net ID of the player, but can fall back to a Controller ID\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "String to identify the player that owns these mappings\nPreferably the Unique Net ID of the player, but can fall back to a Controller ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePresetTag_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Preset that this player's input is based off\n// If empty, default to the first preset found in the config\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "Preset that this player's input is based off\nIf empty, default to the first preset found in the config" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNullBasePreset_MetaData[] = {
		{ "Comment", "// If true, use a null (empty) base preset, regardless of the base preset tag\n// Useful for testing\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "If true, use a null (empty) base preset, regardless of the base preset tag\nUseful for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingOverrides_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Modifications that the player has made to the base preset\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "Modifications that the player has made to the base preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKeyGroup_MetaData[] = {
		{ "Comment", "// Key group used to retrieve active mappings\n// Useful for globally switching prompts between key groups when for example input device is changed\n// See UInputMappingManager::SetPlayerKeyGroupStatic\n" },
		{ "ModuleRelativePath", "Public/PlayerInputMappings.h" },
		{ "ToolTip", "Key group used to retrieve active mappings\nUseful for globally switching prompts between key groups when for example input device is changed\nSee UInputMappingManager::SetPlayerKeyGroupStatic" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePresetTag;
	static void NewProp_bNullBasePreset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNullBasePreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingOverrides;
	static void NewProp_Custom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Custom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerKeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInputMappings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerId_MetaData), NewProp_PlayerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag = { "BasePresetTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, BasePresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePresetTag_MetaData), NewProp_BasePresetTag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_bNullBasePreset_SetBit(void* Obj)
{
	((FPlayerInputMappings*)Obj)->bNullBasePreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_bNullBasePreset = { "bNullBasePreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputMappings), &Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_bNullBasePreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNullBasePreset_MetaData), NewProp_bNullBasePreset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides = { "MappingOverrides", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, MappingOverrides), Z_Construct_UScriptStruct_FInputMappingLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingOverrides_MetaData), NewProp_MappingOverrides_MetaData) }; // 1127063604
void Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_SetBit(void* Obj)
{
	((FPlayerInputMappings*)Obj)->Custom_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputMappings), &Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Custom_MetaData), NewProp_Custom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, Preset_DEPRECATED), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 548858416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup = { "PlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerKeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerKeyGroup_MetaData), NewProp_PlayerKeyGroup_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_bNullBasePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"PlayerInputMappings",
	Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers),
	sizeof(FPlayerInputMappings),
	alignof(FPlayerInputMappings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputMappings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInputMappings.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputMappings.InnerSingleton;
}
// End ScriptStruct FPlayerInputMappings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_PlayerInputMappings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerInputMappings::StaticStruct, Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewStructOps, TEXT("PlayerInputMappings"), &Z_Registration_Info_UScriptStruct_PlayerInputMappings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInputMappings), 4017813671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_PlayerInputMappings_h_1292160914(TEXT("/Script/AutoSettingsInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_PlayerInputMappings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_PlayerInputMappings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
