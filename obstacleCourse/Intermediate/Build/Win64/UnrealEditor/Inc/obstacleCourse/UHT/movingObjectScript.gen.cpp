// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "obstacleCourse/movingObjectScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemovingObjectScript() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OBSTACLECOURSE_API UClass* Z_Construct_UClass_UmovingObjectScript();
OBSTACLECOURSE_API UClass* Z_Construct_UClass_UmovingObjectScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_obstacleCourse();
// End Cross Module References

// Begin Class UmovingObjectScript
void UmovingObjectScript::StaticRegisterNativesUmovingObjectScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UmovingObjectScript);
UClass* Z_Construct_UClass_UmovingObjectScript_NoRegister()
{
	return UmovingObjectScript::StaticClass();
}
struct Z_Construct_UClass_UmovingObjectScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "movingObjectScript.h" },
		{ "ModuleRelativePath", "movingObjectScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UmovingObjectScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UmovingObjectScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_obstacleCourse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UmovingObjectScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UmovingObjectScript_Statics::ClassParams = {
	&UmovingObjectScript::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UmovingObjectScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UmovingObjectScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UmovingObjectScript()
{
	if (!Z_Registration_Info_UClass_UmovingObjectScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UmovingObjectScript.OuterSingleton, Z_Construct_UClass_UmovingObjectScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UmovingObjectScript.OuterSingleton;
}
template<> OBSTACLECOURSE_API UClass* StaticClass<UmovingObjectScript>()
{
	return UmovingObjectScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UmovingObjectScript);
UmovingObjectScript::~UmovingObjectScript() {}
// End Class UmovingObjectScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingObjectScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UmovingObjectScript, UmovingObjectScript::StaticClass, TEXT("UmovingObjectScript"), &Z_Registration_Info_UClass_UmovingObjectScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UmovingObjectScript), 2715033245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingObjectScript_h_400497734(TEXT("/Script/obstacleCourse"),
	Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingObjectScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingObjectScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
