// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingValueMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingValueMask() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USettingValueMask Function MaskValue
struct SettingValueMask_eventMaskValue_Parms
{
	FString ConsoleValue;
	FString ReturnValue;
};
static FName NAME_USettingValueMask_MaskValue = FName(TEXT("MaskValue"));
FString USettingValueMask::MaskValue(const FString& ConsoleValue) const
{
	SettingValueMask_eventMaskValue_Parms Parms;
	Parms.ConsoleValue=ConsoleValue;
	const_cast<USettingValueMask*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingValueMask_MaskValue),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USettingValueMask_MaskValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting Value Mask" },
		{ "Comment", "// Extract the value that the setting cares about from the full console value\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Extract the value that the setting cares about from the full console value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue = { "ConsoleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingValueMask_eventMaskValue_Parms, ConsoleValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleValue_MetaData), NewProp_ConsoleValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingValueMask_eventMaskValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingValueMask, nullptr, "MaskValue", nullptr, nullptr, Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers), sizeof(SettingValueMask_eventMaskValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(SettingValueMask_eventMaskValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingValueMask_MaskValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingValueMask::execMaskValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->MaskValue_Implementation(Z_Param_ConsoleValue);
	P_NATIVE_END;
}
// End Class USettingValueMask Function MaskValue

// Begin Class USettingValueMask Function RecombineValues
struct SettingValueMask_eventRecombineValues_Parms
{
	FString SettingValue;
	FString ConsoleValue;
	FString ReturnValue;
};
static FName NAME_USettingValueMask_RecombineValues = FName(TEXT("RecombineValues"));
FString USettingValueMask::RecombineValues(const FString& SettingValue, const FString& ConsoleValue) const
{
	SettingValueMask_eventRecombineValues_Parms Parms;
	Parms.SettingValue=SettingValue;
	Parms.ConsoleValue=ConsoleValue;
	const_cast<USettingValueMask*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingValueMask_RecombineValues),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting Value Mask" },
		{ "Comment", "// Transform a setting value back into a new console value, using the current console value for parts we don't care about\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Transform a setting value back into a new console value, using the current console value for parts we don't care about" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SettingValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, SettingValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingValue_MetaData), NewProp_SettingValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue = { "ConsoleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, ConsoleValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleValue_MetaData), NewProp_ConsoleValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingValueMask, nullptr, "RecombineValues", nullptr, nullptr, Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers), sizeof(SettingValueMask_eventRecombineValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(SettingValueMask_eventRecombineValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingValueMask_RecombineValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingValueMask::execRecombineValues)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SettingValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->RecombineValues_Implementation(Z_Param_SettingValue,Z_Param_ConsoleValue);
	P_NATIVE_END;
}
// End Class USettingValueMask Function RecombineValues

// Begin Class USettingValueMask
void USettingValueMask::StaticRegisterNativesUSettingValueMask()
{
	UClass* Class = USettingValueMask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MaskValue", &USettingValueMask::execMaskValue },
		{ "RecombineValues", &USettingValueMask::execRecombineValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingValueMask);
UClass* Z_Construct_UClass_USettingValueMask_NoRegister()
{
	return USettingValueMask::StaticClass();
}
struct Z_Construct_UClass_USettingValueMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents transformations that can be applied to a setting value to add or subtract subsections that the setting doesn't care about\n * e.g. Resolution CVar (r.SetRes) can be in the form of \"1920x1080wf\" - you might want one setting that cares about the pixel dimensions (1920x1080) and another that cares about the window mode (wf)\n */" },
		{ "IncludePath", "Misc/SettingValueMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Represents transformations that can be applied to a setting value to add or subtract subsections that the setting doesn't care about\ne.g. Resolution CVar (r.SetRes) can be in the form of \"1920x1080wf\" - you might want one setting that cares about the pixel dimensions (1920x1080) and another that cares about the window mode (wf)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingValueMask_MaskValue, "MaskValue" }, // 1718519736
		{ &Z_Construct_UFunction_USettingValueMask_RecombineValues, "RecombineValues" }, // 2406398952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingValueMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingValueMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingValueMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingValueMask_Statics::ClassParams = {
	&USettingValueMask::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingValueMask_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingValueMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingValueMask()
{
	if (!Z_Registration_Info_UClass_USettingValueMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingValueMask.OuterSingleton, Z_Construct_UClass_USettingValueMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingValueMask.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USettingValueMask>()
{
	return USettingValueMask::StaticClass();
}
USettingValueMask::USettingValueMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingValueMask);
USettingValueMask::~USettingValueMask() {}
// End Class USettingValueMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingValueMask, USettingValueMask::StaticClass, TEXT("USettingValueMask"), &Z_Registration_Info_UClass_USettingValueMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingValueMask), 209348103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_864739522(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
