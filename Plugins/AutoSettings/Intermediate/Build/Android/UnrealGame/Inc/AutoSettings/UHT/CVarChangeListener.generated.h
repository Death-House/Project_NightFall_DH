// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Console/CVarChangeListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_CVarChangeListener_generated_h
#error "CVarChangeListener.generated.h already included, missing '#pragma once' in CVarChangeListener.h"
#endif
#define AUTOSETTINGS_CVarChangeListener_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_7_DELEGATE \
AUTOSETTINGS_API void FIntCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& IntCVarChangedEvent, int32 NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_8_DELEGATE \
AUTOSETTINGS_API void FBoolCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& BoolCVarChangedEvent, bool NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_9_DELEGATE \
AUTOSETTINGS_API void FFloatCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& FloatCVarChangedEvent, float NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_10_DELEGATE \
AUTOSETTINGS_API void FStringCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& StringCVarChangedEvent, const FString& NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCVarChangeListener(); \
	friend struct Z_Construct_UClass_UCVarChangeListener_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListener)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCVarChangeListener(UCVarChangeListener&&); \
	UCVarChangeListener(const UCVarChangeListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListener) \
	NO_API virtual ~UCVarChangeListener();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UCVarChangeListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
