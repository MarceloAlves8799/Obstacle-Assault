// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlataform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlataform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlataform();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlataform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	void AMovingPlataform::StaticRegisterNativesAMovingPlataform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlataform);
	UClass* Z_Construct_UClass_AMovingPlataform_NoRegister()
	{
		return AMovingPlataform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlataform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlataform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlataform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlataform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlataform.h" },
		{ "ModuleRelativePath", "MovingPlataform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlataform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlataform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlataform_Statics::ClassParams = {
		&AMovingPlataform::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlataform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlataform_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMovingPlataform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlataform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlataform.OuterSingleton, Z_Construct_UClass_AMovingPlataform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlataform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlataform>()
	{
		return AMovingPlataform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlataform);
	AMovingPlataform::~AMovingPlataform() {}
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlataform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlataform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlataform, AMovingPlataform::StaticClass, TEXT("AMovingPlataform"), &Z_Registration_Info_UClass_AMovingPlataform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlataform), 2880243898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlataform_h_538886669(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlataform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlataform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
