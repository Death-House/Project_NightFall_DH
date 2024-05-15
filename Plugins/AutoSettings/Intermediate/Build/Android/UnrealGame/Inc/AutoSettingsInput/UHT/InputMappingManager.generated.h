// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputMappingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
struct FGameplayTag;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
struct FInputMappingPreset;
struct FKey;
struct FPlayerInputMappings;
#ifdef AUTOSETTINGSINPUT_InputMappingManager_generated_h
#error "InputMappingManager.generated.h already included, missing '#pragma once' in InputMappingManager.h"
#endif
#define AUTOSETTINGSINPUT_InputMappingManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_10_DELEGATE \
AUTOSETTINGSINPUT_API void FOnMappingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMappingsChanged, APlayerController* Player);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRegisteredPlayerControllerDestroyed); \
	DECLARE_FUNCTION(execGetPlayerMappingsByKey); \
	DECLARE_FUNCTION(execGetPlayerAxisMappings); \
	DECLARE_FUNCTION(execGetPlayerActionMappings); \
	DECLARE_FUNCTION(execGetPlayerAxisMapping); \
	DECLARE_FUNCTION(execGetPlayerActionMapping); \
	DECLARE_FUNCTION(execAddPlayerAxisOverride); \
	DECLARE_FUNCTION(execAddPlayerActionOverride); \
	DECLARE_FUNCTION(execGetPlayerAxisMappingStatic); \
	DECLARE_FUNCTION(execGetPlayerActionMappingStatic); \
	DECLARE_FUNCTION(execInitializePlayerInputOverridesStatic); \
	DECLARE_FUNCTION(execAddPlayerAxisOverrideStatic); \
	DECLARE_FUNCTION(execAddPlayerActionOverrideStatic); \
	DECLARE_FUNCTION(execSetPlayerKeyGroupStatic); \
	DECLARE_FUNCTION(execSetPlayerInputPresetByTag); \
	DECLARE_FUNCTION(execSetPlayerInputPresetStatic); \
	DECLARE_FUNCTION(execGetPlayerInputMappingsStatic); \
	DECLARE_FUNCTION(execGetDefaultInputPresets);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMappingManager(); \
	friend struct Z_Construct_UClass_UInputMappingManager_Statics; \
public: \
	DECLARE_CLASS(UInputMappingManager, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Settings");} \



#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputMappingManager(UInputMappingManager&&); \
	UInputMappingManager(const UInputMappingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputMappingManager) \
	NO_API virtual ~UInputMappingManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UInputMappingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
