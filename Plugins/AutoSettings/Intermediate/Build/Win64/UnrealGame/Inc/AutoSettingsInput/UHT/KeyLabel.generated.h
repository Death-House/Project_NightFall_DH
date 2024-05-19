// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/KeyLabel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class ESlateVisibility : uint8;
struct FSlateBrush;
#ifdef AUTOSETTINGSINPUT_KeyLabel_generated_h
#error "KeyLabel.generated.h already included, missing '#pragma once' in KeyLabel.h"
#endif
#define AUTOSETTINGSINPUT_KeyLabel_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ESlateVisibility GetDisplayNameVisibility_Implementation() const; \
	virtual ESlateVisibility GetIconVisibility_Implementation() const; \
	virtual FSlateBrush GetIconBrush_Implementation() const; \
	DECLARE_FUNCTION(execOnGlobalKeyIconTagsModified); \
	DECLARE_FUNCTION(execGetDisplayNameVisibility); \
	DECLARE_FUNCTION(execGetIconVisibility); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execHasValidKey); \
	DECLARE_FUNCTION(execHasIcon); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyLabel(); \
	friend struct Z_Construct_UClass_UKeyLabel_Statics; \
public: \
	DECLARE_CLASS(UKeyLabel, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UKeyLabel)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKeyLabel(UKeyLabel&&); \
	UKeyLabel(const UKeyLabel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyLabel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyLabel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyLabel) \
	NO_API virtual ~UKeyLabel();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UKeyLabel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
