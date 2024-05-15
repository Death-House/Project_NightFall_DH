// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SettingsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAutoSettingData;
#ifdef AUTOSETTINGS_SettingsManager_generated_h
#error "SettingsManager.generated.h already included, missing '#pragma once' in SettingsManager.h"
#endif
#define AUTOSETTINGS_SettingsManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoSettingData_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FAutoSettingData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_42_DELEGATE \
AUTOSETTINGS_API void FOnSettingSaved_DelegateWrapper(const FMulticastScriptDelegate& OnSettingSaved, FAutoSettingData SettingData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySettingStatic); \
	DECLARE_FUNCTION(execSaveSettingStatic); \
	DECLARE_FUNCTION(execAutoDetectSettingsStatic); \
	DECLARE_FUNCTION(execRegisterStringCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterFloatCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterBoolCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterIntCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterStringCVarSetting); \
	DECLARE_FUNCTION(execRegisterFloatCVarSetting); \
	DECLARE_FUNCTION(execRegisterBoolCVarSetting); \
	DECLARE_FUNCTION(execRegisterIntCVarSetting); \
	DECLARE_FUNCTION(execGetValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsManager(); \
	friend struct Z_Construct_UClass_USettingsManager_Statics; \
public: \
	DECLARE_CLASS(USettingsManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingsManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettingsManager(USettingsManager&&); \
	USettingsManager(const USettingsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USettingsManager) \
	NO_API virtual ~USettingsManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_47_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
