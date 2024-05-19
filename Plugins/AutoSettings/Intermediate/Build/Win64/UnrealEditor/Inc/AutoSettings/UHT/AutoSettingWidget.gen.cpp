// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/AutoSettingWidget.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingWidget() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UAutoSettingWidget Function Apply
struct Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Apply the setting by setting the CVar to the current value\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Apply the setting by setting the CVar to the current value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Apply", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutoSettingWidget_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Apply();
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function Apply

// Begin Class UAutoSettingWidget Function ApplySettingValue
struct Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics
{
	struct AutoSettingWidget_eventApplySettingValue_Parms
	{
		FString Value;
		bool bSaveIfPossible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Update the setting's selected value\n// @param bSaveIfPossible Save the setting if AutoSave is enabled\n" },
		{ "CPP_Default_bSaveIfPossible", "true" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Update the setting's selected value\n@param bSaveIfPossible Save the setting if AutoSave is enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_bSaveIfPossible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveIfPossible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingWidget_eventApplySettingValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible_SetBit(void* Obj)
{
	((AutoSettingWidget_eventApplySettingValue_Parms*)Obj)->bSaveIfPossible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible = { "bSaveIfPossible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoSettingWidget_eventApplySettingValue_Parms), &Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "ApplySettingValue", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::AutoSettingWidget_eventApplySettingValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::AutoSettingWidget_eventApplySettingValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execApplySettingValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bSaveIfPossible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettingValue(Z_Param_Value,Z_Param_bSaveIfPossible);
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function ApplySettingValue

// Begin Class UAutoSettingWidget Function Cancel
struct Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Cancel unsaved changes, reverting to the value saved in config \n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Cancel unsaved changes, reverting to the value saved in config" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutoSettingWidget_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function Cancel

// Begin Class UAutoSettingWidget Function HasUnappliedChange
struct Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics
{
	struct AutoSettingWidget_eventHasUnappliedChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// True if the setting has changed since the last time it was applied\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if the setting has changed since the last time it was applied" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoSettingWidget_eventHasUnappliedChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoSettingWidget_eventHasUnappliedChange_Parms), &Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "HasUnappliedChange", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::AutoSettingWidget_eventHasUnappliedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::AutoSettingWidget_eventHasUnappliedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execHasUnappliedChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasUnappliedChange();
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function HasUnappliedChange

// Begin Class UAutoSettingWidget Function HasUnsavedChange
struct Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics
{
	struct AutoSettingWidget_eventHasUnsavedChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// True if the setting has changed since the last time it was saved\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if the setting has changed since the last time it was saved" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoSettingWidget_eventHasUnsavedChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoSettingWidget_eventHasUnsavedChange_Parms), &Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "HasUnsavedChange", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::AutoSettingWidget_eventHasUnsavedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::AutoSettingWidget_eventHasUnsavedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execHasUnsavedChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasUnsavedChange();
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function HasUnsavedChange

// Begin Class UAutoSettingWidget Function Save
struct Z_Construct_UFunction_UAutoSettingWidget_Save_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Save the current value to config\n// This will also Apply the current value if it hasn't been already\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Save the current value to config\nThis will also Apply the current value if it hasn't been already" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Save", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutoSettingWidget_Save()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Save();
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function Save

// Begin Class UAutoSettingWidget Function UpdateSelection
struct AutoSettingWidget_eventUpdateSelection_Parms
{
	FString Value;
};
static FName NAME_UAutoSettingWidget_UpdateSelection = FName(TEXT("UpdateSelection"));
void UAutoSettingWidget::UpdateSelection(const FString& Value)
{
	AutoSettingWidget_eventUpdateSelection_Parms Parms;
	Parms.Value=Value;
	ProcessEvent(FindFunctionChecked(NAME_UAutoSettingWidget_UpdateSelection),&Parms);
}
struct Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Set value on control widget, used for setting default and current value\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Set value on control widget, used for setting default and current value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingWidget_eventUpdateSelection_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "UpdateSelection", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers), sizeof(AutoSettingWidget_eventUpdateSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoSettingWidget_eventUpdateSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSettingWidget::execUpdateSelection)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSelection_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAutoSettingWidget Function UpdateSelection

// Begin Class UAutoSettingWidget
void UAutoSettingWidget::StaticRegisterNativesUAutoSettingWidget()
{
	UClass* Class = UAutoSettingWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &UAutoSettingWidget::execApply },
		{ "ApplySettingValue", &UAutoSettingWidget::execApplySettingValue },
		{ "Cancel", &UAutoSettingWidget::execCancel },
		{ "HasUnappliedChange", &UAutoSettingWidget::execHasUnappliedChange },
		{ "HasUnsavedChange", &UAutoSettingWidget::execHasUnsavedChange },
		{ "Save", &UAutoSettingWidget::execSave },
		{ "UpdateSelection", &UAutoSettingWidget::execUpdateSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingWidget);
UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister()
{
	return UAutoSettingWidget::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Widget that encapsulates a console variable to represent a setting\n */" },
		{ "IncludePath", "UI/AutoSettingWidget.h" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Widget that encapsulates a console variable to represent a setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CVarName_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Console variable to turn into a setting\n// e.g. \"r.vsync\"\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Console variable to turn into a setting\ne.g. \"r.vsync\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueMask_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Transformations to apply to the value to get the subsection that this setting cares about\n// Leave this blank for no transformation\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Transformations to apply to the value to get the subsection that this setting cares about\nLeave this blank for no transformation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Should this setting automatically save to config when changed?\n// Saving also applies the setting if it hasn't been already\n// If false, \"Save\" function can be called for manual control\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Should this setting automatically save to config when changed?\nSaving also applies the setting if it hasn't been already\nIf false, \"Save\" function can be called for manual control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoApply_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Should this setting automatically apply when changed?\n// Will also apply automatically if AutoSave is true\n// If false, \"Apply\" function can be called for manual control\n" },
		{ "EditCondition", "!bAutoSave" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Should this setting automatically apply when changed?\nWill also apply automatically if AutoSave is true\nIf false, \"Apply\" function can be called for manual control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingTags_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Tags this setting has, for use by your own project\n// e.g. You might want to sync certain input-related settings to a cloud service but ignore scalability-related ones\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Tags this setting has, for use by your own project\ne.g. You might want to sync certain input-related settings to a cloud service but ignore scalability-related ones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUnappliedChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUnsavedChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingSettingSelection_MetaData[] = {
		{ "Comment", "// True if UpdateSelection is being run\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if UpdateSelection is being run" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CVarName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ValueMask;
	static void NewProp_bAutoSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
	static void NewProp_bAutoApply_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentValue;
	static void NewProp_bHasUnappliedChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUnappliedChange;
	static void NewProp_bHasUnsavedChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUnsavedChange;
	static void NewProp_bUpdatingSettingSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingSettingSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingWidget_Apply, "Apply" }, // 4002422879
		{ &Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue, "ApplySettingValue" }, // 2514887023
		{ &Z_Construct_UFunction_UAutoSettingWidget_Cancel, "Cancel" }, // 2309912749
		{ &Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange, "HasUnappliedChange" }, // 839841059
		{ &Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange, "HasUnsavedChange" }, // 2101826464
		{ &Z_Construct_UFunction_UAutoSettingWidget_Save, "Save" }, // 3280419775
		{ &Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection, "UpdateSelection" }, // 1950162571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingWidget, CVarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CVarName_MetaData), NewProp_CVarName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask = { "ValueMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingWidget, ValueMask), Z_Construct_UClass_UClass, Z_Construct_UClass_USettingValueMask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueMask_MetaData), NewProp_ValueMask_MetaData) };
void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_SetBit(void* Obj)
{
	((UAutoSettingWidget*)Obj)->bAutoSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSave_MetaData), NewProp_bAutoSave_MetaData) };
void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_SetBit(void* Obj)
{
	((UAutoSettingWidget*)Obj)->bAutoApply = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply = { "bAutoApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoApply_MetaData), NewProp_bAutoApply_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags = { "SettingTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingWidget, SettingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingTags_MetaData), NewProp_SettingTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingWidget, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_SetBit(void* Obj)
{
	((UAutoSettingWidget*)Obj)->bHasUnappliedChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange = { "bHasUnappliedChange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUnappliedChange_MetaData), NewProp_bHasUnappliedChange_MetaData) };
void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_SetBit(void* Obj)
{
	((UAutoSettingWidget*)Obj)->bHasUnsavedChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange = { "bHasUnsavedChange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUnsavedChange_MetaData), NewProp_bHasUnsavedChange_MetaData) };
void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_SetBit(void* Obj)
{
	((UAutoSettingWidget*)Obj)->bUpdatingSettingSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection = { "bUpdatingSettingSelection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatingSettingSelection_MetaData), NewProp_bUpdatingSettingSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoSettingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingWidget_Statics::ClassParams = {
	&UAutoSettingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingWidget()
{
	if (!Z_Registration_Info_UClass_UAutoSettingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingWidget.OuterSingleton, Z_Construct_UClass_UAutoSettingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingWidget.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingWidget>()
{
	return UAutoSettingWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingWidget);
UAutoSettingWidget::~UAutoSettingWidget() {}
// End Class UAutoSettingWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingWidget, UAutoSettingWidget::StaticClass, TEXT("UAutoSettingWidget"), &Z_Registration_Info_UClass_UAutoSettingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingWidget), 523796481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_2146718848(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
