// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/ResolutionValueMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionValueMask() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionValueMask();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionValueMask_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UResolutionValueMask
void UResolutionValueMask::StaticRegisterNativesUResolutionValueMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResolutionValueMask);
UClass* Z_Construct_UClass_UResolutionValueMask_NoRegister()
{
	return UResolutionValueMask::StaticClass();
}
struct Z_Construct_UClass_UResolutionValueMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SettingValueMask for splitting and recombining the r.SetRes CVar into Resolution\n */" },
		{ "IncludePath", "Misc/ResolutionValueMask.h" },
		{ "ModuleRelativePath", "Public/Misc/ResolutionValueMask.h" },
		{ "ToolTip", "SettingValueMask for splitting and recombining the r.SetRes CVar into Resolution" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionValueMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResolutionValueMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USettingValueMask,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionValueMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResolutionValueMask_Statics::ClassParams = {
	&UResolutionValueMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionValueMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UResolutionValueMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResolutionValueMask()
{
	if (!Z_Registration_Info_UClass_UResolutionValueMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResolutionValueMask.OuterSingleton, Z_Construct_UClass_UResolutionValueMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResolutionValueMask.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionValueMask>()
{
	return UResolutionValueMask::StaticClass();
}
UResolutionValueMask::UResolutionValueMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionValueMask);
UResolutionValueMask::~UResolutionValueMask() {}
// End Class UResolutionValueMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionValueMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResolutionValueMask, UResolutionValueMask::StaticClass, TEXT("UResolutionValueMask"), &Z_Registration_Info_UClass_UResolutionValueMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResolutionValueMask), 3139228736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionValueMask_h_3164542140(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionValueMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionValueMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
