// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SettingControls/ToggleSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_ToggleSetting_generated_h
#error "ToggleSetting.generated.h already included, missing '#pragma once' in ToggleSetting.h"
#endif
#define AUTOSETTINGS_ToggleSetting_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateToggleState_Implementation(bool State); \
	DECLARE_FUNCTION(execToggleStateUpdated); \
	DECLARE_FUNCTION(execUpdateToggleState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToggleSetting(); \
	friend struct Z_Construct_UClass_UToggleSetting_Statics; \
public: \
	DECLARE_CLASS(UToggleSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UToggleSetting)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToggleSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToggleSetting(UToggleSetting&&); \
	UToggleSetting(const UToggleSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToggleSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToggleSetting); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToggleSetting) \
	NO_API virtual ~UToggleSetting();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UToggleSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
