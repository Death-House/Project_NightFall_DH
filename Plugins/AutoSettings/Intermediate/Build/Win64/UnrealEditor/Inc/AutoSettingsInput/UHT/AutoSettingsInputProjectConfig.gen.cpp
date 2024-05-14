// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputProjectConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputProjectConfig() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UAutoSettingsInputProjectConfig Function GetKeyFriendlyNameStatic
struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics
{
	struct AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms
	{
		FKey Key;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "// Returns the key group that contains the given key\n" },
		{ "DisplayName", "Get Key Friendly Name" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Returns the key group that contains the given key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "GetKeyFriendlyNameStatic", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execGetKeyFriendlyNameStatic)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UAutoSettingsInputProjectConfig Function GetKeyFriendlyNameStatic

// Begin Class UAutoSettingsInputProjectConfig Function GetKeyGroupStatic
struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics
{
	struct AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms
	{
		FKey Key;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "// Returns the key group that contains the given key\n" },
		{ "DisplayName", "Get Key Group" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Returns the key group that contains the given key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "GetKeyGroupStatic", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execGetKeyGroupStatic)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UAutoSettingsInputProjectConfig::GetKeyGroupStatic(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UAutoSettingsInputProjectConfig Function GetKeyGroupStatic

// Begin Class UAutoSettingsInputProjectConfig Function LoadKeyIcons
struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics
{
	struct AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms
	{
		FGameplayTagContainer KeyIconTags;
		TArray<UTexture*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "/**\n\x09 * Synchronously load all key icon textures in any KeyIconSet(s) with all of the given tags\n\x09 * Returns all textures that were loaded, which should be stored as a variable for as long as the textures need to remain loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Synchronously load all key icon textures in any KeyIconSet(s) with all of the given tags\nReturns all textures that were loaded, which should be stored as a variable for as long as the textures need to remain loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyIconTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_KeyIconTags = { "KeyIconTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms, KeyIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_KeyIconTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "LoadKeyIcons", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execLoadKeyIcons)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_KeyIconTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTexture*>*)Z_Param__Result=UAutoSettingsInputProjectConfig::LoadKeyIcons(Z_Param_KeyIconTags);
	P_NATIVE_END;
}
// End Class UAutoSettingsInputProjectConfig Function LoadKeyIcons

// Begin Class UAutoSettingsInputProjectConfig
void UAutoSettingsInputProjectConfig::StaticRegisterNativesUAutoSettingsInputProjectConfig()
{
	UClass* Class = UAutoSettingsInputProjectConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetKeyFriendlyNameStatic", &UAutoSettingsInputProjectConfig::execGetKeyFriendlyNameStatic },
		{ "GetKeyGroupStatic", &UAutoSettingsInputProjectConfig::execGetKeyGroupStatic },
		{ "LoadKeyIcons", &UAutoSettingsInputProjectConfig::execLoadKeyIcons },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsInputProjectConfig);
UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig_NoRegister()
{
	return UAutoSettingsInputProjectConfig::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Config Subclass used for the page in project settings\n * This is separate to the base class, so that project settings do not affect the default values of the base class objects (which makes them easier to test)\n */" },
		{ "IncludePath", "Misc/AutoSettingsInputProjectConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Config Subclass used for the page in project settings\nThis is separate to the base class, so that project settings do not affect the default values of the base class objects (which makes them easier to test)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic, "GetKeyFriendlyNameStatic" }, // 536576878
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic, "GetKeyGroupStatic" }, // 3901910448
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons, "LoadKeyIcons" }, // 3759785522
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputProjectConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoSettingsInputConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::ClassParams = {
	&UAutoSettingsInputProjectConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsInputProjectConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsInputProjectConfig.OuterSingleton, Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsInputProjectConfig.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputProjectConfig>()
{
	return UAutoSettingsInputProjectConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputProjectConfig);
UAutoSettingsInputProjectConfig::~UAutoSettingsInputProjectConfig() {}
// End Class UAutoSettingsInputProjectConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputProjectConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsInputProjectConfig, UAutoSettingsInputProjectConfig::StaticClass, TEXT("UAutoSettingsInputProjectConfig"), &Z_Registration_Info_UClass_UAutoSettingsInputProjectConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsInputProjectConfig), 740922258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputProjectConfig_h_975833877(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputProjectConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputProjectConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
