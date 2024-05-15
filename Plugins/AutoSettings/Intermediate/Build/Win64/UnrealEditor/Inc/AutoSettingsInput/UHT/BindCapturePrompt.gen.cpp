// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/BindCapturePrompt.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBindCapturePrompt() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCapturePrompt();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister();
AUTOSETTINGSINPUT_API UEnum* Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode();
AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature();
AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature();
AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FCapturedInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapturedInput;
class UScriptStruct* FCapturedInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapturedInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedInput, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("CapturedInput"));
	}
	return Z_Registration_Info_UScriptStruct_CapturedInput.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FCapturedInput>()
{
	return FCapturedInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCapturedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chord_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord = { "Chord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapturedInput, Chord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chord_MetaData), NewProp_Chord_MetaData) }; // 4109060215
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapturedInput, AxisScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScale_MetaData), NewProp_AxisScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"CapturedInput",
	Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers),
	sizeof(FCapturedInput),
	alignof(FCapturedInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapturedInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapturedInput.InnerSingleton, Z_Construct_UScriptStruct_FCapturedInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CapturedInput.InnerSingleton;
}
// End ScriptStruct FCapturedInput

// Begin Delegate FChordCapturedEvent
struct Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettingsInput_eventChordCapturedEvent_Parms
	{
		FCapturedInput CapturedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventChordCapturedEvent_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(0, nullptr) }; // 4292826954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::NewProp_CapturedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "ChordCapturedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventChordCapturedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventChordCapturedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChordCapturedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordCapturedEvent, FCapturedInput CapturedInput)
{
	struct _Script_AutoSettingsInput_eventChordCapturedEvent_Parms
	{
		FCapturedInput CapturedInput;
	};
	_Script_AutoSettingsInput_eventChordCapturedEvent_Parms Parms;
	Parms.CapturedInput=CapturedInput;
	ChordCapturedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FChordCapturedEvent

// Begin Delegate FChordRejectedEvent
struct Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettingsInput_eventChordRejectedEvent_Parms
	{
		FCapturedInput CapturedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventChordRejectedEvent_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(0, nullptr) }; // 4292826954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::NewProp_CapturedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "ChordRejectedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventChordRejectedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventChordRejectedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChordRejectedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordRejectedEvent, FCapturedInput CapturedInput)
{
	struct _Script_AutoSettingsInput_eventChordRejectedEvent_Parms
	{
		FCapturedInput CapturedInput;
	};
	_Script_AutoSettingsInput_eventChordRejectedEvent_Parms Parms;
	Parms.CapturedInput=CapturedInput;
	ChordRejectedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FChordRejectedEvent

// Begin Delegate FCapturePromptClosedEvent
struct Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics
{
	struct _Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms
	{
		bool bWasCancelled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
{
	((_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms*)Obj)->bWasCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms), &Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "CapturePromptClosedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCapturePromptClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& CapturePromptClosedEvent, bool bWasCancelled)
{
	struct _Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms
	{
		bool bWasCancelled;
	};
	_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms Parms;
	Parms.bWasCancelled=bWasCancelled ? true : false;
	CapturePromptClosedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCapturePromptClosedEvent

// Begin Enum EBindingCaptureMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBindingCaptureMode;
static UEnum* EBindingCaptureMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBindingCaptureMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBindingCaptureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("EBindingCaptureMode"));
	}
	return Z_Registration_Info_UEnum_EBindingCaptureMode.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UEnum* StaticEnum<EBindingCaptureMode>()
{
	return EBindingCaptureMode_StaticEnum();
}
struct Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "OnPressed.Comment", "// Capture keys when they are pressed. This will prevent use of modifiers, since a modifier will be captured by itself when it is pressed.\n" },
		{ "OnPressed.Name", "EBindingCaptureMode::OnPressed" },
		{ "OnPressed.ToolTip", "Capture keys when they are pressed. This will prevent use of modifiers, since a modifier will be captured by itself when it is pressed." },
		{ "OnReleased.Comment", "// Capture keys when they are released (default)\n" },
		{ "OnReleased.Name", "EBindingCaptureMode::OnReleased" },
		{ "OnReleased.ToolTip", "Capture keys when they are released (default)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBindingCaptureMode::OnReleased", (int64)EBindingCaptureMode::OnReleased },
		{ "EBindingCaptureMode::OnPressed", (int64)EBindingCaptureMode::OnPressed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	"EBindingCaptureMode",
	"EBindingCaptureMode",
	Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode()
{
	if (!Z_Registration_Info_UEnum_EBindingCaptureMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBindingCaptureMode.InnerSingleton, Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBindingCaptureMode.InnerSingleton;
}
// End Enum EBindingCaptureMode

// Begin Class UBindCapturePrompt Function Cancel
struct Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Cancel listening and close the prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Cancel listening and close the prompt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBindCapturePrompt_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCapturePrompt::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// End Class UBindCapturePrompt Function Cancel

// Begin Class UBindCapturePrompt Function GetKeyGroup
struct Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics
{
	struct BindCapturePrompt_eventGetKeyGroup_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Returns the key group used for this prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Returns the key group used for this prompt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BindCapturePrompt_eventGetKeyGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "GetKeyGroup", nullptr, nullptr, Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::BindCapturePrompt_eventGetKeyGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::BindCapturePrompt_eventGetKeyGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCapturePrompt::execGetKeyGroup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetKeyGroup();
	P_NATIVE_END;
}
// End Class UBindCapturePrompt Function GetKeyGroup

// Begin Class UBindCapturePrompt Function IsKeyAllowed
struct BindCapturePrompt_eventIsKeyAllowed_Parms
{
	FKey PrimaryKey;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BindCapturePrompt_eventIsKeyAllowed_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBindCapturePrompt_IsKeyAllowed = FName(TEXT("IsKeyAllowed"));
bool UBindCapturePrompt::IsKeyAllowed(FKey PrimaryKey)
{
	BindCapturePrompt_eventIsKeyAllowed_Parms Parms;
	Parms.PrimaryKey=PrimaryKey;
	ProcessEvent(FindFunctionChecked(NAME_UBindCapturePrompt_IsKeyAllowed),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Subclasses can override to disallow keys based on the prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Subclasses can override to disallow keys based on the prompt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_PrimaryKey = { "PrimaryKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BindCapturePrompt_eventIsKeyAllowed_Parms, PrimaryKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BindCapturePrompt_eventIsKeyAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BindCapturePrompt_eventIsKeyAllowed_Parms), &Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_PrimaryKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "IsKeyAllowed", nullptr, nullptr, Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers), sizeof(BindCapturePrompt_eventIsKeyAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BindCapturePrompt_eventIsKeyAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBindCapturePrompt::execIsKeyAllowed)
{
	P_GET_STRUCT(FKey,Z_Param_PrimaryKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKeyAllowed_Implementation(Z_Param_PrimaryKey);
	P_NATIVE_END;
}
// End Class UBindCapturePrompt Function IsKeyAllowed

// Begin Class UBindCapturePrompt
void UBindCapturePrompt::StaticRegisterNativesUBindCapturePrompt()
{
	UClass* Class = UBindCapturePrompt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UBindCapturePrompt::execCancel },
		{ "GetKeyGroup", &UBindCapturePrompt::execGetKeyGroup },
		{ "IsKeyAllowed", &UBindCapturePrompt::execIsKeyAllowed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBindCapturePrompt);
UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister()
{
	return UBindCapturePrompt::StaticClass();
}
struct Z_Construct_UClass_UBindCapturePrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Prompt that listens for an input chord and fires an event when it captures one\n */" },
		{ "IncludePath", "UI/BindCapturePrompt.h" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Prompt that listens for an input chord and fires an event when it captures one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// If true, then will tell viewport to ignore all game input (leaving only UI input)\n// while capturing, then restore if when closed. If the game supports multiple local players\n// binding at the same time then this may be undesirable.\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If true, then will tell viewport to ignore all game input (leaving only UI input)\nwhile capturing, then restore if when closed. If the game supports multiple local players\nbinding at the same time then this may be undesirable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictKeyGroup_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// If true, only allow capturing keys in the passed in Key Group, otherwise the keys will be captured anyway\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If true, only allow capturing keys in the passed in Key Group, otherwise the keys will be captured anyway" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureMode_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Should keys and mouse clicks be captured when they are pressed, or when they are released?\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Should keys and mouse clicks be captured when they are pressed, or when they are released?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[] = {
		{ "Comment", "// If valid and bRestrictKeyGroup is true, then only keys allowed by this Key Group will be captured\n// If a key is rejected for not being in the Key Group, then OnChordRejected will be fired\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If valid and bRestrictKeyGroup is true, then only keys allowed by this Key Group will be captured\nIf a key is rejected for not being in the Key Group, then OnChordRejected will be fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChordCaptured_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when an input chord is captured\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when an input chord is captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChordRejected_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when an input chord is rejected\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when an input chord is rejected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCapturePromptClosed_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when the capture prompt is closed\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when the capture prompt is closed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysDown_MetaData[] = {
		{ "Comment", "// Keys that are currently down, used to collect modifiers\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Keys that are currently down, used to collect modifiers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousIgnoreInput_MetaData[] = {
		{ "Comment", "// Value of viewport's \"ignore input\" before the prompt was opened\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Value of viewport's \"ignore input\" before the prompt was opened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMouseDelta_MetaData[] = {
		{ "Comment", "// Total delta the mouse has moved\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Total delta the mouse has moved" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreGameViewportInputWhileCapturing;
	static void NewProp_bRestrictKeyGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictKeyGroup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CaptureMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChordCaptured;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChordRejected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCapturePromptClosed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysDown_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysDown;
	static void NewProp_PreviousIgnoreInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreviousIgnoreInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMouseDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBindCapturePrompt_Cancel, "Cancel" }, // 3713026397
		{ &Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup, "GetKeyGroup" }, // 41774905
		{ &Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed, "IsKeyAllowed" }, // 3224450816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBindCapturePrompt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit(void* Obj)
{
	((UBindCapturePrompt*)Obj)->bIgnoreGameViewportInputWhileCapturing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing = { "bIgnoreGameViewportInputWhileCapturing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData), NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData) };
void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_SetBit(void* Obj)
{
	((UBindCapturePrompt*)Obj)->bRestrictKeyGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup = { "bRestrictKeyGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictKeyGroup_MetaData), NewProp_bRestrictKeyGroup_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode = { "CaptureMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, CaptureMode), Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureMode_MetaData), NewProp_CaptureMode_MetaData) }; // 2997798680
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroup_MetaData), NewProp_KeyGroup_MetaData) }; // 1298103297
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured = { "OnChordCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, OnChordCaptured), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChordCaptured_MetaData), NewProp_OnChordCaptured_MetaData) }; // 761885273
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected = { "OnChordRejected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, OnChordRejected), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChordRejected_MetaData), NewProp_OnChordRejected_MetaData) }; // 1822432920
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed = { "OnCapturePromptClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, OnCapturePromptClosed), Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCapturePromptClosed_MetaData), NewProp_OnCapturePromptClosed_MetaData) }; // 1493693657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_Inner = { "KeysDown", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown = { "KeysDown", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, KeysDown), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysDown_MetaData), NewProp_KeysDown_MetaData) }; // 658672854
void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_SetBit(void* Obj)
{
	((UBindCapturePrompt*)Obj)->PreviousIgnoreInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput = { "PreviousIgnoreInput", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousIgnoreInput_MetaData), NewProp_PreviousIgnoreInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta = { "AccumulatedMouseDelta", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBindCapturePrompt, AccumulatedMouseDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedMouseDelta_MetaData), NewProp_AccumulatedMouseDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBindCapturePrompt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBindCapturePrompt_Statics::ClassParams = {
	&UBindCapturePrompt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::Class_MetaDataParams), Z_Construct_UClass_UBindCapturePrompt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBindCapturePrompt()
{
	if (!Z_Registration_Info_UClass_UBindCapturePrompt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBindCapturePrompt.OuterSingleton, Z_Construct_UClass_UBindCapturePrompt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBindCapturePrompt.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UBindCapturePrompt>()
{
	return UBindCapturePrompt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBindCapturePrompt);
UBindCapturePrompt::~UBindCapturePrompt() {}
// End Class UBindCapturePrompt

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBindingCaptureMode_StaticEnum, TEXT("EBindingCaptureMode"), &Z_Registration_Info_UEnum_EBindingCaptureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2997798680U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCapturedInput::StaticStruct, Z_Construct_UScriptStruct_FCapturedInput_Statics::NewStructOps, TEXT("CapturedInput"), &Z_Registration_Info_UScriptStruct_CapturedInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapturedInput), 4292826954U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBindCapturePrompt, UBindCapturePrompt::StaticClass, TEXT("UBindCapturePrompt"), &Z_Registration_Info_UClass_UBindCapturePrompt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBindCapturePrompt), 191691881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_1087340732(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
