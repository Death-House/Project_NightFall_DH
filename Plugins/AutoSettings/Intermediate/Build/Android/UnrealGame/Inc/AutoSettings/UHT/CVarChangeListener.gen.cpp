// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Console/CVarChangeListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCVarChangeListener() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCVarChangeListener();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UCVarChangeListener_NoRegister();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature();
AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Delegate FIntCVarChangedEvent
struct Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventIntCVarChangedEvent_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventIntCVarChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "IntCVarChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventIntCVarChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventIntCVarChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIntCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& IntCVarChangedEvent, int32 NewValue)
{
	struct _Script_AutoSettings_eventIntCVarChangedEvent_Parms
	{
		int32 NewValue;
	};
	_Script_AutoSettings_eventIntCVarChangedEvent_Parms Parms;
	Parms.NewValue=NewValue;
	IntCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FIntCVarChangedEvent

// Begin Delegate FBoolCVarChangedEvent
struct Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventBoolCVarChangedEvent_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListener.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((_Script_AutoSettings_eventBoolCVarChangedEvent_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AutoSettings_eventBoolCVarChangedEvent_Parms), &Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "BoolCVarChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventBoolCVarChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventBoolCVarChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBoolCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& BoolCVarChangedEvent, bool NewValue)
{
	struct _Script_AutoSettings_eventBoolCVarChangedEvent_Parms
	{
		bool NewValue;
	};
	_Script_AutoSettings_eventBoolCVarChangedEvent_Parms Parms;
	Parms.NewValue=NewValue ? true : false;
	BoolCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBoolCVarChangedEvent

// Begin Delegate FFloatCVarChangedEvent
struct Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventFloatCVarChangedEvent_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventFloatCVarChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "FloatCVarChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventFloatCVarChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventFloatCVarChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFloatCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& FloatCVarChangedEvent, float NewValue)
{
	struct _Script_AutoSettings_eventFloatCVarChangedEvent_Parms
	{
		float NewValue;
	};
	_Script_AutoSettings_eventFloatCVarChangedEvent_Parms Parms;
	Parms.NewValue=NewValue;
	FloatCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFloatCVarChangedEvent

// Begin Delegate FStringCVarChangedEvent
struct Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettings_eventStringCVarChangedEvent_Parms
	{
		FString NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Console/CVarChangeListener.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettings_eventStringCVarChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "StringCVarChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventStringCVarChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::_Script_AutoSettings_eventStringCVarChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStringCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& StringCVarChangedEvent, const FString& NewValue)
{
	struct _Script_AutoSettings_eventStringCVarChangedEvent_Parms
	{
		FString NewValue;
	};
	_Script_AutoSettings_eventStringCVarChangedEvent_Parms Parms;
	Parms.NewValue=NewValue;
	StringCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FStringCVarChangedEvent

// Begin Class UCVarChangeListener
void UCVarChangeListener::StaticRegisterNativesUCVarChangeListener()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCVarChangeListener);
UClass* Z_Construct_UClass_UCVarChangeListener_NoRegister()
{
	return UCVarChangeListener::StaticClass();
}
struct Z_Construct_UClass_UCVarChangeListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Observes a console variable and fires events when it changes\n */" },
		{ "IncludePath", "Console/CVarChangeListener.h" },
		{ "ModuleRelativePath", "Public/Console/CVarChangeListener.h" },
		{ "ToolTip", "Observes a console variable and fires events when it changes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCVarChangeListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCVarChangeListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCVarChangeListener_Statics::ClassParams = {
	&UCVarChangeListener::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCVarChangeListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UCVarChangeListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCVarChangeListener()
{
	if (!Z_Registration_Info_UClass_UCVarChangeListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCVarChangeListener.OuterSingleton, Z_Construct_UClass_UCVarChangeListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCVarChangeListener.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UCVarChangeListener>()
{
	return UCVarChangeListener::StaticClass();
}
UCVarChangeListener::UCVarChangeListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCVarChangeListener);
UCVarChangeListener::~UCVarChangeListener() {}
// End Class UCVarChangeListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCVarChangeListener, UCVarChangeListener::StaticClass, TEXT("UCVarChangeListener"), &Z_Registration_Info_UClass_UCVarChangeListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCVarChangeListener), 2086008366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_1901556816(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
