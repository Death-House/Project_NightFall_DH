// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/GlobalKeyIconTagManager.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalKeyIconTagManager() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UGlobalKeyIconTagManager();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UGlobalKeyIconTagManager_NoRegister();
AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Delegate FGlobalKeyIconTagsModifiedEvent
struct Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "GlobalKeyIconTagsModifiedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGlobalKeyIconTagsModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& GlobalKeyIconTagsModifiedEvent)
{
	GlobalKeyIconTagsModifiedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FGlobalKeyIconTagsModifiedEvent

// Begin Class UGlobalKeyIconTagManager Function GetIconForKey
struct Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics
{
	struct GlobalKeyIconTagManager_eventGetIconForKey_Parms
	{
		FKey InKey;
		FGameplayTagContainer IconTags;
		float AxisScale;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Icons" },
		{ "Comment", "// Get icon for key including global icon tags\n" },
		{ "CPP_Default_AxisScale", "0.000000" },
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Get icon for key including global icon tags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, AxisScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_IconTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_AxisScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalKeyIconTagManager, nullptr, "GetIconForKey", nullptr, nullptr, Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::GlobalKeyIconTagManager_eventGetIconForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::GlobalKeyIconTagManager_eventGetIconForKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGlobalKeyIconTagManager::execGetIconForKey)
{
	P_GET_STRUCT(FKey,Z_Param_InKey);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_IconTags);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=UGlobalKeyIconTagManager::GetIconForKey(Z_Param_InKey,Z_Param_IconTags,Z_Param_AxisScale);
	P_NATIVE_END;
}
// End Class UGlobalKeyIconTagManager Function GetIconForKey

// Begin Class UGlobalKeyIconTagManager Function SetGlobalKeyIconTags
struct Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics
{
	struct GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms
	{
		FGameplayTagContainer InGlobalIconTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Icons" },
		{ "Comment", "// Set global key icon tags to determine which icon set is chosen for key icons\n" },
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Set global key icon tags to determine which icon set is chosen for key icons" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGlobalIconTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::NewProp_InGlobalIconTags = { "InGlobalIconTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms, InGlobalIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::NewProp_InGlobalIconTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalKeyIconTagManager, nullptr, "SetGlobalKeyIconTags", nullptr, nullptr, Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGlobalKeyIconTagManager::execSetGlobalKeyIconTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_InGlobalIconTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGlobalKeyIconTagManager::SetGlobalKeyIconTags(Z_Param_InGlobalIconTags);
	P_NATIVE_END;
}
// End Class UGlobalKeyIconTagManager Function SetGlobalKeyIconTags

// Begin Class UGlobalKeyIconTagManager
void UGlobalKeyIconTagManager::StaticRegisterNativesUGlobalKeyIconTagManager()
{
	UClass* Class = UGlobalKeyIconTagManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIconForKey", &UGlobalKeyIconTagManager::execGetIconForKey },
		{ "SetGlobalKeyIconTags", &UGlobalKeyIconTagManager::execSetGlobalKeyIconTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalKeyIconTagManager);
UClass* Z_Construct_UClass_UGlobalKeyIconTagManager_NoRegister()
{
	return UGlobalKeyIconTagManager::StaticClass();
}
struct Z_Construct_UClass_UGlobalKeyIconTagManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles global key icon tags\n * Useful for platform-specific gamepad button icons where you might want to globally use one set or another\n */" },
		{ "IncludePath", "GlobalKeyIconTagManager.h" },
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Handles global key icon tags\nUseful for platform-specific gamepad button icons where you might want to globally use one set or another" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalKeyIconTagsModified_MetaData[] = {
		{ "Comment", "// Fired when the GlobalKeyIconTags are modified\n" },
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Fired when the GlobalKeyIconTags are modified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalKeyIconTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalKeyIconTagManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalKeyIconTagsModified;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalKeyIconTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey, "GetIconForKey" }, // 2532780339
		{ &Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags, "SetGlobalKeyIconTags" }, // 2659869214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalKeyIconTagManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified = { "OnGlobalKeyIconTagsModified", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGlobalKeyIconTagManager, OnGlobalKeyIconTagsModified), Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalKeyIconTagsModified_MetaData), NewProp_OnGlobalKeyIconTagsModified_MetaData) }; // 2789597844
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags = { "GlobalKeyIconTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGlobalKeyIconTagManager, GlobalKeyIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalKeyIconTags_MetaData), NewProp_GlobalKeyIconTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::ClassParams = {
	&UGlobalKeyIconTagManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGlobalKeyIconTagManager()
{
	if (!Z_Registration_Info_UClass_UGlobalKeyIconTagManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalKeyIconTagManager.OuterSingleton, Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGlobalKeyIconTagManager.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UGlobalKeyIconTagManager>()
{
	return UGlobalKeyIconTagManager::StaticClass();
}
UGlobalKeyIconTagManager::UGlobalKeyIconTagManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalKeyIconTagManager);
UGlobalKeyIconTagManager::~UGlobalKeyIconTagManager() {}
// End Class UGlobalKeyIconTagManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalKeyIconTagManager, UGlobalKeyIconTagManager::StaticClass, TEXT("UGlobalKeyIconTagManager"), &Z_Registration_Info_UClass_UGlobalKeyIconTagManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalKeyIconTagManager), 1048171858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_1568524463(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_GlobalKeyIconTagManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
