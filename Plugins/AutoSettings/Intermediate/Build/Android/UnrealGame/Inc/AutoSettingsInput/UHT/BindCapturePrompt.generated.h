// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/BindCapturePrompt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCapturedInput;
struct FGameplayTag;
struct FKey;
#ifdef AUTOSETTINGSINPUT_BindCapturePrompt_generated_h
#error "BindCapturePrompt.generated.h already included, missing '#pragma once' in BindCapturePrompt.h"
#endif
#define AUTOSETTINGSINPUT_BindCapturePrompt_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<struct FCapturedInput>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_21_DELEGATE \
AUTOSETTINGSINPUT_API void FChordCapturedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordCapturedEvent, FCapturedInput CapturedInput);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_23_DELEGATE \
AUTOSETTINGSINPUT_API void FChordRejectedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordRejectedEvent, FCapturedInput CapturedInput);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_25_DELEGATE \
AUTOSETTINGSINPUT_API void FCapturePromptClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& CapturePromptClosedEvent, bool bWasCancelled);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsKeyAllowed_Implementation(FKey PrimaryKey); \
	DECLARE_FUNCTION(execIsKeyAllowed); \
	DECLARE_FUNCTION(execGetKeyGroup); \
	DECLARE_FUNCTION(execCancel);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBindCapturePrompt(); \
	friend struct Z_Construct_UClass_UBindCapturePrompt_Statics; \
public: \
	DECLARE_CLASS(UBindCapturePrompt, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UBindCapturePrompt)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBindCapturePrompt(UBindCapturePrompt&&); \
	UBindCapturePrompt(const UBindCapturePrompt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCapturePrompt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCapturePrompt); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCapturePrompt) \
	NO_API virtual ~UBindCapturePrompt();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_39_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UBindCapturePrompt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h


#define FOREACH_ENUM_EBINDINGCAPTUREMODE(op) \
	op(EBindingCaptureMode::OnReleased) \
	op(EBindingCaptureMode::OnPressed) 

enum class EBindingCaptureMode : uint8;
template<> struct TIsUEnumClass<EBindingCaptureMode> { enum { Value = true }; };
template<> AUTOSETTINGSINPUT_API UEnum* StaticEnum<EBindingCaptureMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
