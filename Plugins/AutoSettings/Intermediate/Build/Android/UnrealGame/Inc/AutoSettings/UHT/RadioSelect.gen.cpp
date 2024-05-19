// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/RadioSelect/RadioSelect.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioSelect() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect();
AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature();
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class URadioSelect Function ButtonSelected
struct Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics
{
	struct RadioSelect_eventButtonSelected_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventButtonSelected_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "ButtonSelected", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::RadioSelect_eventButtonSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::RadioSelect_eventButtonSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_ButtonSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execButtonSelected)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ButtonSelected(Z_Param_Value);
	P_NATIVE_END;
}
// End Class URadioSelect Function ButtonSelected

// Begin Class URadioSelect Function GetOptions
struct Z_Construct_UFunction_URadioSelect_GetOptions_Statics
{
	struct RadioSelect_eventGetOptions_Parms
	{
		TArray<FSettingOption> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Returns the available options\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Returns the available options" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventGetOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "GetOptions", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::RadioSelect_eventGetOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_GetOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::RadioSelect_eventGetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_GetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_GetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execGetOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSettingOption>*)Z_Param__Result=P_THIS->GetOptions();
	P_NATIVE_END;
}
// End Class URadioSelect Function GetOptions

// Begin Class URadioSelect Function GetRadioButtonWidgets
struct Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics
{
	struct RadioSelect_eventGetRadioButtonWidgets_Parms
	{
		TArray<URadioButton*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Returns the Radio Button widgets created by this Radio Select\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Returns the Radio Button widgets created by this Radio Select" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventGetRadioButtonWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "GetRadioButtonWidgets", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::RadioSelect_eventGetRadioButtonWidgets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::RadioSelect_eventGetRadioButtonWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execGetRadioButtonWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URadioButton*>*)Z_Param__Result=P_THIS->GetRadioButtonWidgets();
	P_NATIVE_END;
}
// End Class URadioSelect Function GetRadioButtonWidgets

// Begin Class URadioSelect Function OnButtonCreated
struct RadioSelect_eventOnButtonCreated_Parms
{
	URadioButton* Button;
	UPanelSlot* NewSlot;
};
static FName NAME_URadioSelect_OnButtonCreated = FName(TEXT("OnButtonCreated"));
void URadioSelect::OnButtonCreated(URadioButton* Button, UPanelSlot* NewSlot)
{
	RadioSelect_eventOnButtonCreated_Parms Parms;
	Parms.Button=Button;
	Parms.NewSlot=NewSlot;
	ProcessEvent(FindFunctionChecked(NAME_URadioSelect_OnButtonCreated),&Parms);
}
struct Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Called when a Radio Button is created to run any initialization on the widget and slot\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Called when a Radio Button is created to run any initialization on the widget and slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventOnButtonCreated_Parms, Button), Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot = { "NewSlot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventOnButtonCreated_Parms, NewSlot), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSlot_MetaData), NewProp_NewSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "OnButtonCreated", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers), sizeof(RadioSelect_eventOnButtonCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(RadioSelect_eventOnButtonCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_OnButtonCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execOnButtonCreated)
{
	P_GET_OBJECT(URadioButton,Z_Param_Button);
	P_GET_OBJECT(UPanelSlot,Z_Param_NewSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonCreated_Implementation(Z_Param_Button,Z_Param_NewSlot);
	P_NATIVE_END;
}
// End Class URadioSelect Function OnButtonCreated

// Begin Class URadioSelect Function Select
struct Z_Construct_UFunction_URadioSelect_Select_Statics
{
	struct RadioSelect_eventSelect_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Select the option of the given value\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Select the option of the given value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelect_Select_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventSelect_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_Select_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "Select", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelect_Select_Statics::RadioSelect_eventSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_Select_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_Select_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelect_Select_Statics::RadioSelect_eventSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_Select()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_Select_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execSelect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Select(Z_Param_Value);
	P_NATIVE_END;
}
// End Class URadioSelect Function Select

// Begin Class URadioSelect Function SetOptions
struct Z_Construct_UFunction_URadioSelect_SetOptions_Statics
{
	struct RadioSelect_eventSetOptions_Parms
	{
		TArray<FSettingOption> InOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Set the available options\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Set the available options" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadioSelect_eventSetOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "SetOptions", nullptr, nullptr, Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::RadioSelect_eventSetOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadioSelect_SetOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::RadioSelect_eventSetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadioSelect_SetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioSelect_SetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadioSelect::execSetOptions)
{
	P_GET_TARRAY(FSettingOption,Z_Param_InOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOptions(Z_Param_InOptions);
	P_NATIVE_END;
}
// End Class URadioSelect Function SetOptions

// Begin Class URadioSelect
void URadioSelect::StaticRegisterNativesURadioSelect()
{
	UClass* Class = URadioSelect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ButtonSelected", &URadioSelect::execButtonSelected },
		{ "GetOptions", &URadioSelect::execGetOptions },
		{ "GetRadioButtonWidgets", &URadioSelect::execGetRadioButtonWidgets },
		{ "OnButtonCreated", &URadioSelect::execOnButtonCreated },
		{ "Select", &URadioSelect::execSelect },
		{ "SetOptions", &URadioSelect::execSetOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadioSelect);
UClass* Z_Construct_UClass_URadioSelect_NoRegister()
{
	return URadioSelect::StaticClass();
}
struct Z_Construct_UClass_URadioSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a widget that contains multiple radio buttons, of which only one may be selected at a time\n */" },
		{ "IncludePath", "UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Base class for a widget that contains multiple radio buttons, of which only one may be selected at a time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Option definitions\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Option definitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioButtonClass_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// RadioButton class to create for each option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "RadioButton class to create for each option" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangedEvent_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Fired when the selection changes\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Fired when the selection changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Radio Select" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RadioButtonClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectionChangedEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadioButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RadioButtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioSelect_ButtonSelected, "ButtonSelected" }, // 2659974564
		{ &Z_Construct_UFunction_URadioSelect_GetOptions, "GetOptions" }, // 837249795
		{ &Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets, "GetRadioButtonWidgets" }, // 1578770370
		{ &Z_Construct_UFunction_URadioSelect_OnButtonCreated, "OnButtonCreated" }, // 878926065
		{ &Z_Construct_UFunction_URadioSelect_Select, "Select" }, // 956299128
		{ &Z_Construct_UFunction_URadioSelect_SetOptions, "SetOptions" }, // 491985141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioSelect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelect, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3534661630
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass = { "RadioButtonClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelect, RadioButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioButtonClass_MetaData), NewProp_RadioButtonClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent = { "SelectionChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelect, SelectionChangedEvent), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionChangedEvent_MetaData), NewProp_SelectionChangedEvent_MetaData) }; // 99844229
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelect, ButtonContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContainer_MetaData), NewProp_ButtonContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_Inner = { "RadioButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons = { "RadioButtons", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadioSelect, RadioButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioButtons_MetaData), NewProp_RadioButtons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadioSelect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadioSelect_Statics::ClassParams = {
	&URadioSelect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadioSelect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::Class_MetaDataParams), Z_Construct_UClass_URadioSelect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadioSelect()
{
	if (!Z_Registration_Info_UClass_URadioSelect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadioSelect.OuterSingleton, Z_Construct_UClass_URadioSelect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadioSelect.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<URadioSelect>()
{
	return URadioSelect::StaticClass();
}
URadioSelect::URadioSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadioSelect);
URadioSelect::~URadioSelect() {}
// End Class URadioSelect

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URadioSelect, URadioSelect::StaticClass, TEXT("URadioSelect"), &Z_Registration_Info_UClass_URadioSelect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadioSelect), 4028136313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_1744193863(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
