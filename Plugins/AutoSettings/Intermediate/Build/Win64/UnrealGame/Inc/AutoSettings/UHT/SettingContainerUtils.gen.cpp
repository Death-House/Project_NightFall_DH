// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Utility/SettingContainerUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingContainerUtils() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingContainerUtils();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingContainerUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USettingContainerUtils Function ApplyChildSettings
struct Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics
{
	struct SettingContainerUtils_eventApplyChildSettings_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be applied, otherwise all settings in the User Widget are applied\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Applies all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be applied, otherwise all settings in the User Widget are applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventApplyChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventApplyChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "ApplyChildSettings", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::SettingContainerUtils_eventApplyChildSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::SettingContainerUtils_eventApplyChildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execApplyChildSettings)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingContainerUtils::ApplyChildSettings(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function ApplyChildSettings

// Begin Class USettingContainerUtils Function CancelChildSettings
struct Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics
{
	struct SettingContainerUtils_eventCancelChildSettings_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Cancels all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be cancelled, otherwise all settings in the User Widget are cancelled\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Cancels all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be cancelled, otherwise all settings in the User Widget are cancelled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventCancelChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventCancelChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "CancelChildSettings", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::SettingContainerUtils_eventCancelChildSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::SettingContainerUtils_eventCancelChildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execCancelChildSettings)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingContainerUtils::CancelChildSettings(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function CancelChildSettings

// Begin Class USettingContainerUtils Function DoesAnyChildSettingHaveUnappliedChange
struct Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics
{
	struct SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// True if any descendant Settings of Parent have unapplied changes\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "True if any descendant Settings of Parent have unapplied changes\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
void Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms), &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "DoesAnyChildSettingHaveUnappliedChange", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execDoesAnyChildSettingHaveUnappliedChange)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function DoesAnyChildSettingHaveUnappliedChange

// Begin Class USettingContainerUtils Function DoesAnyChildSettingHaveUnsavedChange
struct Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics
{
	struct SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// True if any descendant Settings of Parent have unsaved changes\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "True if any descendant Settings of Parent have unsaved changes\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
void Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms), &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "DoesAnyChildSettingHaveUnsavedChange", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execDoesAnyChildSettingHaveUnsavedChange)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function DoesAnyChildSettingHaveUnsavedChange

// Begin Class USettingContainerUtils Function GetChildSettings
struct Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics
{
	struct SettingContainerUtils_eventGetChildSettings_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
		TArray<UAutoSettingWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Gets all Settings in a User Widget which are descendant of the given Parent widget\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be returned, otherwise all settings in the User Widget are returned\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Gets all Settings in a User Widget which are descendant of the given Parent widget\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be returned, otherwise all settings in the User Widget are returned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoSettingWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "GetChildSettings", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::SettingContainerUtils_eventGetChildSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::SettingContainerUtils_eventGetChildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_GetChildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execGetChildSettings)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAutoSettingWidget*>*)Z_Param__Result=USettingContainerUtils::GetChildSettings(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function GetChildSettings

// Begin Class USettingContainerUtils Function SaveChildSettings
struct Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics
{
	struct SettingContainerUtils_eventSaveChildSettings_Parms
	{
		UUserWidget* UserWidget;
		UWidget* Parent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Saves all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be saved, otherwise all settings in the User Widget are saved\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Saves all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be saved, otherwise all settings in the User Widget are saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventSaveChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingContainerUtils_eventSaveChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "SaveChildSettings", nullptr, nullptr, Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::SettingContainerUtils_eventSaveChildSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::SettingContainerUtils_eventSaveChildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingContainerUtils::execSaveChildSettings)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_GET_OBJECT(UWidget,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	USettingContainerUtils::SaveChildSettings(Z_Param_UserWidget,Z_Param_Parent);
	P_NATIVE_END;
}
// End Class USettingContainerUtils Function SaveChildSettings

// Begin Class USettingContainerUtils
void USettingContainerUtils::StaticRegisterNativesUSettingContainerUtils()
{
	UClass* Class = USettingContainerUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyChildSettings", &USettingContainerUtils::execApplyChildSettings },
		{ "CancelChildSettings", &USettingContainerUtils::execCancelChildSettings },
		{ "DoesAnyChildSettingHaveUnappliedChange", &USettingContainerUtils::execDoesAnyChildSettingHaveUnappliedChange },
		{ "DoesAnyChildSettingHaveUnsavedChange", &USettingContainerUtils::execDoesAnyChildSettingHaveUnsavedChange },
		{ "GetChildSettings", &USettingContainerUtils::execGetChildSettings },
		{ "SaveChildSettings", &USettingContainerUtils::execSaveChildSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingContainerUtils);
UClass* Z_Construct_UClass_USettingContainerUtils_NoRegister()
{
	return USettingContainerUtils::StaticClass();
}
struct Z_Construct_UClass_USettingContainerUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Static helper functions for operating on multiple settings at the same time\n */" },
		{ "IncludePath", "Utility/SettingContainerUtils.h" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Static helper functions for operating on multiple settings at the same time" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings, "ApplyChildSettings" }, // 1934892896
		{ &Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings, "CancelChildSettings" }, // 1254904623
		{ &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange, "DoesAnyChildSettingHaveUnappliedChange" }, // 3530180942
		{ &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange, "DoesAnyChildSettingHaveUnsavedChange" }, // 461050079
		{ &Z_Construct_UFunction_USettingContainerUtils_GetChildSettings, "GetChildSettings" }, // 828586150
		{ &Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings, "SaveChildSettings" }, // 2689639677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingContainerUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingContainerUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingContainerUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingContainerUtils_Statics::ClassParams = {
	&USettingContainerUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingContainerUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingContainerUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingContainerUtils()
{
	if (!Z_Registration_Info_UClass_USettingContainerUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingContainerUtils.OuterSingleton, Z_Construct_UClass_USettingContainerUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingContainerUtils.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USettingContainerUtils>()
{
	return USettingContainerUtils::StaticClass();
}
USettingContainerUtils::USettingContainerUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingContainerUtils);
USettingContainerUtils::~USettingContainerUtils() {}
// End Class USettingContainerUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingContainerUtils, USettingContainerUtils::StaticClass, TEXT("USettingContainerUtils"), &Z_Registration_Info_UClass_USettingContainerUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingContainerUtils), 3972617986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_3005155654(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
