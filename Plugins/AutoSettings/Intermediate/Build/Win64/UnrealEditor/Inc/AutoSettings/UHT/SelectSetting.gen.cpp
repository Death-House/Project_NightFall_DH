// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SelectSetting.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister();
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USelectSetting Function RegenerateOptions
struct Z_Construct_UFunction_USelectSetting_RegenerateOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Select Setting" },
		{ "Comment", "/**\n\x09 * Call to trigger re-evaluation of Option Factory and reconstruction of available options\n\x09 * Does not modify the selection even if the selected option is removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Call to trigger re-evaluation of Option Factory and reconstruction of available options\nDoes not modify the selection even if the selected option is removed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectSetting_RegenerateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectSetting, nullptr, "RegenerateOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_RegenerateOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectSetting_RegenerateOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USelectSetting_RegenerateOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectSetting_RegenerateOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USelectSetting::execRegenerateOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateOptions();
	P_NATIVE_END;
}
// End Class USelectSetting Function RegenerateOptions

// Begin Class USelectSetting Function UpdateOptions
struct SelectSetting_eventUpdateOptions_Parms
{
	TArray<FSettingOption> InOptions;
};
static FName NAME_USelectSetting_UpdateOptions = FName(TEXT("UpdateOptions"));
void USelectSetting::UpdateOptions(TArray<FSettingOption> const& InOptions)
{
	SelectSetting_eventUpdateOptions_Parms Parms;
	Parms.InOptions=InOptions;
	ProcessEvent(FindFunctionChecked(NAME_USelectSetting_UpdateOptions),&Parms);
}
struct Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Select Setting" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectSetting_eventUpdateOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptions_MetaData), NewProp_InOptions_MetaData) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectSetting, nullptr, "UpdateOptions", nullptr, nullptr, Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers), sizeof(SelectSetting_eventUpdateOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(SelectSetting_eventUpdateOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USelectSetting_UpdateOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USelectSetting::execUpdateOptions)
{
	P_GET_TARRAY_REF(FSettingOption,Z_Param_Out_InOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateOptions_Implementation(Z_Param_Out_InOptions);
	P_NATIVE_END;
}
// End Class USelectSetting Function UpdateOptions

// Begin Class USelectSetting
void USelectSetting::StaticRegisterNativesUSelectSetting()
{
	UClass* Class = USelectSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegenerateOptions", &USelectSetting::execRegenerateOptions },
		{ "UpdateOptions", &USelectSetting::execUpdateOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectSetting);
UClass* Z_Construct_UClass_USelectSetting_NoRegister()
{
	return USelectSetting::StaticClass();
}
struct Z_Construct_UClass_USelectSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any AutoSetting containing multiple pre-defined options\n */" },
		{ "IncludePath", "UI/SettingControls/SelectSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Base class for any AutoSetting containing multiple pre-defined options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Select Setting" },
		{ "Comment", "// Predefined options\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Predefined options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionFactory_MetaData[] = {
		{ "Category", "Select Setting" },
		{ "Comment", "// Factory to use to dynamically create options\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Factory to use to dynamically create options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingSettingOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionFactory;
	static void NewProp_bUpdatingSettingOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingSettingOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectSetting_RegenerateOptions, "RegenerateOptions" }, // 3081726694
		{ &Z_Construct_UFunction_USelectSetting_UpdateOptions, "UpdateOptions" }, // 1547791516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectSetting, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3534661630
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory = { "OptionFactory", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectSetting, OptionFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_USettingOptionFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionFactory_MetaData), NewProp_OptionFactory_MetaData) };
void Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_SetBit(void* Obj)
{
	((USelectSetting*)Obj)->bUpdatingSettingOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions = { "bUpdatingSettingOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USelectSetting), &Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatingSettingOptions_MetaData), NewProp_bUpdatingSettingOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USelectSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectSetting_Statics::ClassParams = {
	&USelectSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USelectSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectSetting()
{
	if (!Z_Registration_Info_UClass_USelectSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectSetting.OuterSingleton, Z_Construct_UClass_USelectSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USelectSetting>()
{
	return USelectSetting::StaticClass();
}
USelectSetting::USelectSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectSetting);
USelectSetting::~USelectSetting() {}
// End Class USelectSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectSetting, USelectSetting::StaticClass, TEXT("USelectSetting"), &Z_Registration_Info_UClass_USelectSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectSetting), 1491157769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_969030392(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
