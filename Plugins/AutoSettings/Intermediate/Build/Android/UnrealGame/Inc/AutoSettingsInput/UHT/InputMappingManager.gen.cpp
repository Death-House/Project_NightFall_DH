// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingManager.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#include "AutoSettingsInput/Public/PlayerInputMappings.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingManager() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMappingManager();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMappingManager_NoRegister();
AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Delegate FOnMappingsChanged
struct Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics
{
	struct _Script_AutoSettingsInput_eventOnMappingsChanged_Parms
	{
		APlayerController* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventOnMappingsChanged_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "OnMappingsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::_Script_AutoSettingsInput_eventOnMappingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::_Script_AutoSettingsInput_eventOnMappingsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMappingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMappingsChanged, APlayerController* Player)
{
	struct _Script_AutoSettingsInput_eventOnMappingsChanged_Parms
	{
		APlayerController* Player;
	};
	_Script_AutoSettingsInput_eventOnMappingsChanged_Parms Parms;
	Parms.Player=Player;
	OnMappingsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMappingsChanged

// Begin Class UInputMappingManager Function AddPlayerActionOverride
struct Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics
{
	struct InputMappingManager_eventAddPlayerActionOverride_Parms
	{
		APlayerController* Player;
		FInputActionKeyMapping NewMapping;
		int32 MappingGroup;
		bool bAnyKeyGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's action mapping on the given mapping group and save to config\n// @param\x09""bAnyKeyGroup\x09If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's action mapping on the given mapping group and save to config\n@param        bAnyKeyGroup    If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, NewMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMapping_MetaData), NewProp_NewMapping_MetaData) }; // 3236058125
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventAddPlayerActionOverride_Parms*)Obj)->bAnyKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerActionOverride_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerActionOverride", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::InputMappingManager_eventAddPlayerActionOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::InputMappingManager_eventAddPlayerActionOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execAddPlayerActionOverride)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_NewMapping);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_UBOOL(Z_Param_bAnyKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerActionOverride(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function AddPlayerActionOverride

// Begin Class UInputMappingManager Function AddPlayerActionOverrideStatic
struct Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics
{
	struct InputMappingManager_eventAddPlayerActionOverrideStatic_Parms
	{
		APlayerController* Player;
		FInputActionKeyMapping NewMapping;
		int32 MappingGroup;
		bool bAnyKeyGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's action mapping on the given mapping group and save to config\n// @param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "DisplayName", "Add Player Input Action Override" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's action mapping on the given mapping group and save to config\n@param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, NewMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMapping_MetaData), NewProp_NewMapping_MetaData) }; // 3236058125
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventAddPlayerActionOverrideStatic_Parms*)Obj)->bAnyKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerActionOverrideStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::InputMappingManager_eventAddPlayerActionOverrideStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::InputMappingManager_eventAddPlayerActionOverrideStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execAddPlayerActionOverrideStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_NewMapping);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_UBOOL(Z_Param_bAnyKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputMappingManager::AddPlayerActionOverrideStatic(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function AddPlayerActionOverrideStatic

// Begin Class UInputMappingManager Function AddPlayerAxisOverride
struct Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics
{
	struct InputMappingManager_eventAddPlayerAxisOverride_Parms
	{
		APlayerController* Player;
		FInputAxisKeyMapping NewMapping;
		int32 MappingGroup;
		bool bAnyKeyGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's axis mapping on the given mapping group\n// @param\x09""bAnyKeyGroup\x09If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's axis mapping on the given mapping group\n@param        bAnyKeyGroup    If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, NewMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMapping_MetaData), NewProp_NewMapping_MetaData) }; // 2680743740
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventAddPlayerAxisOverride_Parms*)Obj)->bAnyKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerAxisOverride_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerAxisOverride", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::InputMappingManager_eventAddPlayerAxisOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::InputMappingManager_eventAddPlayerAxisOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execAddPlayerAxisOverride)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_NewMapping);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_UBOOL(Z_Param_bAnyKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerAxisOverride(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function AddPlayerAxisOverride

// Begin Class UInputMappingManager Function AddPlayerAxisOverrideStatic
struct Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics
{
	struct InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms
	{
		APlayerController* Player;
		FInputAxisKeyMapping NewMapping;
		int32 MappingGroup;
		bool bAnyKeyGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's axis mapping on the given mapping group\n// @param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "DisplayName", "Add Player Input Axis Override" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's axis mapping on the given mapping group\n@param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, NewMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMapping_MetaData), NewProp_NewMapping_MetaData) }; // 2680743740
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms*)Obj)->bAnyKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerAxisOverrideStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execAddPlayerAxisOverrideStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_NewMapping);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_UBOOL(Z_Param_bAnyKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputMappingManager::AddPlayerAxisOverrideStatic(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function AddPlayerAxisOverrideStatic

// Begin Class UInputMappingManager Function GetDefaultInputPresets
struct Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics
{
	struct InputMappingManager_eventGetDefaultInputPresets_Parms
	{
		TArray<FInputMappingPreset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Get input presets defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Get input presets defined in project settings (AutoSettings page)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(0, nullptr) }; // 548858416
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetDefaultInputPresets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 548858416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetDefaultInputPresets", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::InputMappingManager_eventGetDefaultInputPresets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::InputMappingManager_eventGetDefaultInputPresets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetDefaultInputPresets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInputMappingPreset>*)Z_Param__Result=UInputMappingManager::GetDefaultInputPresets();
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetDefaultInputPresets

// Begin Class UInputMappingManager Function GetPlayerActionMapping
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics
{
	struct InputMappingManager_eventGetPlayerActionMapping_Parms
	{
		APlayerController* Player;
		FName ActionName;
		int32 MappingGroup;
		FGameplayTag KeyGroup;
		bool bUsePlayerKeyGroup;
		FInputActionKeyMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventGetPlayerActionMapping_Parms*)Obj)->bUsePlayerKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerActionMapping_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMapping", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::InputMappingManager_eventGetPlayerActionMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::InputMappingManager_eventGetPlayerActionMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMapping)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
	P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionKeyMapping*)Z_Param__Result=P_THIS->GetPlayerActionMapping(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerActionMapping

// Begin Class UInputMappingManager Function GetPlayerActionMappings
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics
{
	struct InputMappingManager_eventGetPlayerActionMappings_Parms
	{
		APlayerController* Player;
		FName ActionName;
		int32 MappingGroup;
		FGameplayTag KeyGroup;
		bool bUsePlayerKeyGroup;
		TArray<FInputActionKeyMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mappings used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mappings used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventGetPlayerActionMappings_Parms*)Obj)->bUsePlayerKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerActionMappings_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMappings", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::InputMappingManager_eventGetPlayerActionMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::InputMappingManager_eventGetPlayerActionMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMappings)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
	P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInputActionKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerActionMappings(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerActionMappings

// Begin Class UInputMappingManager Function GetPlayerActionMappingStatic
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics
{
	struct InputMappingManager_eventGetPlayerActionMappingStatic_Parms
	{
		APlayerController* Player;
		FName ActionName;
		int32 MappingGroup;
		FInputActionKeyMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_MappingGroup", "-1" },
		{ "DisplayName", "Get Player Action Mapping" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMappingStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::InputMappingManager_eventGetPlayerActionMappingStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::InputMappingManager_eventGetPlayerActionMappingStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMappingStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionKeyMapping*)Z_Param__Result=UInputMappingManager::GetPlayerActionMappingStatic(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerActionMappingStatic

// Begin Class UInputMappingManager Function GetPlayerAxisMapping
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics
{
	struct InputMappingManager_eventGetPlayerAxisMapping_Parms
	{
		APlayerController* Player;
		FName AxisName;
		float Scale;
		int32 MappingGroup;
		FGameplayTag KeyGroup;
		bool bUsePlayerKeyGroup;
		FInputAxisKeyMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, AxisName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventGetPlayerAxisMapping_Parms*)Obj)->bUsePlayerKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerAxisMapping_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMapping", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::InputMappingManager_eventGetPlayerAxisMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::InputMappingManager_eventGetPlayerAxisMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMapping)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
	P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAxisKeyMapping*)Z_Param__Result=P_THIS->GetPlayerAxisMapping(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerAxisMapping

// Begin Class UInputMappingManager Function GetPlayerAxisMappings
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics
{
	struct InputMappingManager_eventGetPlayerAxisMappings_Parms
	{
		APlayerController* Player;
		FName AxisName;
		float Scale;
		int32 MappingGroup;
		FGameplayTag KeyGroup;
		bool bUsePlayerKeyGroup;
		TArray<FInputAxisKeyMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mappings used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mappings used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, AxisName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
{
	((InputMappingManager_eventGetPlayerAxisMappings_Parms*)Obj)->bUsePlayerKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerAxisMappings_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMappings", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::InputMappingManager_eventGetPlayerAxisMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::InputMappingManager_eventGetPlayerAxisMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMappings)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
	P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInputAxisKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerAxisMappings(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerAxisMappings

// Begin Class UInputMappingManager Function GetPlayerAxisMappingStatic
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics
{
	struct InputMappingManager_eventGetPlayerAxisMappingStatic_Parms
	{
		APlayerController* Player;
		FName AxisName;
		float Scale;
		int32 MappingGroup;
		FInputAxisKeyMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_MappingGroup", "-1" },
		{ "DisplayName", "Get Player Axis Mapping" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, AxisName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, MappingGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMappingStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::InputMappingManager_eventGetPlayerAxisMappingStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::InputMappingManager_eventGetPlayerAxisMappingStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMappingStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAxisKeyMapping*)Z_Param__Result=UInputMappingManager::GetPlayerAxisMappingStatic(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerAxisMappingStatic

// Begin Class UInputMappingManager Function GetPlayerInputMappingsStatic
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics
{
	struct InputMappingManager_eventGetPlayerInputMappingsStatic_Parms
	{
		APlayerController* Player;
		FPlayerInputMappings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Get input mappings for player\n// Static version\n" },
		{ "DisplayName", "Get Player Input Mappings" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Get input mappings for player\nStatic version" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerInputMappingsStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerInputMappingsStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(0, nullptr) }; // 4017813671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerInputMappingsStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::InputMappingManager_eventGetPlayerInputMappingsStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::InputMappingManager_eventGetPlayerInputMappingsStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerInputMappingsStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerInputMappings*)Z_Param__Result=UInputMappingManager::GetPlayerInputMappingsStatic(Z_Param_Player);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerInputMappingsStatic

// Begin Class UInputMappingManager Function GetPlayerMappingsByKey
struct Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics
{
	struct InputMappingManager_eventGetPlayerMappingsByKey_Parms
	{
		APlayerController* Player;
		FKey Key;
		TArray<FInputActionKeyMapping> Actions;
		TArray<FInputAxisKeyMapping> Axes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Finds any mappings that use the specified Key\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Finds any mappings that use the specified Key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerMappingsByKey", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::InputMappingManager_eventGetPlayerMappingsByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::InputMappingManager_eventGetPlayerMappingsByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execGetPlayerMappingsByKey)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_Actions);
	P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_Axes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerMappingsByKey(Z_Param_Player,Z_Param_Key,Z_Param_Out_Actions,Z_Param_Out_Axes);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function GetPlayerMappingsByKey

// Begin Class UInputMappingManager Function InitializePlayerInputOverridesStatic
struct Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics
{
	struct InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms
	{
		APlayerController* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Initialize a player's input overrides manually\n// This is what sets the saved input mappings on the Player Controller itself\n// If Auto Initialize Player Input Overrides is true in project settings, this is called automatically\n" },
		{ "DisplayName", "Initialize Player Input Overrides" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Initialize a player's input overrides manually\nThis is what sets the saved input mappings on the Player Controller itself\nIf Auto Initialize Player Input Overrides is true in project settings, this is called automatically" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "InitializePlayerInputOverridesStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execInitializePlayerInputOverridesStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputMappingManager::InitializePlayerInputOverridesStatic(Z_Param_Player);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function InitializePlayerInputOverridesStatic

// Begin Class UInputMappingManager Function OnRegisteredPlayerControllerDestroyed
struct Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics
{
	struct InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "OnRegisteredPlayerControllerDestroyed", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execOnRegisteredPlayerControllerDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRegisteredPlayerControllerDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function OnRegisteredPlayerControllerDestroyed

// Begin Class UInputMappingManager Function SetPlayerInputPresetByTag
struct Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics
{
	struct InputMappingManager_eventSetPlayerInputPresetByTag_Parms
	{
		APlayerController* Player;
		FGameplayTag PresetTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set a player's input mapping preset by tag\n// Presets and tags are defined in project settings (AutoSettings page)\n// Static version\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set a player's input mapping preset by tag\nPresets and tags are defined in project settings (AutoSettings page)\nStatic version" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetByTag_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_PresetTag = { "PresetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetByTag_Parms, PresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_PresetTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerInputPresetByTag", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::InputMappingManager_eventSetPlayerInputPresetByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::InputMappingManager_eventSetPlayerInputPresetByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execSetPlayerInputPresetByTag)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT(FGameplayTag,Z_Param_PresetTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputMappingManager::SetPlayerInputPresetByTag(Z_Param_Player,Z_Param_PresetTag);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function SetPlayerInputPresetByTag

// Begin Class UInputMappingManager Function SetPlayerInputPresetStatic
struct Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics
{
	struct InputMappingManager_eventSetPlayerInputPresetStatic_Parms
	{
		APlayerController* Player;
		FInputMappingPreset Preset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set a player's input mapping preset\n// Static version\n" },
		{ "DisplayName", "Set Player Input Preset" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set a player's input mapping preset\nStatic version" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetStatic_Parms, Preset), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(0, nullptr) }; // 548858416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerInputPresetStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::InputMappingManager_eventSetPlayerInputPresetStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::InputMappingManager_eventSetPlayerInputPresetStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execSetPlayerInputPresetStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT(FInputMappingPreset,Z_Param_Preset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputMappingManager::SetPlayerInputPresetStatic(Z_Param_Player,Z_Param_Preset);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function SetPlayerInputPresetStatic

// Begin Class UInputMappingManager Function SetPlayerKeyGroupStatic
struct Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics
{
	struct InputMappingManager_eventSetPlayerKeyGroupStatic_Parms
	{
		APlayerController* Player;
		FGameplayTag KeyGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set key group used to retrieve active mappings for a player\n// Useful for globally switching prompts between key groups when for example input device is changed\n" },
		{ "DisplayName", "Set Player Input Key Group" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set key group used to retrieve active mappings for a player\nUseful for globally switching prompts between key groups when for example input device is changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerKeyGroupStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerKeyGroupStatic_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_KeyGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerKeyGroupStatic", nullptr, nullptr, Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::InputMappingManager_eventSetPlayerKeyGroupStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::InputMappingManager_eventSetPlayerKeyGroupStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingManager::execSetPlayerKeyGroupStatic)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputMappingManager::SetPlayerKeyGroupStatic(Z_Param_Player,Z_Param_KeyGroup);
	P_NATIVE_END;
}
// End Class UInputMappingManager Function SetPlayerKeyGroupStatic

// Begin Class UInputMappingManager
void UInputMappingManager::StaticRegisterNativesUInputMappingManager()
{
	UClass* Class = UInputMappingManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayerActionOverride", &UInputMappingManager::execAddPlayerActionOverride },
		{ "AddPlayerActionOverrideStatic", &UInputMappingManager::execAddPlayerActionOverrideStatic },
		{ "AddPlayerAxisOverride", &UInputMappingManager::execAddPlayerAxisOverride },
		{ "AddPlayerAxisOverrideStatic", &UInputMappingManager::execAddPlayerAxisOverrideStatic },
		{ "GetDefaultInputPresets", &UInputMappingManager::execGetDefaultInputPresets },
		{ "GetPlayerActionMapping", &UInputMappingManager::execGetPlayerActionMapping },
		{ "GetPlayerActionMappings", &UInputMappingManager::execGetPlayerActionMappings },
		{ "GetPlayerActionMappingStatic", &UInputMappingManager::execGetPlayerActionMappingStatic },
		{ "GetPlayerAxisMapping", &UInputMappingManager::execGetPlayerAxisMapping },
		{ "GetPlayerAxisMappings", &UInputMappingManager::execGetPlayerAxisMappings },
		{ "GetPlayerAxisMappingStatic", &UInputMappingManager::execGetPlayerAxisMappingStatic },
		{ "GetPlayerInputMappingsStatic", &UInputMappingManager::execGetPlayerInputMappingsStatic },
		{ "GetPlayerMappingsByKey", &UInputMappingManager::execGetPlayerMappingsByKey },
		{ "InitializePlayerInputOverridesStatic", &UInputMappingManager::execInitializePlayerInputOverridesStatic },
		{ "OnRegisteredPlayerControllerDestroyed", &UInputMappingManager::execOnRegisteredPlayerControllerDestroyed },
		{ "SetPlayerInputPresetByTag", &UInputMappingManager::execSetPlayerInputPresetByTag },
		{ "SetPlayerInputPresetStatic", &UInputMappingManager::execSetPlayerInputPresetStatic },
		{ "SetPlayerKeyGroupStatic", &UInputMappingManager::execSetPlayerKeyGroupStatic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputMappingManager);
UClass* Z_Construct_UClass_UInputMappingManager_NoRegister()
{
	return UInputMappingManager::StaticClass();
}
struct Z_Construct_UClass_UInputMappingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages input mapping for players\n */" },
		{ "IncludePath", "InputMappingManager.h" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Manages input mapping for players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMappingsChanged_MetaData[] = {
		{ "Comment", "// Fired when any local player's input mappings are updated\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Fired when any local player's input mappings are updated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayerControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMappingsChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInputOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInputOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayerControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride, "AddPlayerActionOverride" }, // 1736658741
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic, "AddPlayerActionOverrideStatic" }, // 4130079007
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride, "AddPlayerAxisOverride" }, // 1228828338
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic, "AddPlayerAxisOverrideStatic" }, // 1432040073
		{ &Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets, "GetDefaultInputPresets" }, // 57702825
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping, "GetPlayerActionMapping" }, // 850228512
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings, "GetPlayerActionMappings" }, // 1042895386
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic, "GetPlayerActionMappingStatic" }, // 2726437337
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping, "GetPlayerAxisMapping" }, // 3127901722
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings, "GetPlayerAxisMappings" }, // 1128949790
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic, "GetPlayerAxisMappingStatic" }, // 1254745774
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic, "GetPlayerInputMappingsStatic" }, // 1825407646
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey, "GetPlayerMappingsByKey" }, // 3726743034
		{ &Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic, "InitializePlayerInputOverridesStatic" }, // 3045728910
		{ &Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed, "OnRegisteredPlayerControllerDestroyed" }, // 2107441729
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag, "SetPlayerInputPresetByTag" }, // 4062211945
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic, "SetPlayerInputPresetStatic" }, // 3407775144
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic, "SetPlayerKeyGroupStatic" }, // 2238731329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMappingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged = { "OnMappingsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMappingManager, OnMappingsChanged), Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMappingsChanged_MetaData), NewProp_OnMappingsChanged_MetaData) }; // 362324128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_Inner = { "PlayerInputOverrides", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(0, nullptr) }; // 4017813671
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides = { "PlayerInputOverrides", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMappingManager, PlayerInputOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputOverrides_MetaData), NewProp_PlayerInputOverrides_MetaData) }; // 4017813671
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_Inner = { "RegisteredPlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers = { "RegisteredPlayerControllers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMappingManager, RegisteredPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredPlayerControllers_MetaData), NewProp_RegisteredPlayerControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMappingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputMappingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputMappingManager_Statics::ClassParams = {
	&UInputMappingManager::StaticClass,
	"Settings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputMappingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputMappingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputMappingManager()
{
	if (!Z_Registration_Info_UClass_UInputMappingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputMappingManager.OuterSingleton, Z_Construct_UClass_UInputMappingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputMappingManager.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UInputMappingManager>()
{
	return UInputMappingManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMappingManager);
UInputMappingManager::~UInputMappingManager() {}
// End Class UInputMappingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputMappingManager, UInputMappingManager::StaticClass, TEXT("UInputMappingManager"), &Z_Registration_Info_UClass_UInputMappingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputMappingManager), 1876256115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_3063590038(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
