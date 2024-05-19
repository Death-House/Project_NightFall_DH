// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/ToggleSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleSetting() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UToggleSetting Function ToggleStateUpdated
struct Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics
{
	struct ToggleSetting_eventToggleStateUpdated_Parms
	{
		bool State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toggle Setting" },
		{ "Comment", "// Takes a boolean state and applies the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Takes a boolean state and applies the setting" },
	};
#endif // WITH_METADATA
	static void NewProp_State_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State_SetBit(void* Obj)
{
	((ToggleSetting_eventToggleStateUpdated_Parms*)Obj)->State = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToggleSetting_eventToggleStateUpdated_Parms), &Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToggleSetting, nullptr, "ToggleStateUpdated", nullptr, nullptr, Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::ToggleSetting_eventToggleStateUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::ToggleSetting_eventToggleStateUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToggleSetting::execToggleStateUpdated)
{
	P_GET_UBOOL(Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleStateUpdated(Z_Param_State);
	P_NATIVE_END;
}
// End Class UToggleSetting Function ToggleStateUpdated

// Begin Class UToggleSetting Function UpdateToggleState
struct ToggleSetting_eventUpdateToggleState_Parms
{
	bool State;
};
static FName NAME_UToggleSetting_UpdateToggleState = FName(TEXT("UpdateToggleState"));
void UToggleSetting::UpdateToggleState(bool State)
{
	ToggleSetting_eventUpdateToggleState_Parms Parms;
	Parms.State=State ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UToggleSetting_UpdateToggleState),&Parms);
}
struct Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toggle Setting" },
		{ "Comment", "// Called to update the widget with a new state\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Called to update the widget with a new state" },
	};
#endif // WITH_METADATA
	static void NewProp_State_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State_SetBit(void* Obj)
{
	((ToggleSetting_eventUpdateToggleState_Parms*)Obj)->State = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToggleSetting_eventUpdateToggleState_Parms), &Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToggleSetting, nullptr, "UpdateToggleState", nullptr, nullptr, Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers), sizeof(ToggleSetting_eventUpdateToggleState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToggleSetting_eventUpdateToggleState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToggleSetting_UpdateToggleState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToggleSetting::execUpdateToggleState)
{
	P_GET_UBOOL(Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateToggleState_Implementation(Z_Param_State);
	P_NATIVE_END;
}
// End Class UToggleSetting Function UpdateToggleState

// Begin Class UToggleSetting
void UToggleSetting::StaticRegisterNativesUToggleSetting()
{
	UClass* Class = UToggleSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleStateUpdated", &UToggleSetting::execToggleStateUpdated },
		{ "UpdateToggleState", &UToggleSetting::execUpdateToggleState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToggleSetting);
UClass* Z_Construct_UClass_UToggleSetting_NoRegister()
{
	return UToggleSetting::StaticClass();
}
struct Z_Construct_UClass_UToggleSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AutoSetting with generic toggle functionality (Such as a checkbox or switch)\n */" },
		{ "IncludePath", "UI/SettingControls/ToggleSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Base AutoSetting with generic toggle functionality (Such as a checkbox or switch)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated, "ToggleStateUpdated" }, // 1581599202
		{ &Z_Construct_UFunction_UToggleSetting_UpdateToggleState, "UpdateToggleState" }, // 2683957985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToggleSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToggleSetting_Statics::ClassParams = {
	&UToggleSetting::StaticClass,
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
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UToggleSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToggleSetting()
{
	if (!Z_Registration_Info_UClass_UToggleSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToggleSetting.OuterSingleton, Z_Construct_UClass_UToggleSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToggleSetting.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UToggleSetting>()
{
	return UToggleSetting::StaticClass();
}
UToggleSetting::UToggleSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleSetting);
UToggleSetting::~UToggleSetting() {}
// End Class UToggleSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToggleSetting, UToggleSetting::StaticClass, TEXT("UToggleSetting"), &Z_Registration_Info_UClass_UToggleSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToggleSetting), 3002196420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_1503834440(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
