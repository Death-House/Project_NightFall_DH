// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/KeyLabel.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyLabel() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UKeyLabel();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UKeyLabel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UKeyLabel Function GetDisplayName
struct Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics
{
	struct KeyLabel_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Label text to display for the key\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Label text to display for the key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyLabel_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::KeyLabel_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::KeyLabel_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UKeyLabel Function GetDisplayName

// Begin Class UKeyLabel Function GetDisplayNameVisibility
struct KeyLabel_eventGetDisplayNameVisibility_Parms
{
	ESlateVisibility ReturnValue;

	/** Constructor, initializes return property only **/
	KeyLabel_eventGetDisplayNameVisibility_Parms()
		: ReturnValue((ESlateVisibility)0)
	{
	}
};
static FName NAME_UKeyLabel_GetDisplayNameVisibility = FName(TEXT("GetDisplayNameVisibility"));
ESlateVisibility UKeyLabel::GetDisplayNameVisibility() const
{
	KeyLabel_eventGetDisplayNameVisibility_Parms Parms;
	const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetDisplayNameVisibility),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyLabel_eventGetDisplayNameVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetDisplayNameVisibility", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers), sizeof(KeyLabel_eventGetDisplayNameVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(KeyLabel_eventGetDisplayNameVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execGetDisplayNameVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetDisplayNameVisibility_Implementation();
	P_NATIVE_END;
}
// End Class UKeyLabel Function GetDisplayNameVisibility

// Begin Class UKeyLabel Function GetIcon
struct Z_Construct_UFunction_UKeyLabel_GetIcon_Statics
{
	struct KeyLabel_eventGetIcon_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Icon texture for the key\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Icon texture for the key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyLabel_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::KeyLabel_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::KeyLabel_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class UKeyLabel Function GetIcon

// Begin Class UKeyLabel Function GetIconBrush
struct KeyLabel_eventGetIconBrush_Parms
{
	FSlateBrush ReturnValue;
};
static FName NAME_UKeyLabel_GetIconBrush = FName(TEXT("GetIconBrush"));
FSlateBrush UKeyLabel::GetIconBrush() const
{
	KeyLabel_eventGetIconBrush_Parms Parms;
	const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetIconBrush),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyLabel_eventGetIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIconBrush", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers), sizeof(KeyLabel_eventGetIconBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(KeyLabel_eventGetIconBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_GetIconBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execGetIconBrush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=P_THIS->GetIconBrush_Implementation();
	P_NATIVE_END;
}
// End Class UKeyLabel Function GetIconBrush

// Begin Class UKeyLabel Function GetIconVisibility
struct KeyLabel_eventGetIconVisibility_Parms
{
	ESlateVisibility ReturnValue;

	/** Constructor, initializes return property only **/
	KeyLabel_eventGetIconVisibility_Parms()
		: ReturnValue((ESlateVisibility)0)
	{
	}
};
static FName NAME_UKeyLabel_GetIconVisibility = FName(TEXT("GetIconVisibility"));
ESlateVisibility UKeyLabel::GetIconVisibility() const
{
	KeyLabel_eventGetIconVisibility_Parms Parms;
	const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetIconVisibility),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyLabel_eventGetIconVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIconVisibility", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers), sizeof(KeyLabel_eventGetIconVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(KeyLabel_eventGetIconVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_GetIconVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execGetIconVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetIconVisibility_Implementation();
	P_NATIVE_END;
}
// End Class UKeyLabel Function GetIconVisibility

// Begin Class UKeyLabel Function HasIcon
struct Z_Construct_UFunction_UKeyLabel_HasIcon_Statics
{
	struct KeyLabel_eventHasIcon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// True if the key has an icon defined\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "True if the key has an icon defined" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KeyLabel_eventHasIcon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeyLabel_eventHasIcon_Parms), &Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "HasIcon", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::KeyLabel_eventHasIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::KeyLabel_eventHasIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_HasIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execHasIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasIcon();
	P_NATIVE_END;
}
// End Class UKeyLabel Function HasIcon

// Begin Class UKeyLabel Function HasValidKey
struct Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics
{
	struct KeyLabel_eventHasValidKey_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// True if the key is valid\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "True if the key is valid" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KeyLabel_eventHasValidKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeyLabel_eventHasValidKey_Parms), &Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "HasValidKey", nullptr, nullptr, Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::KeyLabel_eventHasValidKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::KeyLabel_eventHasValidKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyLabel_HasValidKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execHasValidKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidKey();
	P_NATIVE_END;
}
// End Class UKeyLabel Function HasValidKey

// Begin Class UKeyLabel Function OnGlobalKeyIconTagsModified
struct Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "OnGlobalKeyIconTagsModified", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyLabel::execOnGlobalKeyIconTagsModified)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalKeyIconTagsModified();
	P_NATIVE_END;
}
// End Class UKeyLabel Function OnGlobalKeyIconTagsModified

// Begin Class UKeyLabel Function UpdateKeyLabel
static FName NAME_UKeyLabel_UpdateKeyLabel = FName(TEXT("UpdateKeyLabel"));
void UKeyLabel::UpdateKeyLabel()
{
	ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_UpdateKeyLabel),NULL);
}
struct Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Implement this to respond to data changes\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Implement this to respond to data changes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "UpdateKeyLabel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UKeyLabel Function UpdateKeyLabel

// Begin Class UKeyLabel
void UKeyLabel::StaticRegisterNativesUKeyLabel()
{
	UClass* Class = UKeyLabel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &UKeyLabel::execGetDisplayName },
		{ "GetDisplayNameVisibility", &UKeyLabel::execGetDisplayNameVisibility },
		{ "GetIcon", &UKeyLabel::execGetIcon },
		{ "GetIconBrush", &UKeyLabel::execGetIconBrush },
		{ "GetIconVisibility", &UKeyLabel::execGetIconVisibility },
		{ "HasIcon", &UKeyLabel::execHasIcon },
		{ "HasValidKey", &UKeyLabel::execHasValidKey },
		{ "OnGlobalKeyIconTagsModified", &UKeyLabel::execOnGlobalKeyIconTagsModified },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyLabel);
UClass* Z_Construct_UClass_UKeyLabel_NoRegister()
{
	return UKeyLabel::StaticClass();
}
struct Z_Construct_UClass_UKeyLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows the icon for a specific key or falls back to text label\n */" },
		{ "IncludePath", "UI/KeyLabel.h" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Shows the icon for a specific key or falls back to text label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyInvalidText_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Text to display when key is invalid or unbound\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Text to display when key is invalid or unbound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelOverride_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// If not empty, text to display instead of key label\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "If not empty, text to display instead of key label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Key that this label is for\n" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Key that this label is for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "/**\n\x09 * Scale value used to look up an axis button key to substitute if paired with an axis key\n\x09 * e.g. Show \"Gamepad Left Stick Down\" instead of \"Gamepad Left Stick Y\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Scale value used to look up an axis button key to substitute if paired with an axis key\ne.g. Show \"Gamepad Left Stick Down\" instead of \"Gamepad Left Stick Y\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTags_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "/**\n\x09 * Tags to determine which key icon should be used\n\x09 * Key icons and tags can be defined in project settings (AutoSettings page)\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/KeyLabel.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_KeyInvalidText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyLabel_GetDisplayName, "GetDisplayName" }, // 1061818048
		{ &Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility, "GetDisplayNameVisibility" }, // 3774835653
		{ &Z_Construct_UFunction_UKeyLabel_GetIcon, "GetIcon" }, // 2191976495
		{ &Z_Construct_UFunction_UKeyLabel_GetIconBrush, "GetIconBrush" }, // 3485053864
		{ &Z_Construct_UFunction_UKeyLabel_GetIconVisibility, "GetIconVisibility" }, // 4210015233
		{ &Z_Construct_UFunction_UKeyLabel_HasIcon, "HasIcon" }, // 3722743321
		{ &Z_Construct_UFunction_UKeyLabel_HasValidKey, "HasValidKey" }, // 3906742310
		{ &Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified, "OnGlobalKeyIconTagsModified" }, // 4165727973
		{ &Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel, "UpdateKeyLabel" }, // 3582818799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyLabel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText = { "KeyInvalidText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyLabel, KeyInvalidText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyInvalidText_MetaData), NewProp_KeyInvalidText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride = { "LabelOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyLabel, LabelOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelOverride_MetaData), NewProp_LabelOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyLabel, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyLabel, AxisScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScale_MetaData), NewProp_AxisScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyLabel, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTags_MetaData), NewProp_IconTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_AxisScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyLabel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyLabel_Statics::ClassParams = {
	&UKeyLabel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKeyLabel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyLabel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyLabel()
{
	if (!Z_Registration_Info_UClass_UKeyLabel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyLabel.OuterSingleton, Z_Construct_UClass_UKeyLabel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyLabel.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UKeyLabel>()
{
	return UKeyLabel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyLabel);
UKeyLabel::~UKeyLabel() {}
// End Class UKeyLabel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyLabel, UKeyLabel::StaticClass, TEXT("UKeyLabel"), &Z_Registration_Info_UClass_UKeyLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyLabel), 1093631377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_2881368390(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_KeyLabel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
