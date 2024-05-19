// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SpinnerSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinnerSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinnerSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinnerSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USpinnerSetting Function SpinnerSelectionChanged
struct Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics
{
	struct SpinnerSetting_eventSpinnerSelectionChanged_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinnerSetting_eventSpinnerSelectionChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinnerSetting, nullptr, "SpinnerSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::SpinnerSetting_eventSpinnerSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::SpinnerSetting_eventSpinnerSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinnerSetting::execSpinnerSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpinnerSelectionChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpinnerSetting Function SpinnerSelectionChanged

// Begin Class USpinnerSetting
void USpinnerSetting::StaticRegisterNativesUSpinnerSetting()
{
	UClass* Class = USpinnerSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpinnerSelectionChanged", &USpinnerSetting::execSpinnerSelectionChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpinnerSetting);
UClass* Z_Construct_UClass_USpinnerSetting_NoRegister()
{
	return USpinnerSetting::StaticClass();
}
struct Z_Construct_UClass_USpinnerSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a Spinner\n */" },
		{ "IncludePath", "UI/SettingControls/SpinnerSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
		{ "ToolTip", "AutoSetting for a Spinner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spinner_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Spinner Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spinner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged, "SpinnerSelectionChanged" }, // 350422664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinnerSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner = { "Spinner", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinnerSetting, Spinner), Z_Construct_UClass_USpinner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spinner_MetaData), NewProp_Spinner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinnerSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpinnerSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USelectSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinnerSetting_Statics::ClassParams = {
	&USpinnerSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpinnerSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_USpinnerSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpinnerSetting()
{
	if (!Z_Registration_Info_UClass_USpinnerSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinnerSetting.OuterSingleton, Z_Construct_UClass_USpinnerSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpinnerSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USpinnerSetting>()
{
	return USpinnerSetting::StaticClass();
}
USpinnerSetting::USpinnerSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpinnerSetting);
USpinnerSetting::~USpinnerSetting() {}
// End Class USpinnerSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SpinnerSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpinnerSetting, USpinnerSetting::StaticClass, TEXT("USpinnerSetting"), &Z_Registration_Info_UClass_USpinnerSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinnerSetting), 2242469357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SpinnerSetting_h_316749897(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SpinnerSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SpinnerSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
