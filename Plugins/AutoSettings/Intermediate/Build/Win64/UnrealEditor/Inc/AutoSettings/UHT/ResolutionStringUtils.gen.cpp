// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Utility/ResolutionStringUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionStringUtils() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionStringUtils();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionStringUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UResolutionStringUtils
void UResolutionStringUtils::StaticRegisterNativesUResolutionStringUtils()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResolutionStringUtils);
UClass* Z_Construct_UClass_UResolutionStringUtils_NoRegister()
{
	return UResolutionStringUtils::StaticClass();
}
struct Z_Construct_UClass_UResolutionStringUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helpers for dealing with strings combining resolution with window mode, for example \"1920x1080wf\"\n */" },
		{ "IncludePath", "Utility/ResolutionStringUtils.h" },
		{ "ModuleRelativePath", "Public/Utility/ResolutionStringUtils.h" },
		{ "ToolTip", "Helpers for dealing with strings combining resolution with window mode, for example \"1920x1080wf\"" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionStringUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResolutionStringUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionStringUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResolutionStringUtils_Statics::ClassParams = {
	&UResolutionStringUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionStringUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UResolutionStringUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResolutionStringUtils()
{
	if (!Z_Registration_Info_UClass_UResolutionStringUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResolutionStringUtils.OuterSingleton, Z_Construct_UClass_UResolutionStringUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResolutionStringUtils.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionStringUtils>()
{
	return UResolutionStringUtils::StaticClass();
}
UResolutionStringUtils::UResolutionStringUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionStringUtils);
UResolutionStringUtils::~UResolutionStringUtils() {}
// End Class UResolutionStringUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_ResolutionStringUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResolutionStringUtils, UResolutionStringUtils::StaticClass, TEXT("UResolutionStringUtils"), &Z_Registration_Info_UClass_UResolutionStringUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResolutionStringUtils), 603435771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_ResolutionStringUtils_h_136136628(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_ResolutionStringUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_ResolutionStringUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
