// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/InputMapping.h"
#include "AutoSettingsInput/Public/UI/BindCapturePrompt.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMapping() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMapping();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMapping_NoRegister();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UInputMapping Function BindChord
struct Z_Construct_UFunction_UInputMapping_BindChord_Statics
{
	struct InputMapping_eventBindChord_Parms
	{
		FCapturedInput CapturedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Manually update bindings with a captured chord\n" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ToolTip", "Manually update bindings with a captured chord" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMapping_BindChord_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMapping_eventBindChord_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(0, nullptr) }; // 4292826954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMapping_BindChord_Statics::NewProp_CapturedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_BindChord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "BindChord", nullptr, nullptr, Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMapping_BindChord_Statics::InputMapping_eventBindChord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_BindChord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMapping_BindChord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMapping_BindChord_Statics::InputMapping_eventBindChord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMapping_BindChord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMapping_BindChord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMapping::execBindChord)
{
	P_GET_STRUCT(FCapturedInput,Z_Param_CapturedInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindChord(Z_Param_CapturedInput);
	P_NATIVE_END;
}
// End Class UInputMapping Function BindChord

// Begin Class UInputMapping Function ChordCaptured
struct Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics
{
	struct InputMapping_eventChordCaptured_Parms
	{
		FCapturedInput CapturedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMapping_eventChordCaptured_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(0, nullptr) }; // 4292826954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::NewProp_CapturedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "ChordCaptured", nullptr, nullptr, Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::InputMapping_eventChordCaptured_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::InputMapping_eventChordCaptured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMapping_ChordCaptured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMapping::execChordCaptured)
{
	P_GET_STRUCT(FCapturedInput,Z_Param_CapturedInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChordCaptured(Z_Param_CapturedInput);
	P_NATIVE_END;
}
// End Class UInputMapping Function ChordCaptured

// Begin Class UInputMapping Function UpdateLabel
static FName NAME_UInputMapping_UpdateLabel = FName(TEXT("UpdateLabel"));
void UInputMapping::UpdateLabel()
{
	ProcessEvent(FindFunctionChecked(NAME_UInputMapping_UpdateLabel),NULL);
}
struct Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "UpdateLabel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputMapping_UpdateLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMapping::execUpdateLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLabel_Implementation();
	P_NATIVE_END;
}
// End Class UInputMapping Function UpdateLabel

// Begin Class UInputMapping Function UpdateMapping
static FName NAME_UInputMapping_UpdateMapping = FName(TEXT("UpdateMapping"));
void UInputMapping::UpdateMapping()
{
	ProcessEvent(FindFunctionChecked(NAME_UInputMapping_UpdateMapping),NULL);
}
struct Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Force the mapping to refresh\n" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ToolTip", "Force the mapping to refresh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "UpdateMapping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputMapping_UpdateMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMapping::execUpdateMapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMapping_Implementation();
	P_NATIVE_END;
}
// End Class UInputMapping Function UpdateMapping

// Begin Class UInputMapping
void UInputMapping::StaticRegisterNativesUInputMapping()
{
	UClass* Class = UInputMapping::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindChord", &UInputMapping::execBindChord },
		{ "ChordCaptured", &UInputMapping::execChordCaptured },
		{ "UpdateLabel", &UInputMapping::execUpdateLabel },
		{ "UpdateMapping", &UInputMapping::execUpdateMapping },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputMapping);
UClass* Z_Construct_UClass_UInputMapping_NoRegister()
{
	return UInputMapping::StaticClass();
}
struct Z_Construct_UClass_UInputMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input and allows the user to rebind it\n */" },
		{ "IncludePath", "UI/InputMapping.h" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Shows a label for an input and allows the user to rebind it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroup_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Mapping group index - if an input has multiple mappings, this will determine which one to use\n// A value of -1 will use the first mapping group available\n" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ToolTip", "Mapping group index - if an input has multiple mappings, this will determine which one to use\nA value of -1 will use the first mapping group available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTags_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Tags to determine which key icon should be used\n// Key icons and tags can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindCaptureButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InputMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BindCaptureButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputMapping_BindChord, "BindChord" }, // 3704822755
		{ &Z_Construct_UFunction_UInputMapping_ChordCaptured, "ChordCaptured" }, // 3316851112
		{ &Z_Construct_UFunction_UInputMapping_UpdateLabel, "UpdateLabel" }, // 284255053
		{ &Z_Construct_UFunction_UInputMapping_UpdateMapping, "UpdateMapping" }, // 2489516891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMapping, MappingGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroup_MetaData), NewProp_MappingGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMapping, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroup_MetaData), NewProp_KeyGroup_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMapping, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTags_MetaData), NewProp_IconTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton = { "BindCaptureButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMapping, BindCaptureButton), Z_Construct_UClass_UBindCaptureButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindCaptureButton_MetaData), NewProp_BindCaptureButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputMapping_Statics::ClassParams = {
	&UInputMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputMapping()
{
	if (!Z_Registration_Info_UClass_UInputMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputMapping.OuterSingleton, Z_Construct_UClass_UInputMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputMapping.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UInputMapping>()
{
	return UInputMapping::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMapping);
UInputMapping::~UInputMapping() {}
// End Class UInputMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputMapping, UInputMapping::StaticClass, TEXT("UInputMapping"), &Z_Registration_Info_UClass_UInputMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputMapping), 1063351019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputMapping_h_3212735847(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
