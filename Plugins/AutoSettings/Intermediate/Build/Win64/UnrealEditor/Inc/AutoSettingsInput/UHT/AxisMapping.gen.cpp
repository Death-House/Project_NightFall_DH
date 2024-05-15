// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/AxisMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisMapping() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisLabel_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisMapping();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisMapping_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMapping();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UAxisMapping
void UAxisMapping::StaticRegisterNativesUAxisMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisMapping);
UClass* Z_Construct_UClass_UAxisMapping_NoRegister()
{
	return UAxisMapping::StaticClass();
}
struct Z_Construct_UClass_UAxisMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input axis on a particular scale and allows the user to rebind it\n */" },
		{ "IncludePath", "UI/AxisMapping.h" },
		{ "ModuleRelativePath", "Public/UI/AxisMapping.h" },
		{ "ToolTip", "Shows a label for an input axis on a particular scale and allows the user to rebind it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
		{ "Category", "Axis Mapping" },
		{ "Comment", "// Name of the axis mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/UI/AxisMapping.h" },
		{ "ToolTip", "Name of the axis mapping to display and rebind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Axis Mapping" },
		{ "Comment", "// Scale of the axis mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/UI/AxisMapping.h" },
		{ "ToolTip", "Scale of the axis mapping to display and rebind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Axis Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AxisMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisMapping, AxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisName_MetaData), NewProp_AxisName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisMapping, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel = { "AxisLabel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisMapping, AxisLabel), Z_Construct_UClass_UAxisLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisLabel_MetaData), NewProp_AxisLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAxisMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputMapping,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisMapping_Statics::ClassParams = {
	&UAxisMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAxisMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisMapping()
{
	if (!Z_Registration_Info_UClass_UAxisMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisMapping.OuterSingleton, Z_Construct_UClass_UAxisMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisMapping.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAxisMapping>()
{
	return UAxisMapping::StaticClass();
}
UAxisMapping::UAxisMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisMapping);
UAxisMapping::~UAxisMapping() {}
// End Class UAxisMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAxisMapping, UAxisMapping::StaticClass, TEXT("UAxisMapping"), &Z_Registration_Info_UClass_UAxisMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisMapping), 2357258758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisMapping_h_4010200234(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
