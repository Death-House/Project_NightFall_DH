// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingOptionFactory.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingOptionFactory() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister();
AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class USettingOptionFactory Function ConstructOptions
struct SettingOptionFactory_eventConstructOptions_Parms
{
	TArray<FSettingOption> ReturnValue;
};
static FName NAME_USettingOptionFactory_ConstructOptions = FName(TEXT("ConstructOptions"));
TArray<FSettingOption> USettingOptionFactory::ConstructOptions() const
{
	SettingOptionFactory_eventConstructOptions_Parms Parms;
	const_cast<USettingOptionFactory*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingOptionFactory_ConstructOptions),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Setting Option Factory" },
		{ "Comment", "// Override to construct options dynamically\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOptionFactory.h" },
		{ "ToolTip", "Override to construct options dynamically" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingOptionFactory_eventConstructOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3534661630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingOptionFactory, nullptr, "ConstructOptions", nullptr, nullptr, Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers), sizeof(SettingOptionFactory_eventConstructOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(SettingOptionFactory_eventConstructOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingOptionFactory_ConstructOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingOptionFactory::execConstructOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSettingOption>*)Z_Param__Result=P_THIS->ConstructOptions_Implementation();
	P_NATIVE_END;
}
// End Class USettingOptionFactory Function ConstructOptions

// Begin Class USettingOptionFactory
void USettingOptionFactory::StaticRegisterNativesUSettingOptionFactory()
{
	UClass* Class = USettingOptionFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructOptions", &USettingOptionFactory::execConstructOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingOptionFactory);
UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister()
{
	return USettingOptionFactory::StaticClass();
}
struct Z_Construct_UClass_USettingOptionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base factory class for constructing a set of options for a setting\n */" },
		{ "IncludePath", "Misc/SettingOptionFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingOptionFactory.h" },
		{ "ToolTip", "Base factory class for constructing a set of options for a setting" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingOptionFactory_ConstructOptions, "ConstructOptions" }, // 2264941233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingOptionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingOptionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingOptionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingOptionFactory_Statics::ClassParams = {
	&USettingOptionFactory::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingOptionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingOptionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingOptionFactory()
{
	if (!Z_Registration_Info_UClass_USettingOptionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingOptionFactory.OuterSingleton, Z_Construct_UClass_USettingOptionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingOptionFactory.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<USettingOptionFactory>()
{
	return USettingOptionFactory::StaticClass();
}
USettingOptionFactory::USettingOptionFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingOptionFactory);
USettingOptionFactory::~USettingOptionFactory() {}
// End Class USettingOptionFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingOptionFactory, USettingOptionFactory::StaticClass, TEXT("USettingOptionFactory"), &Z_Registration_Info_UClass_USettingOptionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingOptionFactory), 1313175813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_357432544(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
