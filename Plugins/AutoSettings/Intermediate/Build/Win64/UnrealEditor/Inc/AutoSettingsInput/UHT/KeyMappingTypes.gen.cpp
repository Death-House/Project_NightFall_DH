// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/KeyMappingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMappingTypes() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FConfigActionKeyMapping
static_assert(std::is_polymorphic<FConfigActionKeyMapping>() == std::is_polymorphic<FInputActionKeyMapping>(), "USTRUCT FConfigActionKeyMapping cannot be polymorphic unless super FInputActionKeyMapping is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping;
class UScriptStruct* FConfigActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("ConfigActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FConfigActionKeyMapping>()
{
	return FConfigActionKeyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Sadly the mapping names aren't editable in config unless using these child classes\n// Config editable action mapping\n" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "Sadly the mapping names aren't editable in config unless using these child classes\nConfig editable action mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if this mapping was using the default key from the base preset at the time it was saved\n\x09 * This allows us to keep it in sync if the default mapping is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "True if this mapping was using the default key from the base preset at the time it was saved\nThis allows us to keep it in sync if the default mapping is changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigActionKeyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_SetBit(void* Obj)
{
	((FConfigActionKeyMapping*)Obj)->bIsDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConfigActionKeyMapping), &Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefault_MetaData), NewProp_bIsDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	Z_Construct_UScriptStruct_FInputActionKeyMapping,
	&NewStructOps,
	"ConfigActionKeyMapping",
	Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers),
	sizeof(FConfigActionKeyMapping),
	alignof(FConfigActionKeyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping.InnerSingleton;
}
// End ScriptStruct FConfigActionKeyMapping

// Begin ScriptStruct FConfigAxisKeyMapping
static_assert(std::is_polymorphic<FConfigAxisKeyMapping>() == std::is_polymorphic<FInputAxisKeyMapping>(), "USTRUCT FConfigAxisKeyMapping cannot be polymorphic unless super FInputAxisKeyMapping is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping;
class UScriptStruct* FConfigAxisKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigAxisKeyMapping, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("ConfigAxisKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FConfigAxisKeyMapping>()
{
	return FConfigAxisKeyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Config editable axis mapping\n" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "Config editable axis mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if this mapping was using the default key from the base preset at the time it was saved\n\x09 * This allows us to keep it in sync if the default mapping is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "True if this mapping was using the default key from the base preset at the time it was saved\nThis allows us to keep it in sync if the default mapping is changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigAxisKeyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_SetBit(void* Obj)
{
	((FConfigAxisKeyMapping*)Obj)->bIsDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConfigAxisKeyMapping), &Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefault_MetaData), NewProp_bIsDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	Z_Construct_UScriptStruct_FInputAxisKeyMapping,
	&NewStructOps,
	"ConfigAxisKeyMapping",
	Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers),
	sizeof(FConfigAxisKeyMapping),
	alignof(FConfigAxisKeyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping.InnerSingleton;
}
// End ScriptStruct FConfigAxisKeyMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_KeyMappingTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConfigActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewStructOps, TEXT("ConfigActionKeyMapping"), &Z_Registration_Info_UScriptStruct_ConfigActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfigActionKeyMapping), 553975206U) },
		{ FConfigAxisKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewStructOps, TEXT("ConfigAxisKeyMapping"), &Z_Registration_Info_UScriptStruct_ConfigAxisKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfigAxisKeyMapping), 1440314260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_KeyMappingTypes_h_1924227081(TEXT("/Script/AutoSettingsInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_KeyMappingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_KeyMappingTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
