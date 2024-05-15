// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Console/CVarChangeListenerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCVarChangeListenerManager() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCVarChangeListener_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCVarChangeListenerManager();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCVarChangeListenerManager_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Delegate FIntCVarChangedSignature
struct Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventIntCVarChangedSignature_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventIntCVarChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "IntCVarChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventIntCVarChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventIntCVarChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIntCVarChangedSignature_DelegateWrapper(const FScriptDelegate& IntCVarChangedSignature, int32 NewValue)
{
	struct _Script_AutoSettings_eventIntCVarChangedSignature_Parms
	{
		int32 NewValue;
	};
	_Script_AutoSettings_eventIntCVarChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	IntCVarChangedSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FIntCVarChangedSignature

// Begin Delegate FBoolCVarChangedSignature
struct Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventBoolCVarChangedSignature_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((_Script_AutoSettings_eventBoolCVarChangedSignature_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AutoSettings_eventBoolCVarChangedSignature_Parms), &Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "BoolCVarChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventBoolCVarChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventBoolCVarChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBoolCVarChangedSignature_DelegateWrapper(const FScriptDelegate& BoolCVarChangedSignature, bool NewValue)
{
	struct _Script_AutoSettings_eventBoolCVarChangedSignature_Parms
	{
		bool NewValue;
	};
	_Script_AutoSettings_eventBoolCVarChangedSignature_Parms Parms;
	Parms.NewValue=NewValue ? true : false;
	BoolCVarChangedSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBoolCVarChangedSignature

// Begin Delegate FFloatCVarChangedSignature
struct Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventFloatCVarChangedSignature_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventFloatCVarChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "FloatCVarChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventFloatCVarChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventFloatCVarChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFloatCVarChangedSignature_DelegateWrapper(const FScriptDelegate& FloatCVarChangedSignature, float NewValue)
{
	struct _Script_AutoSettings_eventFloatCVarChangedSignature_Parms
	{
		float NewValue;
	};
	_Script_AutoSettings_eventFloatCVarChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	FloatCVarChangedSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FFloatCVarChangedSignature

// Begin Delegate FStringCVarChangedSignature
struct Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventStringCVarChangedSignature_Parms
	{
		FString NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventStringCVarChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "StringCVarChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventStringCVarChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::_Script_AutoSettings_eventStringCVarChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStringCVarChangedSignature_DelegateWrapper(const FScriptDelegate& StringCVarChangedSignature, const FString& NewValue)
{
	struct _Script_AutoSettings_eventStringCVarChangedSignature_Parms
	{
		FString NewValue;
	};
	_Script_AutoSettings_eventStringCVarChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	StringCVarChangedSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FStringCVarChangedSignature

// Begin Class UCVarChangeListenerManager Function AddBoolCVarCallbackStatic
struct Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics
{
	struct CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms
	{
		FName Name;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Adds a callback function for an bool CVar, static version\n// @param CallbackImmediately If true, will immediately fire the callback with current value\n" },
		{ "DisplayName", "Add Bool CVar Callback" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
		{ "ToolTip", "Adds a callback function for an bool CVar, static version\n@param CallbackImmediately If true, will immediately fire the callback with current value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 270560947
void Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms), &Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCVarChangeListenerManager, nullptr, "AddBoolCVarCallbackStatic", nullptr, nullptr, Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddBoolCVarCallbackStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCVarChangeListenerManager::execAddBoolCVarCallbackStatic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCVarChangeListenerManager::AddBoolCVarCallbackStatic(Z_Param_Name,FBoolCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class UCVarChangeListenerManager Function AddBoolCVarCallbackStatic

// Begin Class UCVarChangeListenerManager Function AddFloatCVarCallbackStatic
struct Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics
{
	struct CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms
	{
		FName Name;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Adds a callback function for an float CVar, static version\n// @param CallbackImmediately If true, will immediately fire the callback with current value\n" },
		{ "DisplayName", "Add Float CVar Callback" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
		{ "ToolTip", "Adds a callback function for an float CVar, static version\n@param CallbackImmediately If true, will immediately fire the callback with current value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 197227618
void Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms), &Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCVarChangeListenerManager, nullptr, "AddFloatCVarCallbackStatic", nullptr, nullptr, Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddFloatCVarCallbackStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCVarChangeListenerManager::execAddFloatCVarCallbackStatic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCVarChangeListenerManager::AddFloatCVarCallbackStatic(Z_Param_Name,FFloatCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class UCVarChangeListenerManager Function AddFloatCVarCallbackStatic

// Begin Class UCVarChangeListenerManager Function AddIntCVarCallbackStatic
struct Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics
{
	struct CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms
	{
		FName Name;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Adds a callback function for an integer CVar, static version\n// @param CallbackImmediately If true, will immediately fire the callback with current value\n" },
		{ "DisplayName", "Add Int CVar Callback" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
		{ "ToolTip", "Adds a callback function for an integer CVar, static version\n@param CallbackImmediately If true, will immediately fire the callback with current value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3098657466
void Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms), &Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCVarChangeListenerManager, nullptr, "AddIntCVarCallbackStatic", nullptr, nullptr, Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddIntCVarCallbackStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCVarChangeListenerManager::execAddIntCVarCallbackStatic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCVarChangeListenerManager::AddIntCVarCallbackStatic(Z_Param_Name,FIntCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class UCVarChangeListenerManager Function AddIntCVarCallbackStatic

// Begin Class UCVarChangeListenerManager Function AddStringCVarCallbackStatic
struct Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics
{
	struct CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms
	{
		FName Name;
		FScriptDelegate ChangedCallback;
		bool CallbackImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Adds a callback function for an string CVar, static version\n// @param CallbackImmediately If true, will immediately fire the callback with current value\n" },
		{ "DisplayName", "Add String CVar Callback" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
		{ "ToolTip", "Adds a callback function for an string CVar, static version\n@param CallbackImmediately If true, will immediately fire the callback with current value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
	static void NewProp_CallbackImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 915331633
void Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
{
	((CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms*)Obj)->CallbackImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms), &Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_ChangedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::NewProp_CallbackImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCVarChangeListenerManager, nullptr, "AddStringCVarCallbackStatic", nullptr, nullptr, Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::CVarChangeListenerManager_eventAddStringCVarCallbackStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCVarChangeListenerManager::execAddStringCVarCallbackStatic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
	P_GET_UBOOL(Z_Param_CallbackImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCVarChangeListenerManager::AddStringCVarCallbackStatic(Z_Param_Name,FStringCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
	P_NATIVE_END;
}
// End Class UCVarChangeListenerManager Function AddStringCVarCallbackStatic

// Begin Class UCVarChangeListenerManager
void UCVarChangeListenerManager::StaticRegisterNativesUCVarChangeListenerManager()
{
	UClass* Class = UCVarChangeListenerManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBoolCVarCallbackStatic", &UCVarChangeListenerManager::execAddBoolCVarCallbackStatic },
		{ "AddFloatCVarCallbackStatic", &UCVarChangeListenerManager::execAddFloatCVarCallbackStatic },
		{ "AddIntCVarCallbackStatic", &UCVarChangeListenerManager::execAddIntCVarCallbackStatic },
		{ "AddStringCVarCallbackStatic", &UCVarChangeListenerManager::execAddStringCVarCallbackStatic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCVarChangeListenerManager);
UClass* Z_Construct_UClass_UCVarChangeListenerManager_NoRegister()
{
	return UCVarChangeListenerManager::StaticClass();
}
struct Z_Construct_UClass_UCVarChangeListenerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages console variable change listeners\n * Enables event-based listening for console variable changes in Blueprint\n * Avoids creating duplicate listeners for the same CVar\n */" },
		{ "IncludePath", "Console/CVarChangeListenerManager.h" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
		{ "ToolTip", "Manages console variable change listeners\nEnables event-based listening for console variable changes in Blueprint\nAvoids creating duplicate listeners for the same CVar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListenerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Listeners_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Listeners_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Listeners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCVarChangeListenerManager_AddBoolCVarCallbackStatic, "AddBoolCVarCallbackStatic" }, // 3138900096
		{ &Z_Construct_UFunction_UCVarChangeListenerManager_AddFloatCVarCallbackStatic, "AddFloatCVarCallbackStatic" }, // 2557327147
		{ &Z_Construct_UFunction_UCVarChangeListenerManager_AddIntCVarCallbackStatic, "AddIntCVarCallbackStatic" }, // 236067448
		{ &Z_Construct_UFunction_UCVarChangeListenerManager_AddStringCVarCallbackStatic, "AddStringCVarCallbackStatic" }, // 2172651732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCVarChangeListenerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners_ValueProp = { "Listeners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCVarChangeListener_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners_Key_KeyProp = { "Listeners_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCVarChangeListenerManager, Listeners), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listeners_MetaData), NewProp_Listeners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCVarChangeListenerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCVarChangeListenerManager_Statics::NewProp_Listeners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListenerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCVarChangeListenerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListenerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCVarChangeListenerManager_Statics::ClassParams = {
	&UCVarChangeListenerManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCVarChangeListenerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListenerManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListenerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCVarChangeListenerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCVarChangeListenerManager()
{
	if (!Z_Registration_Info_UClass_UCVarChangeListenerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCVarChangeListenerManager.OuterSingleton, Z_Construct_UClass_UCVarChangeListenerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCVarChangeListenerManager.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UCVarChangeListenerManager>()
{
	return UCVarChangeListenerManager::StaticClass();
}
UCVarChangeListenerManager::UCVarChangeListenerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCVarChangeListenerManager);
UCVarChangeListenerManager::~UCVarChangeListenerManager() {}
// End Class UCVarChangeListenerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCVarChangeListenerManager, UCVarChangeListenerManager::StaticClass, TEXT("UCVarChangeListenerManager"), &Z_Registration_Info_UClass_UCVarChangeListenerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCVarChangeListenerManager), 1393634977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_1473293637(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
