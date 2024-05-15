// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/SettingValueMask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_SettingValueMask_generated_h
#error "SettingValueMask.generated.h already included, missing '#pragma once' in SettingValueMask.h"
#endif
#define AUTOSETTINGS_SettingValueMask_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const; \
	virtual FString MaskValue_Implementation(const FString& ConsoleValue) const; \
	DECLARE_FUNCTION(execRecombineValues); \
	DECLARE_FUNCTION(execMaskValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingValueMask(); \
	friend struct Z_Construct_UClass_USettingValueMask_Statics; \
public: \
	DECLARE_CLASS(USettingValueMask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingValueMask)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingValueMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettingValueMask(USettingValueMask&&); \
	USettingValueMask(const USettingValueMask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingValueMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingValueMask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingValueMask) \
	NO_API virtual ~USettingValueMask();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingValueMask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS