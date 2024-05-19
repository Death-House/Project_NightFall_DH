// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GenericControls/RadioSelect/RadioButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_RadioButton_generated_h
#error "RadioButton.generated.h already included, missing '#pragma once' in RadioButton.h"
#endif
#define AUTOSETTINGS_RadioButton_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_8_DELEGATE \
AUTOSETTINGS_API void FRadioSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& RadioSelectedSignature, const FString& Value);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execTriggerSelection); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetSelected);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadioButton(); \
	friend struct Z_Construct_UClass_URadioButton_Statics; \
public: \
	DECLARE_CLASS(URadioButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(URadioButton)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URadioButton(URadioButton&&); \
	URadioButton(const URadioButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioButton); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioButton) \
	NO_API virtual ~URadioButton();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class URadioButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
