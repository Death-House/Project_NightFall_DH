// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/Spinner.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinner() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature();
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Delegate FSpinnerSelectionChanged
struct Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventSpinnerSelectionChanged_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventSpinnerSelectionChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "SpinnerSelectionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::_Script_AutoSettings_eventSpinnerSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::_Script_AutoSettings_eventSpinnerSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpinnerSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& SpinnerSelectionChanged, const FString& Value)
{
	struct _Script_AutoSettings_eventSpinnerSelectionChanged_Parms
	{
		FString Value;
	};
	_Script_AutoSettings_eventSpinnerSelectionChanged_Parms Parms;
	Parms.Value=Value;
	SpinnerSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSpinnerSelectionChanged

// Begin Class USpinner Function GetCurrentIndex
struct Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics
{
	struct Spinner_eventGetCurrentIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Return the index of the currently selected option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Return the index of the currently selected option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spinner_eventGetCurrentIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "GetCurrentIndex", nullptr, nullptr, Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Spinner_eventGetCurrentIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Spinner_eventGetCurrentIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_GetCurrentIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execGetCurrentIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentIndex();
	P_NATIVE_END;
}
// End Class USpinner Function GetCurrentIndex

// Begin Class USpinner Function GetCurrentOption
struct Z_Construct_UFunction_USpinner_GetCurrentOption_Statics
{
	struct Spinner_eventGetCurrentOption_Parms
	{
		FSettingOption ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Return the currently selected option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Return the currently selected option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spinner_eventGetCurrentOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "GetCurrentOption", nullptr, nullptr, Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Spinner_eventGetCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Spinner_eventGetCurrentOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_GetCurrentOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execGetCurrentOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSettingOption*)Z_Param__Result=P_THIS->GetCurrentOption();
	P_NATIVE_END;
}
// End Class USpinner Function GetCurrentOption

// Begin Class USpinner Function HasValidNext
struct Z_Construct_UFunction_USpinner_HasValidNext_Statics
{
	struct Spinner_eventHasValidNext_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// True if selected option is not the last, or if wrapping is enabled\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "True if selected option is not the last, or if wrapping is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Spinner_eventHasValidNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spinner_eventHasValidNext_Parms), &Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_HasValidNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "HasValidNext", nullptr, nullptr, Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_HasValidNext_Statics::Spinner_eventHasValidNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_HasValidNext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_HasValidNext_Statics::Spinner_eventHasValidNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_HasValidNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_HasValidNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execHasValidNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidNext();
	P_NATIVE_END;
}
// End Class USpinner Function HasValidNext

// Begin Class USpinner Function HasValidPrevious
struct Z_Construct_UFunction_USpinner_HasValidPrevious_Statics
{
	struct Spinner_eventHasValidPrevious_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// True if selected option is not the first, or if wrapping is enabled\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "True if selected option is not the first, or if wrapping is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Spinner_eventHasValidPrevious_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spinner_eventHasValidPrevious_Parms), &Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "HasValidPrevious", nullptr, nullptr, Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Spinner_eventHasValidPrevious_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Spinner_eventHasValidPrevious_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_HasValidPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execHasValidPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidPrevious();
	P_NATIVE_END;
}
// End Class USpinner Function HasValidPrevious

// Begin Class USpinner Function Next
struct Z_Construct_UFunction_USpinner_Next_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the next option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the next option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "Next", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_Next_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_Next_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinner_Next()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_Next_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Next();
	P_NATIVE_END;
}
// End Class USpinner Function Next

// Begin Class USpinner Function OnSelectionChanged
struct Spinner_eventOnSelectionChanged_Parms
{
	FSettingOption SelectedOption;
};
static FName NAME_USpinner_OnSelectionChanged = FName(TEXT("OnSelectionChanged"));
void USpinner::OnSelectionChanged(FSettingOption SelectedOption)
{
	Spinner_eventOnSelectionChanged_Parms Parms;
	Parms.SelectedOption=SelectedOption;
	ProcessEvent(FindFunctionChecked(NAME_USpinner_OnSelectionChanged),&Parms);
}
struct Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spinner_eventOnSelectionChanged_Parms, SelectedOption), Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::NewProp_SelectedOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "OnSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers), sizeof(Spinner_eventOnSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Spinner_eventOnSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_OnSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execOnSelectionChanged)
{
	P_GET_STRUCT(FSettingOption,Z_Param_SelectedOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectionChanged_Implementation(Z_Param_SelectedOption);
	P_NATIVE_END;
}
// End Class USpinner Function OnSelectionChanged

// Begin Class USpinner Function Previous
struct Z_Construct_UFunction_USpinner_Previous_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the previous option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the previous option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "Previous", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_Previous_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_Previous_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinner_Previous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_Previous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Previous();
	P_NATIVE_END;
}
// End Class USpinner Function Previous

// Begin Class USpinner Function SelectIndex
struct Z_Construct_UFunction_USpinner_SelectIndex_Statics
{
	struct Spinner_eventSelectIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the option with the specified index\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the option with the specified index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinner_SelectIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spinner_eventSelectIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_SelectIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_SelectIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "SelectIndex", nullptr, nullptr, Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_SelectIndex_Statics::Spinner_eventSelectIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_SelectIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_SelectIndex_Statics::Spinner_eventSelectIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_SelectIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_SelectIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execSelectIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USpinner Function SelectIndex

// Begin Class USpinner Function SelectValue
struct Z_Construct_UFunction_USpinner_SelectValue_Statics
{
	struct Spinner_eventSelectValue_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the option with the specified value\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the option with the specified value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpinner_SelectValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spinner_eventSelectValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_SelectValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_SelectValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "SelectValue", nullptr, nullptr, Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinner_SelectValue_Statics::Spinner_eventSelectValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinner_SelectValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinner_SelectValue_Statics::Spinner_eventSelectValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinner_SelectValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinner_SelectValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinner::execSelectValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectValue(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpinner Function SelectValue

// Begin Class USpinner
void USpinner::StaticRegisterNativesUSpinner()
{
	UClass* Class = USpinner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentIndex", &USpinner::execGetCurrentIndex },
		{ "GetCurrentOption", &USpinner::execGetCurrentOption },
		{ "HasValidNext", &USpinner::execHasValidNext },
		{ "HasValidPrevious", &USpinner::execHasValidPrevious },
		{ "Next", &USpinner::execNext },
		{ "OnSelectionChanged", &USpinner::execOnSelectionChanged },
		{ "Previous", &USpinner::execPrevious },
		{ "SelectIndex", &USpinner::execSelectIndex },
		{ "SelectValue", &USpinner::execSelectValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpinner);
UClass* Z_Construct_UClass_USpinner_NoRegister()
{
	return USpinner::StaticClass();
}
struct Z_Construct_UClass_USpinner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UI element that uses Next and Previous buttons to cycle through options\n */" },
		{ "IncludePath", "UI/GenericControls/Spinner.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "UI element that uses Next and Previous buttons to cycle through options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Option definitions\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Option definitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWrapping_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Should the first and last options wrap around to each other?\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Should the first and last options wrap around to each other?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangedEvent_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Fired when selection changes\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Fired when selection changes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static void NewProp_bAllowWrapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWrapping;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectionChangedEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinner_GetCurrentIndex, "GetCurrentIndex" }, // 2913735738
		{ &Z_Construct_UFunction_USpinner_GetCurrentOption, "GetCurrentOption" }, // 2208307057
		{ &Z_Construct_UFunction_USpinner_HasValidNext, "HasValidNext" }, // 2128770329
		{ &Z_Construct_UFunction_USpinner_HasValidPrevious, "HasValidPrevious" }, // 1728753518
		{ &Z_Construct_UFunction_USpinner_Next, "Next" }, // 3362446245
		{ &Z_Construct_UFunction_USpinner_OnSelectionChanged, "OnSelectionChanged" }, // 1770712287
		{ &Z_Construct_UFunction_USpinner_Previous, "Previous" }, // 2532767916
		{ &Z_Construct_UFunction_USpinner_SelectIndex, "SelectIndex" }, // 1560998497
		{ &Z_Construct_UFunction_USpinner_SelectValue, "SelectValue" }, // 691380223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinner, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3534661630
void Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_SetBit(void* Obj)
{
	((USpinner*)Obj)->bAllowWrapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping = { "bAllowWrapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpinner), &Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowWrapping_MetaData), NewProp_bAllowWrapping_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent = { "SelectionChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinner, SelectionChangedEvent), Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionChangedEvent_MetaData), NewProp_SelectionChangedEvent_MetaData) }; // 862829489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpinner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinner_Statics::ClassParams = {
	&USpinner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpinner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::Class_MetaDataParams), Z_Construct_UClass_USpinner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpinner()
{
	if (!Z_Registration_Info_UClass_USpinner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinner.OuterSingleton, Z_Construct_UClass_USpinner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpinner.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USpinner>()
{
	return USpinner::StaticClass();
}
USpinner::USpinner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpinner);
USpinner::~USpinner() {}
// End Class USpinner

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpinner, USpinner::StaticClass, TEXT("USpinner"), &Z_Registration_Info_UClass_USpinner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinner), 1582855926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_936528968(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
