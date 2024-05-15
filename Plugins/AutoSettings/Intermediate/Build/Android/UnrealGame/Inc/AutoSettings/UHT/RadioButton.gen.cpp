// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/RadioSelect/RadioButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioButton() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Delegate FRadioSelectedSignature
struct Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventRadioSelectedSignature_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventRadioSelectedSignature_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "RadioSelectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventRadioSelectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventRadioSelectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRadioSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& RadioSelectedSignature, const FString& Value)
{
	struct _Script_AutoSettings_eventRadioSelectedSignature_Parms
	{
		FString Value;
	};
	_Script_AutoSettings_eventRadioSelectedSignature_Parms Parms;
	Parms.Value=Value;
	RadioSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRadioSelectedSignature

// Begin Class URadioButton Function GetLabel
struct Z_Construct_UFunction_URadioButton_GetLabel_Statics
{
	struct RadioButton_eventGetLabel_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioButton_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetLabel", nullptr, nullptr, Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_GetLabel_Statics::RadioButton_eventGetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_GetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_GetLabel_Statics::RadioButton_eventGetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_GetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_GetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execGetLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetLabel();
	P_NATIVE_END;
}
// End Class URadioButton Function GetLabel

// Begin Class URadioButton Function GetSelected
struct Z_Construct_UFunction_URadioButton_GetSelected_Statics
{
	struct RadioButton_eventGetSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RadioButton_eventGetSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RadioButton_eventGetSelected_Parms), &Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetSelected", nullptr, nullptr, Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_GetSelected_Statics::RadioButton_eventGetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_GetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_GetSelected_Statics::RadioButton_eventGetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_GetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_GetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execGetSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSelected();
	P_NATIVE_END;
}
// End Class URadioButton Function GetSelected

// Begin Class URadioButton Function GetValue
struct Z_Construct_UFunction_URadioButton_GetValue_Statics
{
	struct RadioButton_eventGetValue_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Return the value associated with the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Return the value associated with the button" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioButton_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioButton_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_GetValue_Statics::RadioButton_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_GetValue_Statics::RadioButton_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class URadioButton Function GetValue

// Begin Class URadioButton Function SetLabel
struct Z_Construct_UFunction_URadioButton_SetLabel_Statics
{
	struct RadioButton_eventSetLabel_Parms
	{
		FText InLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set the label of the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set the label of the button" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_SetLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioButton_eventSetLabel_Parms, InLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetLabel_Statics::NewProp_InLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetLabel", nullptr, nullptr, Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_SetLabel_Statics::RadioButton_eventSetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_SetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_SetLabel_Statics::RadioButton_eventSetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_SetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_SetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execSetLabel)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLabel(Z_Param_InLabel);
	P_NATIVE_END;
}
// End Class URadioButton Function SetLabel

// Begin Class URadioButton Function SetSelected
struct Z_Construct_UFunction_URadioButton_SetSelected_Statics
{
	struct RadioButton_eventSetSelected_Parms
	{
		bool InSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set whether the button is selected or not\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set whether the button is selected or not" },
	};
#endif // WITH_METADATA
	static void NewProp_InSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected_SetBit(void* Obj)
{
	((RadioButton_eventSetSelected_Parms*)Obj)->InSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected = { "InSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RadioButton_eventSetSelected_Parms), &Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_SetSelected_Statics::RadioButton_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_SetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_SetSelected_Statics::RadioButton_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execSetSelected)
{
	P_GET_UBOOL(Z_Param_InSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_InSelected);
	P_NATIVE_END;
}
// End Class URadioButton Function SetSelected

// Begin Class URadioButton Function SetValue
struct Z_Construct_UFunction_URadioButton_SetValue_Statics
{
	struct RadioButton_eventSetValue_Parms
	{
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set the value associated with the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set the value associated with the button" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioButton_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioButton_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioButton_SetValue_Statics::RadioButton_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioButton_SetValue_Statics::RadioButton_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execSetValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class URadioButton Function SetValue

// Begin Class URadioButton Function TriggerSelection
struct Z_Construct_UFunction_URadioButton_TriggerSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "TriggerSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URadioButton_TriggerSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioButton::execTriggerSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerSelection();
	P_NATIVE_END;
}
// End Class URadioButton Function TriggerSelection

// Begin Class URadioButton Function UpdateLabel
struct RadioButton_eventUpdateLabel_Parms
{
	FText InLabel;
};
static FName NAME_URadioButton_UpdateLabel = FName(TEXT("UpdateLabel"));
void URadioButton::UpdateLabel(FText const& InLabel)
{
	RadioButton_eventUpdateLabel_Parms Parms;
	Parms.InLabel=InLabel;
	ProcessEvent(FindFunctionChecked(NAME_URadioButton_UpdateLabel),&Parms);
}
struct Z_Construct_UFunction_URadioButton_UpdateLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioButton_eventUpdateLabel_Parms, InLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLabel_MetaData), NewProp_InLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "UpdateLabel", nullptr, nullptr, Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers), sizeof(RadioButton_eventUpdateLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(RadioButton_eventUpdateLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_UpdateLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URadioButton Function UpdateLabel

// Begin Class URadioButton Function UpdateSelected
struct RadioButton_eventUpdateSelected_Parms
{
	bool InSelected;
};
static FName NAME_URadioButton_UpdateSelected = FName(TEXT("UpdateSelected"));
void URadioButton::UpdateSelected(bool InSelected)
{
	RadioButton_eventUpdateSelected_Parms Parms;
	Parms.InSelected=InSelected ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_URadioButton_UpdateSelected),&Parms);
}
struct Z_Construct_UFunction_URadioButton_UpdateSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected_SetBit(void* Obj)
{
	((RadioButton_eventUpdateSelected_Parms*)Obj)->InSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected = { "InSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RadioButton_eventUpdateSelected_Parms), &Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "UpdateSelected", nullptr, nullptr, Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers), sizeof(RadioButton_eventUpdateSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(RadioButton_eventUpdateSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioButton_UpdateSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URadioButton Function UpdateSelected

// Begin Class URadioButton
void URadioButton::StaticRegisterNativesURadioButton()
{
	UClass* Class = URadioButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLabel", &URadioButton::execGetLabel },
		{ "GetSelected", &URadioButton::execGetSelected },
		{ "GetValue", &URadioButton::execGetValue },
		{ "SetLabel", &URadioButton::execSetLabel },
		{ "SetSelected", &URadioButton::execSetSelected },
		{ "SetValue", &URadioButton::execSetValue },
		{ "TriggerSelection", &URadioButton::execTriggerSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadioButton);
UClass* Z_Construct_UClass_URadioButton_NoRegister()
{
	return URadioButton::StaticClass();
}
struct Z_Construct_UClass_URadioButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single generic radio button\n */" },
		{ "IncludePath", "UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "A single generic radio button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Event triggered when this button is selected\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Event triggered when this button is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_Selected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioButton_GetLabel, "GetLabel" }, // 3764944457
		{ &Z_Construct_UFunction_URadioButton_GetSelected, "GetSelected" }, // 2143347235
		{ &Z_Construct_UFunction_URadioButton_GetValue, "GetValue" }, // 1922379550
		{ &Z_Construct_UFunction_URadioButton_SetLabel, "SetLabel" }, // 252353782
		{ &Z_Construct_UFunction_URadioButton_SetSelected, "SetSelected" }, // 1540888785
		{ &Z_Construct_UFunction_URadioButton_SetValue, "SetValue" }, // 3269017567
		{ &Z_Construct_UFunction_URadioButton_TriggerSelection, "TriggerSelection" }, // 3680590817
		{ &Z_Construct_UFunction_URadioButton_UpdateLabel, "UpdateLabel" }, // 3903048438
		{ &Z_Construct_UFunction_URadioButton_UpdateSelected, "UpdateSelected" }, // 3450195519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioButton, OnSelected), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelected_MetaData), NewProp_OnSelected_MetaData) }; // 99844229
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioButton, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioButton, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_SetBit(void* Obj)
{
	((URadioButton*)Obj)->Selected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URadioButton), &Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selected_MetaData), NewProp_Selected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Selected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadioButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadioButton_Statics::ClassParams = {
	&URadioButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadioButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::Class_MetaDataParams), Z_Construct_UClass_URadioButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadioButton()
{
	if (!Z_Registration_Info_UClass_URadioButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadioButton.OuterSingleton, Z_Construct_UClass_URadioButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadioButton.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<URadioButton>()
{
	return URadioButton::StaticClass();
}
URadioButton::URadioButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadioButton);
URadioButton::~URadioButton() {}
// End Class URadioButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URadioButton, URadioButton::StaticClass, TEXT("URadioButton"), &Z_Registration_Info_UClass_URadioButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadioButton), 2335133530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_4196891230(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
