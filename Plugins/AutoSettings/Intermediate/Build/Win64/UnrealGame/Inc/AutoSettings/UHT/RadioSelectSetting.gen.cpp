// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/RadioSelectSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioSelectSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelectSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelectSetting_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class URadioSelectSetting Function RadioSelectionChanged
struct Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics
{
	struct RadioSelectSetting_eventRadioSelectionChanged_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelectSetting_eventRadioSelectionChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelectSetting, nullptr, "RadioSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::RadioSelectSetting_eventRadioSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::RadioSelectSetting_eventRadioSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelectSetting::execRadioSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RadioSelectionChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class URadioSelectSetting Function RadioSelectionChanged

// Begin Class URadioSelectSetting
void URadioSelectSetting::StaticRegisterNativesURadioSelectSetting()
{
	UClass* Class = URadioSelectSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RadioSelectionChanged", &URadioSelectSetting::execRadioSelectionChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadioSelectSetting);
UClass* Z_Construct_UClass_URadioSelectSetting_NoRegister()
{
	return URadioSelectSetting::StaticClass();
}
struct Z_Construct_UClass_URadioSelectSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a RadioSelect\n */" },
		{ "IncludePath", "UI/SettingControls/RadioSelectSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
		{ "ToolTip", "AutoSetting for a RadioSelect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioButtonClass_MetaData[] = {
		{ "Category", "Radio Select Setting" },
		{ "Comment", "// RadioButton class to create for each option\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
		{ "ToolTip", "RadioButton class to create for each option" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioSelect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Radio Select Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RadioButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadioSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged, "RadioSelectionChanged" }, // 2449885837
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioSelectSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass = { "RadioButtonClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelectSetting, RadioButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioButtonClass_MetaData), NewProp_RadioButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect = { "RadioSelect", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelectSetting, RadioSelect), Z_Construct_UClass_URadioSelect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioSelect_MetaData), NewProp_RadioSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadioSelectSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USelectSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadioSelectSetting_Statics::ClassParams = {
	&URadioSelectSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_URadioSelectSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadioSelectSetting()
{
	if (!Z_Registration_Info_UClass_URadioSelectSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadioSelectSetting.OuterSingleton, Z_Construct_UClass_URadioSelectSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadioSelectSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<URadioSelectSetting>()
{
	return URadioSelectSetting::StaticClass();
}
URadioSelectSetting::URadioSelectSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadioSelectSetting);
URadioSelectSetting::~URadioSelectSetting() {}
// End Class URadioSelectSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_RadioSelectSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URadioSelectSetting, URadioSelectSetting::StaticClass, TEXT("URadioSelectSetting"), &Z_Registration_Info_UClass_URadioSelectSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadioSelectSetting), 2760894954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_RadioSelectSetting_h_1972326464(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_RadioSelectSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_RadioSelectSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
