// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SettingControls/SliderSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_SliderSetting_generated_h
#error "SliderSetting.generated.h already included, missing '#pragma once' in SliderSetting.h"
#endif
#define AUTOSETTINGS_SliderSetting_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldSaveCurrentValue_Implementation() const; \
	virtual void UpdateSliderValue_Implementation(float NormalizedValue, float RawValue); \
	DECLARE_FUNCTION(execShouldSaveCurrentValue); \
	DECLARE_FUNCTION(execSliderValueUpdated); \
	DECLARE_FUNCTION(execUpdateSliderValue); \
	DECLARE_FUNCTION(execNormalizedValueToRaw); \
	DECLARE_FUNCTION(execRawValueToNormalized); \
	DECLARE_FUNCTION(execClampRawValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSliderSetting(); \
	friend struct Z_Construct_UClass_USliderSetting_Statics; \
public: \
	DECLARE_CLASS(USliderSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USliderSetting)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USliderSetting(USliderSetting&&); \
	USliderSetting(const USliderSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USliderSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USliderSetting); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USliderSetting) \
	NO_API virtual ~USliderSetting();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USliderSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
