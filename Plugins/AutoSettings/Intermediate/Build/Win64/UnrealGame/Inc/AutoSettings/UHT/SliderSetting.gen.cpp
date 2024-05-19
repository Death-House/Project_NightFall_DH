// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SliderSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSliderSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USliderSetting Function ClampRawValue
struct Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics
{
	struct SliderSetting_eventClampRawValue_Parms
	{
		float RawValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Clamps a value between the Left Value and Right Value of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Clamps a value between the Left Value and Right Value of the slider" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventClampRawValue_Parms, RawValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventClampRawValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "ClampRawValue", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::SliderSetting_eventClampRawValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::SliderSetting_eventClampRawValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_ClampRawValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execClampRawValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ClampRawValue(Z_Param_RawValue);
	P_NATIVE_END;
}
// End Class USliderSetting Function ClampRawValue

// Begin Class USliderSetting Function NormalizedValueToRaw
struct Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics
{
	struct SliderSetting_eventNormalizedValueToRaw_Parms
	{
		float NormalizedValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Converts from normalized 0-1 slider value to a raw setting value between Left Value and Right Value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Converts from normalized 0-1 slider value to a raw setting value between Left Value and Right Value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventNormalizedValueToRaw_Parms, NormalizedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventNormalizedValueToRaw_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_NormalizedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "NormalizedValueToRaw", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::SliderSetting_eventNormalizedValueToRaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::SliderSetting_eventNormalizedValueToRaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execNormalizedValueToRaw)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->NormalizedValueToRaw(Z_Param_NormalizedValue);
	P_NATIVE_END;
}
// End Class USliderSetting Function NormalizedValueToRaw

// Begin Class USliderSetting Function OnSliderValueUpdated
struct SliderSetting_eventOnSliderValueUpdated_Parms
{
	float NormalizedValue;
	float RawValue;
};
static FName NAME_USliderSetting_OnSliderValueUpdated = FName(TEXT("OnSliderValueUpdated"));
void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
{
	SliderSetting_eventOnSliderValueUpdated_Parms Parms;
	Parms.NormalizedValue=NormalizedValue;
	Parms.RawValue=RawValue;
	ProcessEvent(FindFunctionChecked(NAME_USliderSetting_OnSliderValueUpdated),&Parms);
}
struct Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Called when the slider's value changes\n// Useful for updating UI such as labels to reflect the internal value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Called when the slider's value changes\nUseful for updating UI such as labels to reflect the internal value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventOnSliderValueUpdated_Parms, NormalizedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventOnSliderValueUpdated_Parms, RawValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_NormalizedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_RawValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "OnSliderValueUpdated", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers), sizeof(SliderSetting_eventOnSliderValueUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(SliderSetting_eventOnSliderValueUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USliderSetting Function OnSliderValueUpdated

// Begin Class USliderSetting Function RawValueToNormalized
struct Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics
{
	struct SliderSetting_eventRawValueToNormalized_Parms
	{
		float RawValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Converts from a raw setting value between Left Value and Right Value to a normalized 0-1 slider value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Converts from a raw setting value between Left Value and Right Value to a normalized 0-1 slider value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventRawValueToNormalized_Parms, RawValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventRawValueToNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "RawValueToNormalized", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::SliderSetting_eventRawValueToNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::SliderSetting_eventRawValueToNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_RawValueToNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execRawValueToNormalized)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->RawValueToNormalized(Z_Param_RawValue);
	P_NATIVE_END;
}
// End Class USliderSetting Function RawValueToNormalized

// Begin Class USliderSetting Function ShouldSaveCurrentValue
struct SliderSetting_eventShouldSaveCurrentValue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SliderSetting_eventShouldSaveCurrentValue_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USliderSetting_ShouldSaveCurrentValue = FName(TEXT("ShouldSaveCurrentValue"));
bool USliderSetting::ShouldSaveCurrentValue() const
{
	SliderSetting_eventShouldSaveCurrentValue_Parms Parms;
	const_cast<USliderSetting*>(this)->ProcessEvent(FindFunctionChecked(NAME_USliderSetting_ShouldSaveCurrentValue),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Used to determine if the slider value can also be saved when it is applied\n// e.g. Apply the value as the slider value is updating from mouse drag, but for optimization only save when the handle is released\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Used to determine if the slider value can also be saved when it is applied\ne.g. Apply the value as the slider value is updating from mouse drag, but for optimization only save when the handle is released" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SliderSetting_eventShouldSaveCurrentValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliderSetting_eventShouldSaveCurrentValue_Parms), &Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "ShouldSaveCurrentValue", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers), sizeof(SliderSetting_eventShouldSaveCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(SliderSetting_eventShouldSaveCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execShouldSaveCurrentValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSaveCurrentValue_Implementation();
	P_NATIVE_END;
}
// End Class USliderSetting Function ShouldSaveCurrentValue

// Begin Class USliderSetting Function SliderValueUpdated
struct Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics
{
	struct SliderSetting_eventSliderValueUpdated_Parms
	{
		float NormalizedValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Takes a slider value in range 0-1, maps it and applies the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Takes a slider value in range 0-1, maps it and applies the setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventSliderValueUpdated_Parms, NormalizedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::NewProp_NormalizedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "SliderValueUpdated", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::SliderSetting_eventSliderValueUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::SliderSetting_eventSliderValueUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_SliderValueUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execSliderValueUpdated)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderValueUpdated(Z_Param_NormalizedValue);
	P_NATIVE_END;
}
// End Class USliderSetting Function SliderValueUpdated

// Begin Class USliderSetting Function UpdateSliderValue
struct SliderSetting_eventUpdateSliderValue_Parms
{
	float NormalizedValue;
	float RawValue;
};
static FName NAME_USliderSetting_UpdateSliderValue = FName(TEXT("UpdateSliderValue"));
void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
{
	SliderSetting_eventUpdateSliderValue_Parms Parms;
	Parms.NormalizedValue=NormalizedValue;
	Parms.RawValue=RawValue;
	ProcessEvent(FindFunctionChecked(NAME_USliderSetting_UpdateSliderValue),&Parms);
}
struct Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Called to update the slider with a new setting value\n// Not called when the slider's value itself is changed\n// @param NormalizedValue Value mapped to range 0-1 between left value and right value\n// @param RawValue Raw value of the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Called to update the slider with a new setting value\nNot called when the slider's value itself is changed\n@param NormalizedValue Value mapped to range 0-1 between left value and right value\n@param RawValue Raw value of the setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventUpdateSliderValue_Parms, NormalizedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliderSetting_eventUpdateSliderValue_Parms, RawValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_NormalizedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_RawValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "UpdateSliderValue", nullptr, nullptr, Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers), sizeof(SliderSetting_eventUpdateSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(SliderSetting_eventUpdateSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USliderSetting_UpdateSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USliderSetting::execUpdateSliderValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSliderValue_Implementation(Z_Param_NormalizedValue,Z_Param_RawValue);
	P_NATIVE_END;
}
// End Class USliderSetting Function UpdateSliderValue

// Begin Class USliderSetting
void USliderSetting::StaticRegisterNativesUSliderSetting()
{
	UClass* Class = USliderSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClampRawValue", &USliderSetting::execClampRawValue },
		{ "NormalizedValueToRaw", &USliderSetting::execNormalizedValueToRaw },
		{ "RawValueToNormalized", &USliderSetting::execRawValueToNormalized },
		{ "ShouldSaveCurrentValue", &USliderSetting::execShouldSaveCurrentValue },
		{ "SliderValueUpdated", &USliderSetting::execSliderValueUpdated },
		{ "UpdateSliderValue", &USliderSetting::execUpdateSliderValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USliderSetting);
UClass* Z_Construct_UClass_USliderSetting_NoRegister()
{
	return USliderSetting::StaticClass();
}
struct Z_Construct_UClass_USliderSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AutoSetting with generic slider functionality\n */" },
		{ "IncludePath", "UI/SettingControls/SliderSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base AutoSetting with generic slider functionality" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftValue_MetaData[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Value assigned with the left-most position of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Value assigned with the left-most position of the slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightValue_MetaData[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Value assigned with the right-most position of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Value assigned with the right-most position of the slider" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USliderSetting_ClampRawValue, "ClampRawValue" }, // 1415373824
		{ &Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw, "NormalizedValueToRaw" }, // 742845807
		{ &Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated, "OnSliderValueUpdated" }, // 2618631488
		{ &Z_Construct_UFunction_USliderSetting_RawValueToNormalized, "RawValueToNormalized" }, // 3449606408
		{ &Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue, "ShouldSaveCurrentValue" }, // 3089127745
		{ &Z_Construct_UFunction_USliderSetting_SliderValueUpdated, "SliderValueUpdated" }, // 2496887622
		{ &Z_Construct_UFunction_USliderSetting_UpdateSliderValue, "UpdateSliderValue" }, // 1563180997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USliderSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue = { "LeftValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliderSetting, LeftValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftValue_MetaData), NewProp_LeftValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue = { "RightValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliderSetting, RightValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightValue_MetaData), NewProp_RightValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USliderSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USliderSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USliderSetting_Statics::ClassParams = {
	&USliderSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USliderSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_USliderSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USliderSetting()
{
	if (!Z_Registration_Info_UClass_USliderSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USliderSetting.OuterSingleton, Z_Construct_UClass_USliderSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USliderSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USliderSetting>()
{
	return USliderSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USliderSetting);
USliderSetting::~USliderSetting() {}
// End Class USliderSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USliderSetting, USliderSetting::StaticClass, TEXT("USliderSetting"), &Z_Registration_Info_UClass_USliderSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USliderSetting), 3484531698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_3828545540(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
