// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/ActionMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionMapping() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UActionLabel_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UActionMapping();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UActionMapping_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMapping();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UActionMapping
void UActionMapping::StaticRegisterNativesUActionMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionMapping);
UClass* Z_Construct_UClass_UActionMapping_NoRegister()
{
	return UActionMapping::StaticClass();
}
struct Z_Construct_UClass_UActionMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input action and allows the user to rebind it\n */" },
		{ "IncludePath", "UI/ActionMapping.h" },
		{ "ModuleRelativePath", "Public/UI/ActionMapping.h" },
		{ "ToolTip", "Shows a label for an input action and allows the user to rebind it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Action Mapping" },
		{ "Comment", "// Name of the action mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/UI/ActionMapping.h" },
		{ "ToolTip", "Name of the action mapping to display and rebind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Action Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMapping, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel = { "ActionLabel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMapping, ActionLabel), Z_Construct_UClass_UActionLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionLabel_MetaData), NewProp_ActionLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputMapping,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionMapping_Statics::ClassParams = {
	&UActionMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActionMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionMapping()
{
	if (!Z_Registration_Info_UClass_UActionMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionMapping.OuterSingleton, Z_Construct_UClass_UActionMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionMapping.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UActionMapping>()
{
	return UActionMapping::StaticClass();
}
UActionMapping::UActionMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionMapping);
UActionMapping::~UActionMapping() {}
// End Class UActionMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionMapping, UActionMapping::StaticClass, TEXT("UActionMapping"), &Z_Registration_Info_UClass_UActionMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionMapping), 1528481892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionMapping_h_3695174830(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
