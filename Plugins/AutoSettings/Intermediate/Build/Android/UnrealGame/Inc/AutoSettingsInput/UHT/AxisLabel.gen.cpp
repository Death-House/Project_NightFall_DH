// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/AxisLabel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisLabel() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisLabel_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UKeyLabel_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UAxisLabel
void UAxisLabel::StaticRegisterNativesUAxisLabel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisLabel);
UClass* Z_Construct_UClass_UAxisLabel_NoRegister()
{
	return UAxisLabel::StaticClass();
}
struct Z_Construct_UClass_UAxisLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Label for an input axis on a particular scale\n * Shows the icon for the key it is bound to if available, or falls back to text label\n */" },
		{ "IncludePath", "UI/AxisLabel.h" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Label for an input axis on a particular scale\nShows the icon for the key it is bound to if available, or falls back to text label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
		{ "Category", "Axis Label" },
		{ "Comment", "// Name of the axis to display\n" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Name of the axis to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Axis Label" },
		{ "Comment", "// Scale of the key to display\n" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Scale of the key to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Axis Label" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisLabel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisLabel, AxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisName_MetaData), NewProp_AxisName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisLabel, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel = { "KeyLabel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisLabel, KeyLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyLabel_MetaData), NewProp_KeyLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAxisLabel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputLabel,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisLabel_Statics::ClassParams = {
	&UAxisLabel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAxisLabel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisLabel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisLabel()
{
	if (!Z_Registration_Info_UClass_UAxisLabel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisLabel.OuterSingleton, Z_Construct_UClass_UAxisLabel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisLabel.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAxisLabel>()
{
	return UAxisLabel::StaticClass();
}
UAxisLabel::UAxisLabel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisLabel);
UAxisLabel::~UAxisLabel() {}
// End Class UAxisLabel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisLabel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAxisLabel, UAxisLabel::StaticClass, TEXT("UAxisLabel"), &Z_Registration_Info_UClass_UAxisLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisLabel), 2624465268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisLabel_h_2576837745(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_AxisLabel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
