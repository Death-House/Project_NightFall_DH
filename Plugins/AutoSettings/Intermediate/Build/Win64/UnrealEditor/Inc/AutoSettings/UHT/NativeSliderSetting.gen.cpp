// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/NativeSliderSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeSliderSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UNativeSliderSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UNativeSliderSetting_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UNativeSliderSetting Function SliderMouseCaptureBegin
struct Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderMouseCaptureBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNativeSliderSetting::execSliderMouseCaptureBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderMouseCaptureBegin();
	P_NATIVE_END;
}
// End Class UNativeSliderSetting Function SliderMouseCaptureBegin

// Begin Class UNativeSliderSetting Function SliderMouseCaptureEnd
struct Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderMouseCaptureEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNativeSliderSetting::execSliderMouseCaptureEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderMouseCaptureEnd();
	P_NATIVE_END;
}
// End Class UNativeSliderSetting Function SliderMouseCaptureEnd

// Begin Class UNativeSliderSetting Function SliderValueChanged
struct Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics
{
	struct NativeSliderSetting_eventSliderValueChanged_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NativeSliderSetting_eventSliderValueChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NativeSliderSetting_eventSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NativeSliderSetting_eventSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNativeSliderSetting::execSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderValueChanged(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UNativeSliderSetting Function SliderValueChanged

// Begin Class UNativeSliderSetting
void UNativeSliderSetting::StaticRegisterNativesUNativeSliderSetting()
{
	UClass* Class = UNativeSliderSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SliderMouseCaptureBegin", &UNativeSliderSetting::execSliderMouseCaptureBegin },
		{ "SliderMouseCaptureEnd", &UNativeSliderSetting::execSliderMouseCaptureEnd },
		{ "SliderValueChanged", &UNativeSliderSetting::execSliderValueChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNativeSliderSetting);
UClass* Z_Construct_UClass_UNativeSliderSetting_NoRegister()
{
	return UNativeSliderSetting::StaticClass();
}
struct Z_Construct_UClass_UNativeSliderSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal Slider\n */" },
		{ "IncludePath", "UI/SettingControls/NativeSliderSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal Slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Native Slider Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseCaptureInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
	static void NewProp_bMouseCaptureInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseCaptureInProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin, "SliderMouseCaptureBegin" }, // 4066118072
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd, "SliderMouseCaptureEnd" }, // 2350524952
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged, "SliderValueChanged" }, // 3235809024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeSliderSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNativeSliderSetting, Slider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slider_MetaData), NewProp_Slider_MetaData) };
void Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_SetBit(void* Obj)
{
	((UNativeSliderSetting*)Obj)->bMouseCaptureInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress = { "bMouseCaptureInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNativeSliderSetting), &Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseCaptureInProgress_MetaData), NewProp_bMouseCaptureInProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNativeSliderSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USliderSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNativeSliderSetting_Statics::ClassParams = {
	&UNativeSliderSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UNativeSliderSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNativeSliderSetting()
{
	if (!Z_Registration_Info_UClass_UNativeSliderSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNativeSliderSetting.OuterSingleton, Z_Construct_UClass_UNativeSliderSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNativeSliderSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UNativeSliderSetting>()
{
	return UNativeSliderSetting::StaticClass();
}
UNativeSliderSetting::UNativeSliderSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeSliderSetting);
UNativeSliderSetting::~UNativeSliderSetting() {}
// End Class UNativeSliderSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_NativeSliderSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNativeSliderSetting, UNativeSliderSetting::StaticClass, TEXT("UNativeSliderSetting"), &Z_Registration_Info_UClass_UNativeSliderSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNativeSliderSetting), 3451249401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_NativeSliderSetting_h_1319256041(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_NativeSliderSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_NativeSliderSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
