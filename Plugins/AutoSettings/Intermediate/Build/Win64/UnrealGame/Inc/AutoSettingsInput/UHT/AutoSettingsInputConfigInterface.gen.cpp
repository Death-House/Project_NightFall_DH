// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputConfigInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputConfigInterface() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Interface UAutoSettingsInputConfigInterface
void UAutoSettingsInputConfigInterface::StaticRegisterNativesUAutoSettingsInputConfigInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsInputConfigInterface);
UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister()
{
	return UAutoSettingsInputConfigInterface::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfigInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAutoSettingsInputConfigInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::ClassParams = {
	&UAutoSettingsInputConfigInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsInputConfigInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsInputConfigInterface.OuterSingleton, Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsInputConfigInterface.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputConfigInterface>()
{
	return UAutoSettingsInputConfigInterface::StaticClass();
}
UAutoSettingsInputConfigInterface::UAutoSettingsInputConfigInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputConfigInterface);
UAutoSettingsInputConfigInterface::~UAutoSettingsInputConfigInterface() {}
// End Interface UAutoSettingsInputConfigInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsInputConfigInterface, UAutoSettingsInputConfigInterface::StaticClass, TEXT("UAutoSettingsInputConfigInterface"), &Z_Registration_Info_UClass_UAutoSettingsInputConfigInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsInputConfigInterface), 2467713211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_2647928079(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
