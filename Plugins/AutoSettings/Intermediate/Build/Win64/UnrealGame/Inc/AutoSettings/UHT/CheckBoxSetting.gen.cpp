// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/CheckBoxSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBoxSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCheckBoxSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCheckBoxSetting_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UCheckBoxSetting Function CheckBoxStateChanged
struct Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics
{
	struct CheckBoxSetting_eventCheckBoxStateChanged_Parms
	{
		bool IsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked_SetBit(void* Obj)
{
	((CheckBoxSetting_eventCheckBoxStateChanged_Parms*)Obj)->IsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked = { "IsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckBoxSetting_eventCheckBoxStateChanged_Parms), &Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBoxSetting, nullptr, "CheckBoxStateChanged", nullptr, nullptr, Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::CheckBoxSetting_eventCheckBoxStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::CheckBoxSetting_eventCheckBoxStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckBoxSetting::execCheckBoxStateChanged)
{
	P_GET_UBOOL(Z_Param_IsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckBoxStateChanged(Z_Param_IsChecked);
	P_NATIVE_END;
}
// End Class UCheckBoxSetting Function CheckBoxStateChanged

// Begin Class UCheckBoxSetting
void UCheckBoxSetting::StaticRegisterNativesUCheckBoxSetting()
{
	UClass* Class = UCheckBoxSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckBoxStateChanged", &UCheckBoxSetting::execCheckBoxStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBoxSetting);
UClass* Z_Construct_UClass_UCheckBoxSetting_NoRegister()
{
	return UCheckBoxSetting::StaticClass();
}
struct Z_Construct_UClass_UCheckBoxSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal CheckBox\n */" },
		{ "IncludePath", "UI/SettingControls/CheckBoxSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal CheckBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CheckBox Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged, "CheckBoxStateChanged" }, // 1240803591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox = { "CheckBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckBoxSetting, CheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_MetaData), NewProp_CheckBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheckBoxSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToggleSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxSetting_Statics::ClassParams = {
	&UCheckBoxSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckBoxSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckBoxSetting()
{
	if (!Z_Registration_Info_UClass_UCheckBoxSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBoxSetting.OuterSingleton, Z_Construct_UClass_UCheckBoxSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckBoxSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UCheckBoxSetting>()
{
	return UCheckBoxSetting::StaticClass();
}
UCheckBoxSetting::UCheckBoxSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxSetting);
UCheckBoxSetting::~UCheckBoxSetting() {}
// End Class UCheckBoxSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_CheckBoxSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBoxSetting, UCheckBoxSetting::StaticClass, TEXT("UCheckBoxSetting"), &Z_Registration_Info_UClass_UCheckBoxSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBoxSetting), 1166819256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_CheckBoxSetting_h_608068669(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_CheckBoxSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_CheckBoxSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
