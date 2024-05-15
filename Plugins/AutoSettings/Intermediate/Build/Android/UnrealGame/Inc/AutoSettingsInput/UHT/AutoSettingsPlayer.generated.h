// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoSettingsPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputMappingPreset;
struct FPlayerInputMappings;
#ifdef AUTOSETTINGSINPUT_AutoSettingsPlayer_generated_h
#error "AutoSettingsPlayer.generated.h already included, missing '#pragma once' in AutoSettingsPlayer.h"
#endif
#define AUTOSETTINGSINPUT_AutoSettingsPlayer_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveInputMappings); \
	DECLARE_FUNCTION(execGetInputMappings); \
	DECLARE_FUNCTION(execGetDefaultInputMappingPreset); \
	DECLARE_FUNCTION(execGetUniquePlayerIdentifier);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOSETTINGSINPUT_API UAutoSettingsPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoSettingsPlayer(UAutoSettingsPlayer&&); \
	UAutoSettingsPlayer(const UAutoSettingsPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOSETTINGSINPUT_API, UAutoSettingsPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsPlayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsPlayer) \
	AUTOSETTINGSINPUT_API virtual ~UAutoSettingsPlayer();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAutoSettingsPlayer(); \
	friend struct Z_Construct_UClass_UAutoSettingsPlayer_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingsPlayer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), AUTOSETTINGSINPUT_API) \
	DECLARE_SERIALIZER(UAutoSettingsPlayer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAutoSettingsPlayer() {} \
public: \
	typedef UAutoSettingsPlayer UClassType; \
	typedef IAutoSettingsPlayer ThisClass; \
	static FInputMappingPreset Execute_GetDefaultInputMappingPreset(const UObject* O); \
	static bool Execute_GetInputMappings(const UObject* O, FPlayerInputMappings& InputMappings); \
	static FString Execute_GetUniquePlayerIdentifier(const UObject* O); \
	static void Execute_SaveInputMappings(UObject* O, FPlayerInputMappings InputMappings); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UAutoSettingsPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
