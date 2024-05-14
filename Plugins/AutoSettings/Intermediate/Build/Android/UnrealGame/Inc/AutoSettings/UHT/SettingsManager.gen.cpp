// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/SettingsManager.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsManager() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingsManager();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingsManager_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoSettingData();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin ScriptStruct FAutoSettingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoSettingData;
class UScriptStruct* FAutoSettingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoSettingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoSettingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoSettingData, (UObject*)Z_Construct_UPackage__Script_AutoSettings(), TEXT("AutoSettingData"));
	}
	return Z_Registration_Info_UScriptStruct_AutoSettingData.OuterSingleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FAutoSettingData>()
{
	return FAutoSettingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoSettingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents data for a saved setting\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Represents data for a saved setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Key of the setting, typically the CVar name\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Key of the setting, typically the CVar name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Value of the setting\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Value of the setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Setting tags for use when saving\n// Can be used to categorize or flag certain settings that might be useful to external logic\n// Transient\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Setting tags for use when saving\nCan be used to categorize or flag certain settings that might be useful to external logic\nTransient" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoSettingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoSettingData, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoSettingData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoSettingData, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	nullptr,
	&NewStructOps,
	"AutoSettingData",
	Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers),
	sizeof(FAutoSettingData),
	alignof(FAutoSettingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoSettingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoSettingData()
{
	if (!Z_Registration_Info_UScriptStruct_AutoSettingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoSettingData.InnerSingleton, Z_Construct_UScriptStruct_FAutoSettingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoSettingData.InnerSingleton;
}
// End ScriptStruct FAutoSettingData

// Begin Delegate FOnSettingSaved
struct Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventOnSettingSaved_Parms
	{
		FAutoSettingData SettingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventOnSettingSaved_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(0, nullptr) }; // 2541599920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::NewProp_SettingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "OnSettingSaved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::_Script_AutoSettings_eventOnSettingSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::_Script_AutoSettings_eventOnSettingSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSettingSaved_DelegateWrapper(const FMulticastScriptDelegate& OnSettingSaved, FAutoSettingData SettingData)
{
	struct _Script_AutoSettings_eventOnSettingSaved_Parms
	{
		FAutoSettingData SettingData;
	};
	_Script_AutoSettings_eventOnSettingSaved_Parms Parms;
	Parms.SettingData=SettingData;
	OnSettingSaved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSettingSaved

// Begin Class USettingsManager Function ApplySettingStatic
struct Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics
{
	struct SettingsManager_eventApplySettingStatic_Parms
	{
		FAutoSettingData SettingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies a setting\n" },
		{ "DisplayName", "Apply Setting" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Applies a setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventApplySettingStatic_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(0, nullptr) }; // 2541599920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::NewProp_SettingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "ApplySettingStatic", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::SettingsManager_eventApplySettingStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::SettingsManager_eventApplySettingStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_ApplySettingStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execApplySettingStatic)
{
	P_GET_STRUCT(FAutoSettingData,Z_Param_SettingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::ApplySettingStatic(Z_Param_SettingData);
	P_NATIVE_END;
}
// End Class USettingsManager Function ApplySettingStatic

// Begin Class USettingsManager Function AutoDetectSettingsStatic
struct Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics
{
	struct SettingsManager_eventAutoDetectSettingsStatic_Parms
	{
		int32 WorkScale;
		float CPUMultiplier;
		float GPUMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Auto detect, apply, and save scalability settings\n// This is the same as calling RunHardwareBenchmark and ApplyHardwareBenchmarkResults on GameUserSettings, except the values are saved with Auto Settings\n// Note: To change how your project determines which settings to apply from the result, see [ScalabilitySettings] in BaseScalability.ini and override the values in your project's DefaultScalability.ini\n" },
		{ "CPP_Default_CPUMultiplier", "1.000000" },
		{ "CPP_Default_GPUMultiplier", "1.000000" },
		{ "CPP_Default_WorkScale", "10" },
		{ "DisplayName", "Auto Detect Settings" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Auto detect, apply, and save scalability settings\nThis is the same as calling RunHardwareBenchmark and ApplyHardwareBenchmarkResults on GameUserSettings, except the values are saved with Auto Settings\nNote: To change how your project determines which settings to apply from the result, see [ScalabilitySettings] in BaseScalability.ini and override the values in your project's DefaultScalability.ini" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CPUMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_WorkScale = { "WorkScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, WorkScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_CPUMultiplier = { "CPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, CPUMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_GPUMultiplier = { "GPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, GPUMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_WorkScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_CPUMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_GPUMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "AutoDetectSettingsStatic", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::SettingsManager_eventAutoDetectSettingsStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::SettingsManager_eventAutoDetectSettingsStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execAutoDetectSettingsStatic)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WorkScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CPUMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GPUMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::AutoDetectSettingsStatic(Z_Param_WorkScale,Z_Param_CPUMultiplier,Z_Param_GPUMultiplier);
	P_NATIVE_END;
}
// End Class USettingsManager Function AutoDetectSettingsStatic

// Begin Class USettingsManager Function GetValue
struct Z_Construct_UFunction_USettingsManager_GetValue_Statics
{
	struct SettingsManager_eventGetValue_Parms
	{
		FName Key;
		bool bPreferConfigValue;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Return a setting's value from CVar or config\n// @param\x09""bPreferConfigValue\x09If true, the saved config value will be preferred over the applied CVar value if they differ\n" },
		{ "CPP_Default_bPreferConfigValue", "false" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Return a setting's value from CVar or config\n@param        bPreferConfigValue      If true, the saved config value will be preferred over the applied CVar value if they differ" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_bPreferConfigValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferConfigValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventGetValue_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue_SetBit(void* Obj)
{
	((SettingsManager_eventGetValue_Parms*)Obj)->bPreferConfigValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue = { "bPreferConfigValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventGetValue_Parms), &Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_GetValue_Statics::SettingsManager_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_GetValue_Statics::SettingsManager_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execGetValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bPreferConfigValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USettingsManager::GetValue(Z_Param_Key,Z_Param_bPreferConfigValue);
	P_NATIVE_END;
}
// End Class USettingsManager Function GetValue

// Begin Class USettingsManager Function RegisterBoolCVarSetting
struct Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics
{
	struct SettingsManager_eventRegisterBoolCVarSetting_Parms
	{
		FName Name;
		bool DefaultValue;
		FString Help;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new bool console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new bool console variable and check config for a saved value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSetting_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterBoolCVarSetting_Parms*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSetting_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSetting_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterBoolCVarSetting", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::SettingsManager_eventRegisterBoolCVarSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::SettingsManager_eventRegisterBoolCVarSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterBoolCVarSetting)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterBoolCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterBoolCVarSetting

// Begin Class USettingsManager Function RegisterBoolCVarSettingWithCallback
struct Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics
{
	struct SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms
	{
		FName Name;
		bool DefaultValue;
		FString Help;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 270560947
void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterBoolCVarSettingWithCallback", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterBoolCVarSettingWithCallback)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterBoolCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FBoolCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterBoolCVarSettingWithCallback

// Begin Class USettingsManager Function RegisterFloatCVarSetting
struct Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics
{
	struct SettingsManager_eventRegisterFloatCVarSetting_Parms
	{
		FName Name;
		float DefaultValue;
		FString Help;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new float console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new float console variable and check config for a saved value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterFloatCVarSetting", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::SettingsManager_eventRegisterFloatCVarSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::SettingsManager_eventRegisterFloatCVarSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterFloatCVarSetting)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterFloatCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterFloatCVarSetting

// Begin Class USettingsManager Function RegisterFloatCVarSettingWithCallback
struct Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics
{
	struct SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms
	{
		FName Name;
		float DefaultValue;
		FString Help;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 197227618
void Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterFloatCVarSettingWithCallback", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterFloatCVarSettingWithCallback)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterFloatCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FFloatCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterFloatCVarSettingWithCallback

// Begin Class USettingsManager Function RegisterIntCVarSetting
struct Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics
{
	struct SettingsManager_eventRegisterIntCVarSetting_Parms
	{
		FName Name;
		int32 DefaultValue;
		FString Help;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new int console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new int console variable and check config for a saved value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterIntCVarSetting", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::SettingsManager_eventRegisterIntCVarSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::SettingsManager_eventRegisterIntCVarSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterIntCVarSetting)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterIntCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterIntCVarSetting

// Begin Class USettingsManager Function RegisterIntCVarSettingWithCallback
struct Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics
{
	struct SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms
	{
		FName Name;
		int32 DefaultValue;
		FString Help;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3098657466
void Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterIntCVarSettingWithCallback", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterIntCVarSettingWithCallback)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterIntCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FIntCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterIntCVarSettingWithCallback

// Begin Class USettingsManager Function RegisterStringCVarSetting
struct Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics
{
	struct SettingsManager_eventRegisterStringCVarSetting_Parms
	{
		FName Name;
		FString DefaultValue;
		FString Help;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new string console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new string console variable and check config for a saved value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterStringCVarSetting", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::SettingsManager_eventRegisterStringCVarSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::SettingsManager_eventRegisterStringCVarSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterStringCVarSetting)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterStringCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterStringCVarSetting

// Begin Class USettingsManager Function RegisterStringCVarSettingWithCallback
struct Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics
{
	struct SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms
	{
		FName Name;
		FString DefaultValue;
		FString Help;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Help_MetaData), NewProp_Help_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 915331633
void Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterStringCVarSettingWithCallback", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execRegisterStringCVarSettingWithCallback)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_Help);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::RegisterStringCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FStringCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class USettingsManager Function RegisterStringCVarSettingWithCallback

// Begin Class USettingsManager Function SaveSettingStatic
struct Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics
{
	struct SettingsManager_eventSaveSettingStatic_Parms
	{
		FAutoSettingData SettingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies and saves a setting\n" },
		{ "DisplayName", "Apply and Save Setting" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Applies and saves a setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsManager_eventSaveSettingStatic_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(0, nullptr) }; // 2541599920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::NewProp_SettingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "SaveSettingStatic", nullptr, nullptr, Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::SettingsManager_eventSaveSettingStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::SettingsManager_eventSaveSettingStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsManager_SaveSettingStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsManager::execSaveSettingStatic)
{
	P_GET_STRUCT(FAutoSettingData,Z_Param_SettingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingsManager::SaveSettingStatic(Z_Param_SettingData);
	P_NATIVE_END;
}
// End Class USettingsManager Function SaveSettingStatic

// Begin Class USettingsManager
void USettingsManager::StaticRegisterNativesUSettingsManager()
{
	UClass* Class = USettingsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySettingStatic", &USettingsManager::execApplySettingStatic },
		{ "AutoDetectSettingsStatic", &USettingsManager::execAutoDetectSettingsStatic },
		{ "GetValue", &USettingsManager::execGetValue },
		{ "RegisterBoolCVarSetting", &USettingsManager::execRegisterBoolCVarSetting },
		{ "RegisterBoolCVarSettingWithCallback", &USettingsManager::execRegisterBoolCVarSettingWithCallback },
		{ "RegisterFloatCVarSetting", &USettingsManager::execRegisterFloatCVarSetting },
		{ "RegisterFloatCVarSettingWithCallback", &USettingsManager::execRegisterFloatCVarSettingWithCallback },
		{ "RegisterIntCVarSetting", &USettingsManager::execRegisterIntCVarSetting },
		{ "RegisterIntCVarSettingWithCallback", &USettingsManager::execRegisterIntCVarSettingWithCallback },
		{ "RegisterStringCVarSetting", &USettingsManager::execRegisterStringCVarSetting },
		{ "RegisterStringCVarSettingWithCallback", &USettingsManager::execRegisterStringCVarSettingWithCallback },
		{ "SaveSettingStatic", &USettingsManager::execSaveSettingStatic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsManager);
UClass* Z_Construct_UClass_USettingsManager_NoRegister()
{
	return USettingsManager::StaticClass();
}
struct Z_Construct_UClass_USettingsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles saving, loading, and applying settings\n */" },
		{ "IncludePath", "SettingsManager.h" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Handles saving, loading, and applying settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingSaved_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Fired when a setting is saved (Must actually be a save, not a config update)\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Fired when a setting is saved (Must actually be a save, not a config update)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IniFilename_MetaData[] = {
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingSaved;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IniFilename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsManager_ApplySettingStatic, "ApplySettingStatic" }, // 1075504840
		{ &Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic, "AutoDetectSettingsStatic" }, // 2266081864
		{ &Z_Construct_UFunction_USettingsManager_GetValue, "GetValue" }, // 3293103820
		{ &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting, "RegisterBoolCVarSetting" }, // 396005885
		{ &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback, "RegisterBoolCVarSettingWithCallback" }, // 3674935289
		{ &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting, "RegisterFloatCVarSetting" }, // 1721689255
		{ &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback, "RegisterFloatCVarSettingWithCallback" }, // 436106113
		{ &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting, "RegisterIntCVarSetting" }, // 1339708864
		{ &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback, "RegisterIntCVarSettingWithCallback" }, // 3685894746
		{ &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting, "RegisterStringCVarSetting" }, // 1788850051
		{ &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback, "RegisterStringCVarSettingWithCallback" }, // 3931678364
		{ &Z_Construct_UFunction_USettingsManager_SaveSettingStatic, "SaveSettingStatic" }, // 3245821692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved = { "OnSettingSaved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsManager, OnSettingSaved), Z_Construct_UDelegateFunction_AutoSettings_OnSettingSaved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingSaved_MetaData), NewProp_OnSettingSaved_MetaData) }; // 2867605131
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename = { "IniFilename", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsManager, IniFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IniFilename_MetaData), NewProp_IniFilename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettingsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsManager_Statics::ClassParams = {
	&USettingsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USettingsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsManager()
{
	if (!Z_Registration_Info_UClass_USettingsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsManager.OuterSingleton, Z_Construct_UClass_USettingsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsManager.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USettingsManager>()
{
	return USettingsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsManager);
USettingsManager::~USettingsManager() {}
// End Class USettingsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoSettingData::StaticStruct, Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewStructOps, TEXT("AutoSettingData"), &Z_Registration_Info_UScriptStruct_AutoSettingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoSettingData), 2541599920U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsManager, USettingsManager::StaticClass, TEXT("USettingsManager"), &Z_Registration_Info_UClass_USettingsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsManager), 3594473019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_2046122069(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
