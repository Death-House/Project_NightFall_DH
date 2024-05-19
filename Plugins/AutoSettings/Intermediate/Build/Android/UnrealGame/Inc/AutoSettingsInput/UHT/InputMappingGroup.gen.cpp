// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingGroup.h"
#include "AutoSettingsInput/Public/KeyMappingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingGroup() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FInputMappingGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingGroup;
class UScriptStruct* FInputMappingGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingGroup, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("InputMappingGroup"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingGroup.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FInputMappingGroup>()
{
	return FInputMappingGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMappingGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An input mapping group represents a set of mappings for which each action or axis has a single binding\n// Each action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\n// It's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\n// It's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "ToolTip", "An input mapping group represents a set of mappings for which each action or axis has a single binding\nEach action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\nIt's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\nIt's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Action mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "TitleProperty", "ActionName" },
		{ "ToolTip", "Action mappings in this group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Axis mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "TitleProperty", "AxisName" },
		{ "ToolTip", "Axis mappings in this group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnboundActionMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnboundAxisMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnboundActionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnboundActionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnboundAxisMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnboundAxisMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 553975206
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingGroup, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMappings_MetaData), NewProp_ActionMappings_MetaData) }; // 553975206
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 1440314260
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingGroup, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisMappings_MetaData), NewProp_AxisMappings_MetaData) }; // 1440314260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 553975206
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnboundActionMappings_MetaData), NewProp_UnboundActionMappings_MetaData) }; // 553975206
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 1440314260
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundAxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnboundAxisMappings_MetaData), NewProp_UnboundAxisMappings_MetaData) }; // 1440314260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"InputMappingGroup",
	Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers),
	sizeof(FInputMappingGroup),
	alignof(FInputMappingGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingGroup.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMappingGroup.InnerSingleton;
}
// End ScriptStruct FInputMappingGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingGroup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputMappingGroup::StaticStruct, Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewStructOps, TEXT("InputMappingGroup"), &Z_Registration_Info_UScriptStruct_InputMappingGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingGroup), 841994212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingGroup_h_250113126(TEXT("/Script/AutoSettingsInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingGroup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingGroup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
