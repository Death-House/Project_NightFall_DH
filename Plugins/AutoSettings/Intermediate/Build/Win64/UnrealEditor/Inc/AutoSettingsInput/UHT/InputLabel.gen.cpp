// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/InputLabel.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputLabel() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputLabel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UInputLabel Function MappingsChanged
struct Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics
{
	struct InputLabel_eventMappingsChanged_Parms
	{
		APlayerController* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputLabel_eventMappingsChanged_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputLabel, nullptr, "MappingsChanged", nullptr, nullptr, Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::InputLabel_eventMappingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::InputLabel_eventMappingsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputLabel_MappingsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputLabel::execMappingsChanged)
{
	P_GET_OBJECT(APlayerController,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MappingsChanged(Z_Param_Player);
	P_NATIVE_END;
}
// End Class UInputLabel Function MappingsChanged

// Begin Class UInputLabel Function UpdateLabel
static FName NAME_UInputLabel_UpdateLabel = FName(TEXT("UpdateLabel"));
void UInputLabel::UpdateLabel()
{
	ProcessEvent(FindFunctionChecked(NAME_UInputLabel_UpdateLabel),NULL);
}
struct Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Label" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputLabel, nullptr, "UpdateLabel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputLabel_UpdateLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputLabel::execUpdateLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLabel_Implementation();
	P_NATIVE_END;
}
// End Class UInputLabel Function UpdateLabel

// Begin Class UInputLabel
void UInputLabel::StaticRegisterNativesUInputLabel()
{
	UClass* Class = UInputLabel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MappingsChanged", &UInputLabel::execMappingsChanged },
		{ "UpdateLabel", &UInputLabel::execUpdateLabel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputLabel);
UClass* Z_Construct_UClass_UInputLabel_NoRegister()
{
	return UInputLabel::StaticClass();
}
struct Z_Construct_UClass_UInputLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base label for an input\n */" },
		{ "IncludePath", "UI/InputLabel.h" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base label for an input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Mapping group index - if an input has multiple mappings, this will determine which one to use\n// A value of -1 will use the first mapping group available\n" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
		{ "ToolTip", "Mapping group index - if an input has multiple mappings, this will determine which one to use\nA value of -1 will use the first mapping group available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "EditCondition", "!bUsePlayerKeyGroup" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerKeyGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// If true will use the Key Group of the owning player\n// See InputMappingManager SetPlayerKeyGroup\n" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
		{ "ToolTip", "If true will use the Key Group of the owning player\nSee InputMappingManager SetPlayerKeyGroup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTags_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Tags to determine which key icon should be used\n// Key icons and tags can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/UI/InputLabel.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputLabel_MappingsChanged, "MappingsChanged" }, // 775914285
		{ &Z_Construct_UFunction_UInputLabel_UpdateLabel, "UpdateLabel" }, // 3494481847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputLabel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputLabel, MappingGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroup_MetaData), NewProp_MappingGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputLabel, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroup_MetaData), NewProp_KeyGroup_MetaData) }; // 1298103297
void Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
{
	((UInputLabel*)Obj)->bUsePlayerKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputLabel), &Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlayerKeyGroup_MetaData), NewProp_bUsePlayerKeyGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputLabel, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTags_MetaData), NewProp_IconTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputLabel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputLabel_Statics::ClassParams = {
	&UInputLabel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputLabel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputLabel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputLabel()
{
	if (!Z_Registration_Info_UClass_UInputLabel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputLabel.OuterSingleton, Z_Construct_UClass_UInputLabel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputLabel.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UInputLabel>()
{
	return UInputLabel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputLabel);
UInputLabel::~UInputLabel() {}
// End Class UInputLabel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputLabel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputLabel, UInputLabel::StaticClass, TEXT("UInputLabel"), &Z_Registration_Info_UClass_UInputLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputLabel), 2769086477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputLabel_h_826572990(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_InputLabel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
