// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalKeyIconTagManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FGameplayTagContainer;
struct FKey;
#ifdef AUTOSETTINGSINPUT_GlobalKeyIconTagManager_generated_h
#error "GlobalKeyIconTagManager.generated.h already included, missing '#pragma once' in GlobalKeyIconTagManager.h"
#endif
#define AUTOSETTINGSINPUT_GlobalKeyIconTagManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_9_DELEGATE \
AUTOSETTINGSINPUT_API void FGlobalKeyIconTagsModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& GlobalKeyIconTagsModifiedEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIconForKey); \
	DECLARE_FUNCTION(execSetGlobalKeyIconTags);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalKeyIconTagManager(); \
	friend struct Z_Construct_UClass_UGlobalKeyIconTagManager_Statics; \
public: \
	DECLARE_CLASS(UGlobalKeyIconTagManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UGlobalKeyIconTagManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalKeyIconTagManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGlobalKeyIconTagManager(UGlobalKeyIconTagManager&&); \
	UGlobalKeyIconTagManager(const UGlobalKeyIconTagManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalKeyIconTagManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalKeyIconTagManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalKeyIconTagManager) \
	NO_API virtual ~UGlobalKeyIconTagManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UGlobalKeyIconTagManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
