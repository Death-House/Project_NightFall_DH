// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/BindCaptureButton.h"
#include "AutoSettingsInput/Public/UI/BindCapturePrompt.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBindCaptureButton() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCaptureButton();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UBindCaptureButton Function ChordCaptured
struct Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics
{
	struct BindCaptureButton_eventChordCaptured_Parms
	{
		FCapturedInput CapturedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BindCaptureButton_eventChordCaptured_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(0, nullptr) }; // 4292826954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::NewProp_CapturedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "ChordCaptured", nullptr, nullptr, Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::BindCaptureButton_eventChordCaptured_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::BindCaptureButton_eventChordCaptured_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBindCaptureButton_ChordCaptured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCaptureButton::execChordCaptured)
{
	P_GET_STRUCT(FCapturedInput,Z_Param_CapturedInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChordCaptured(Z_Param_CapturedInput);
	P_NATIVE_END;
}
// End Class UBindCaptureButton Function ChordCaptured

// Begin Class UBindCaptureButton Function InitializePrompt
struct BindCaptureButton_eventInitializePrompt_Parms
{
	UBindCapturePrompt* PromptWidget;
};
static FName NAME_UBindCaptureButton_InitializePrompt = FName(TEXT("InitializePrompt"));
void UBindCaptureButton::InitializePrompt(UBindCapturePrompt* PromptWidget)
{
	BindCaptureButton_eventInitializePrompt_Parms Parms;
	Parms.PromptWidget=PromptWidget;
	ProcessEvent(FindFunctionChecked(NAME_UBindCaptureButton_InitializePrompt),&Parms);
}
struct Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Called to initialize a new prompt widget to listen for input capture\n// Override this to change how the prompt is set up, or add it to another widget instead of the viewport\n" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ToolTip", "Called to initialize a new prompt widget to listen for input capture\nOverride this to change how the prompt is set up, or add it to another widget instead of the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget = { "PromptWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BindCaptureButton_eventInitializePrompt_Parms, PromptWidget), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidget_MetaData), NewProp_PromptWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "InitializePrompt", nullptr, nullptr, Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers), sizeof(BindCaptureButton_eventInitializePrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(BindCaptureButton_eventInitializePrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBindCaptureButton_InitializePrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCaptureButton::execInitializePrompt)
{
	P_GET_OBJECT(UBindCapturePrompt,Z_Param_PromptWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePrompt_Implementation(Z_Param_PromptWidget);
	P_NATIVE_END;
}
// End Class UBindCaptureButton Function InitializePrompt

// Begin Class UBindCaptureButton Function StartCapture
struct Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics
{
	struct BindCaptureButton_eventStartCapture_Parms
	{
		UBindCapturePrompt* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Create prompt and start listening for input chord\n// Returns the newly created prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ToolTip", "Create prompt and start listening for input chord\nReturns the newly created prompt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BindCaptureButton_eventStartCapture_Parms, ReturnValue), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "StartCapture", nullptr, nullptr, Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::BindCaptureButton_eventStartCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::BindCaptureButton_eventStartCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBindCaptureButton_StartCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCaptureButton::execStartCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBindCapturePrompt**)Z_Param__Result=P_THIS->StartCapture();
	P_NATIVE_END;
}
// End Class UBindCaptureButton Function StartCapture

// Begin Class UBindCaptureButton
void UBindCaptureButton::StaticRegisterNativesUBindCaptureButton()
{
	UClass* Class = UBindCaptureButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChordCaptured", &UBindCaptureButton::execChordCaptured },
		{ "InitializePrompt", &UBindCaptureButton::execInitializePrompt },
		{ "StartCapture", &UBindCaptureButton::execStartCapture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBindCaptureButton);
UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister()
{
	return UBindCaptureButton::StaticClass();
}
struct Z_Construct_UClass_UBindCaptureButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Button that, when clicked, prompts the user and listens for an input chord\n */" },
		{ "IncludePath", "UI/BindCaptureButton.h" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Button that, when clicked, prompts the user and listens for an input chord" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[] = {
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindCapturePromptClass_MetaData[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// BindCapturePrompt class to create when button is clicked\n" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ToolTip", "BindCapturePrompt class to create when button is clicked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturePromptZOrder_MetaData[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Z-order to open capture prompts with\n" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
		{ "ToolTip", "Z-order to open capture prompts with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BindCaptureButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BindCapturePromptClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CapturePromptZOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBindCaptureButton_ChordCaptured, "ChordCaptured" }, // 2359639638
		{ &Z_Construct_UFunction_UBindCaptureButton_InitializePrompt, "InitializePrompt" }, // 4198197513
		{ &Z_Construct_UFunction_UBindCaptureButton_StartCapture, "StartCapture" }, // 813503787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBindCaptureButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCaptureButton, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroup_MetaData), NewProp_KeyGroup_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass = { "BindCapturePromptClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCaptureButton, BindCapturePromptClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindCapturePromptClass_MetaData), NewProp_BindCapturePromptClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder = { "CapturePromptZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCaptureButton, CapturePromptZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturePromptZOrder_MetaData), NewProp_CapturePromptZOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCaptureButton, Prompt), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBindCaptureButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBindCaptureButton_Statics::ClassParams = {
	&UBindCaptureButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBindCaptureButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBindCaptureButton()
{
	if (!Z_Registration_Info_UClass_UBindCaptureButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBindCaptureButton.OuterSingleton, Z_Construct_UClass_UBindCaptureButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBindCaptureButton.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UBindCaptureButton>()
{
	return UBindCaptureButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBindCaptureButton);
UBindCaptureButton::~UBindCaptureButton() {}
// End Class UBindCaptureButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCaptureButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBindCaptureButton, UBindCaptureButton::StaticClass, TEXT("UBindCaptureButton"), &Z_Registration_Info_UClass_UBindCaptureButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBindCaptureButton), 4079465431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCaptureButton_h_3824151016(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCaptureButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCaptureButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
