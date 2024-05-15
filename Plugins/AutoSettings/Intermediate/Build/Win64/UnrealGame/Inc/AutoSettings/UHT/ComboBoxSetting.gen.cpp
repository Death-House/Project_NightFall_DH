// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/ComboBoxSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UComboBoxSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UComboBoxSetting_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UComboBoxSetting Function ComboBoxSelectionChanged
struct Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics
{
	struct ComboBoxSetting_eventComboBoxSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxSetting_eventComboBoxSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxSetting_eventComboBoxSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxSetting, nullptr, "ComboBoxSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::ComboBoxSetting_eventComboBoxSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::ComboBoxSetting_eventComboBoxSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxSetting::execComboBoxSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComboBoxSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// End Class UComboBoxSetting Function ComboBoxSelectionChanged

// Begin Class UComboBoxSetting
void UComboBoxSetting::StaticRegisterNativesUComboBoxSetting()
{
	UClass* Class = UComboBoxSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComboBoxSelectionChanged", &UComboBoxSetting::execComboBoxSelectionChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxSetting);
UClass* Z_Construct_UClass_UComboBoxSetting_NoRegister()
{
	return UComboBoxSetting::StaticClass();
}
struct Z_Construct_UClass_UComboBoxSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal ComboBox\n */" },
		{ "IncludePath", "UI/SettingControls/ComboBoxSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal ComboBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ComboBox Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged, "ComboBoxSelectionChanged" }, // 694504465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox = { "ComboBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxSetting, ComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_MetaData), NewProp_ComboBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboBoxSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USelectSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxSetting_Statics::ClassParams = {
	&UComboBoxSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBoxSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBoxSetting()
{
	if (!Z_Registration_Info_UClass_UComboBoxSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxSetting.OuterSingleton, Z_Construct_UClass_UComboBoxSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBoxSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UComboBoxSetting>()
{
	return UComboBoxSetting::StaticClass();
}
UComboBoxSetting::UComboBoxSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxSetting);
UComboBoxSetting::~UComboBoxSetting() {}
// End Class UComboBoxSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ComboBoxSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxSetting, UComboBoxSetting::StaticClass, TEXT("UComboBoxSetting"), &Z_Registration_Info_UClass_UComboBoxSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxSetting), 970263035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ComboBoxSetting_h_2546694646(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ComboBoxSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ComboBoxSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
