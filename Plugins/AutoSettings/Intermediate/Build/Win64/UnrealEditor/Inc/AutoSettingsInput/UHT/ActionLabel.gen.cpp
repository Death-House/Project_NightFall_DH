// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/ActionLabel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionLabel() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UActionLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UActionLabel_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UKeyLabel_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UActionLabel
void UActionLabel::StaticRegisterNativesUActionLabel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionLabel);
UClass* Z_Construct_UClass_UActionLabel_NoRegister()
{
	return UActionLabel::StaticClass();
}
struct Z_Construct_UClass_UActionLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Label for an input action\n * Shows the key the action is bound to, and also any modifier keys\n * Keys will use icons if available, or fall back to text label\n */" },
		{ "IncludePath", "UI/ActionLabel.h" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
		{ "ToolTip", "Label for an input action\nShows the key the action is bound to, and also any modifier keys\nKeys will use icons if available, or fall back to text label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Action Label" },
		{ "Comment", "// Name of the action to display\n" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
		{ "ToolTip", "Name of the action to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyLabelWidgetClass_MetaData[] = {
		{ "Category", "Action Label" },
		{ "Comment", "// KeyLabel class to create for each key\n" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
		{ "ToolTip", "KeyLabel class to create for each key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySeparatorWidgetClass_MetaData[] = {
		{ "Category", "Action Label" },
		{ "Comment", "// Separator widget to place in between keys\n" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
		{ "ToolTip", "Separator widget to place in between keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Action Label" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryKeyLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CtrlLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CmdLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftSeparator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CtrlSeparator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltSeparator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CmdSeparator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ActionLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KeyLabelWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KeySeparatorWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryKeyLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CtrlLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CmdLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftSeparator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CtrlSeparator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltSeparator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CmdSeparator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionLabel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_KeyLabelWidgetClass = { "KeyLabelWidgetClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, KeyLabelWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyLabelWidgetClass_MetaData), NewProp_KeyLabelWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_KeySeparatorWidgetClass = { "KeySeparatorWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, KeySeparatorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySeparatorWidgetClass_MetaData), NewProp_KeySeparatorWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_KeyContainer = { "KeyContainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, KeyContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyContainer_MetaData), NewProp_KeyContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_PrimaryKeyLabel = { "PrimaryKeyLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, PrimaryKeyLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryKeyLabel_MetaData), NewProp_PrimaryKeyLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_ShiftLabel = { "ShiftLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, ShiftLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftLabel_MetaData), NewProp_ShiftLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_CtrlLabel = { "CtrlLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, CtrlLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CtrlLabel_MetaData), NewProp_CtrlLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_AltLabel = { "AltLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, AltLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltLabel_MetaData), NewProp_AltLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_CmdLabel = { "CmdLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, CmdLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CmdLabel_MetaData), NewProp_CmdLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_ShiftSeparator = { "ShiftSeparator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, ShiftSeparator), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftSeparator_MetaData), NewProp_ShiftSeparator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_CtrlSeparator = { "CtrlSeparator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, CtrlSeparator), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CtrlSeparator_MetaData), NewProp_CtrlSeparator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_AltSeparator = { "AltSeparator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, AltSeparator), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltSeparator_MetaData), NewProp_AltSeparator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionLabel_Statics::NewProp_CmdSeparator = { "CmdSeparator", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionLabel, CmdSeparator), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CmdSeparator_MetaData), NewProp_CmdSeparator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_KeyLabelWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_KeySeparatorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_KeyContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_PrimaryKeyLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_ShiftLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_CtrlLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_AltLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_CmdLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_ShiftSeparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_CtrlSeparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_AltSeparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionLabel_Statics::NewProp_CmdSeparator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionLabel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionLabel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputLabel,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionLabel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionLabel_Statics::ClassParams = {
	&UActionLabel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActionLabel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionLabel_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionLabel_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionLabel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionLabel()
{
	if (!Z_Registration_Info_UClass_UActionLabel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionLabel.OuterSingleton, Z_Construct_UClass_UActionLabel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionLabel.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UActionLabel>()
{
	return UActionLabel::StaticClass();
}
UActionLabel::UActionLabel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionLabel);
UActionLabel::~UActionLabel() {}
// End Class UActionLabel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionLabel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionLabel, UActionLabel::StaticClass, TEXT("UActionLabel"), &Z_Registration_Info_UClass_UActionLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionLabel), 1570756834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionLabel_h_3183700896(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_ActionLabel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
