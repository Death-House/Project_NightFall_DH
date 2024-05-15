// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Console/CVarChangeListenerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_CVarChangeListenerManager_generated_h
#error "CVarChangeListenerManager.generated.h already included, missing '#pragma once' in CVarChangeListenerManager.h"
#endif
#define AUTOSETTINGS_CVarChangeListenerManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_8_DELEGATE \
AUTOSETTINGS_API void FIntCVarChangedSignature_DelegateWrapper(const FScriptDelegate& IntCVarChangedSignature, int32 NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_9_DELEGATE \
AUTOSETTINGS_API void FBoolCVarChangedSignature_DelegateWrapper(const FScriptDelegate& BoolCVarChangedSignature, bool NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_10_DELEGATE \
AUTOSETTINGS_API void FFloatCVarChangedSignature_DelegateWrapper(const FScriptDelegate& FloatCVarChangedSignature, float NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_11_DELEGATE \
AUTOSETTINGS_API void FStringCVarChangedSignature_DelegateWrapper(const FScriptDelegate& StringCVarChangedSignature, const FString& NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddStringCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddFloatCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddBoolCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddIntCVarCallbackStatic);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCVarChangeListenerManager(); \
	friend struct Z_Construct_UClass_UCVarChangeListenerManager_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListenerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListenerManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListenerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCVarChangeListenerManager(UCVarChangeListenerManager&&); \
	UCVarChangeListenerManager(const UCVarChangeListenerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListenerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListenerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListenerManager) \
	NO_API virtual ~UCVarChangeListenerManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UCVarChangeListenerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
