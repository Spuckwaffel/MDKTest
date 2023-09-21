
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: McpProfileSys

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             MaterialOnlyParameterNames                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_PlaceComponent
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsApparelItemDefinition
/// Size: 0x0028 (0x000770 - 0x000798)
class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1944;

public:
	SMember(FCosmeticSlotSelector)                     SlotValidWithin                                             ___ OFFSET(get<T>, {0x770, 2, 0, 0})
	SMember(FApparelCustomizableItemReference)         Parameter                                                   ___ OFFSET(get<T>, {0x778, 32, 0, 0})
};

/// Class /Script/MeshCosmetics.FortCustomizableObjectParameterVariant
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FCustomizableObjectParamsVariantDef>) ParameterOptions                                          ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/MeshCosmetics.FortCustomizableObjectSprayVariant
/// Size: 0x0238 (0x000070 - 0x0002A8)
class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FGameplayTag)                              ActiveSelectionTag                                          ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FString)                                   EnabledParamName                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   ProjectorParamName                                          ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   TextureParamName                                            ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   SaturationParamName                                         ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   WearParamName                                               ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   ScaleParamName                                              ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters ___ OFFSET(get<T>, {0xD8, 72, 0, 0})
	SMember(FCustomizableObjectSprayVariantFixedProperties) FixedSprayLocation                                     ___ OFFSET(get<T>, {0x120, 104, 0, 0})
	SMember(FCustomizableObjectSprayVariantSelectablePayload) DefaultSprayCustomization                            ___ OFFSET(get<T>, {0x188, 152, 0, 0})
	SMember(FCustomizableObjectSprayVariantPayloadClamps) SprayNumericConstraints                                  ___ OFFSET(get<T>, {0x220, 48, 0, 0})
	DMember(float)                                     TextureBaseScale                                            ___ OFFSET(get<float>, {0x250, 4, 0, 0})
	SMember(FCustomizableObjectSprayVariantSlotImageProperties) SpraySlotImageProperties                           ___ OFFSET(get<T>, {0x258, 64, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyAssembledMeshSchema : public UFortCosmeticFlowOption
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_CompileObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ManageComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ChooseParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticTagInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCosmeticTagInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.FortCustomizableInstanceLODManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsLayoutSchema
/// Size: 0x00A0 (0x000378 - 0x000418)
class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot>) SlotDataConfig                                      ___ OFFSET(get<T>, {0x378, 80, 0, 0})
	CMember(TMap<FCosmeticSlotSelector, TWeakObjectPtr>) SlottedCustomizableObjects                                ___ OFFSET(get<T>, {0x3C8, 80, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAppliedSchemaData
/// Size: 0x0020 (0x000028 - 0x000048)
class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UMeshCosmeticsLayoutSchema*>) SchemaAsset                                               ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsSupportedSchemaData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<TWeakObjectPtr>)                    SupportedSchemas                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.PartHandleControllers
/// Size: 0x0020 (0x000000 - 0x000020)
class FPartHandleControllers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.ApparelCustomizableItemReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FApparelCustomizableItemReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   GroupName                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ValueName                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectSprayVariantFixedProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   BaseScale                                                   ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     BaseRotation                                                ___ OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
/// Size: 0x0018 (0x000080 - 0x000098)
class FCustomizableObjectSprayVariantSelectablePayload : public FBaseVariantDef
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FPrimaryAssetId)                           TextureSource                                               ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(float)                                     Saturation                                                  ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     Wear                                                        ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizableObjectSprayVariantMCPPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPrimaryAssetId)                           TextureAssetID                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  CompactSaturation                                           ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  CompactWear                                                 ___ OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  CompactScale                                                ___ OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectSprayVariantPayloadClamps : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FFloatRange)                               Saturation                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFloatRange)                               Wear                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FFloatRange)                               Scale                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectSprayVariantSlotImageProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               SprayNotAssignedImage                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SprayAssignedImage                                          ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamVariantBase
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectParamVariantBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UCustomizableObject*>)      ObjectToModify                                              ___ OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectValueBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomizableObjectValueBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   RangeIndex                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntValue
/// Size: 0x0018 (0x000018 - 0x000030)
class FCustomizableObjectIntValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NumericValue                                                ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   NamedValue                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectFloatValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectBoolValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorValue
/// Size: 0x0010 (0x000018 - 0x000028)
class FCustomizableObjectVectorValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Value                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectTextureValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UTexture2D*)                               Value                                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorValue
/// Size: 0x0068 (0x000018 - 0x000080)
class FCustomizableObjectProjectorValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateValue
/// Size: 0x0010 (0x000018 - 0x000028)
class FCustomizableObjectStateValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   NewState                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectIntParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectIntValue>)       Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectFloatParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectFloatValue>)     Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectBoolParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectBoolValue>)      Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectVectorParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectVectorValue>)    Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectTextureParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectTextureValue>)   Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectProjectorVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectProjectorValue>) Parameters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectsVirtualLayer
/// Size: 0x0090 (0x000000 - 0x000090)
class FCustomizableObjectMultilayerProjectsVirtualLayer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bModifyEnabled                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bModifyProjection                                           ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bModifyImage                                                ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	SMember(FString)                                   Image                                                       ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bModifyOpacity                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     Opacity                                                     ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bModifyOrder                                                ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   Order                                                       ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectors
/// Size: 0x0050 (0x000000 - 0x000050)
class FCustomizableObjectMultilayerProjectors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FCustomizableObjectMultilayerProjectsVirtualLayer>) VirtualLayers                          ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectorVariant
/// Size: 0x0050 (0x000020 - 0x000070)
class FCustomizableObjectMultilayerProjectorVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<FName, FCustomizableObjectMultilayerProjectors>) MultilayerProjectors                             ___ OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectStateVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectStateValue>)     States                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamsVariantDef
/// Size: 0x0080 (0x000080 - 0x000100)
class FCustomizableObjectParamsVariantDef : public FBaseVariantDef
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FCustomizableObjectIntParamVariant>) IntParams                                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParamVariant>) FloatParams                                              ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParamVariant>) BoolParams                                                ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParamVariant>) VectorParams                                            ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParamVariant>) TextureParams                                          ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorVariant>) ProjectorParams                                           ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectMultilayerProjectorVariant>) MultilayerProjectorParams                       ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStateVariant>)   StateVariants                                               ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMeshCosmeticsCustomizationPerSlotData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
/// Size: 0x02A0 (0x000000 - 0x0002A0)
class FMeshCosmeticsCustomizableObjectEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
/// Size: 0x0020 (0x000000 - 0x000020)
class FMeshCosmeticsCustomizationCCV2Data : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsImageProviderWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshCosmeticsImageProviderWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDefaultImageProvider*)                    ImageProvider                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.PendingCustomizationComponentsList
/// Size: 0x0030 (0x000000 - 0x000030)
class FPendingCustomizationComponentsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MeshCosmetics.LoadedAthenaCosmeticAssets
/// Size: 0x0020 (0x000000 - 0x000020)
class FLoadedAthenaCosmeticAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.PendingVariantAssetsToLoad
/// Size: 0x0058 (0x000000 - 0x000058)
class FPendingVariantAssetsToLoad : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/MeshCosmetics.SkeletalComponentData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSkeletalComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UMeshCosmeticsLayoutSchema*)               LayoutSchema                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCosmeticSlotSelector)                     Slot                                                        ___ OFFSET(get<T>, {0x8, 2, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.CosmeticSlotSelector
/// Size: 0x0002 (0x000000 - 0x000002)
class FCosmeticSlotSelector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(TEnumAsByte<EFortCustomPartType>)          LegacyPartType                                              ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EAthenaCustomizationCategory)              SourceCategory                                              ___ OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsPassDataCommon
/// Size: 0x0110 (0x000000 - 0x000110)
class FMeshCosmeticsPassDataCommon : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot>) AllSlotDataConfigs                                  ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FCosmeticSlotSelector, UMeshCosmeticsLayoutSchema*>) ProvidedSlotsToSchemaData                    ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<UAthenaCosmeticItemDefinition*>)    MeshCosmeticsItemDefs                                       ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UObject*>)                          KeepLoadedObjects                                           ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TMap<UCustomizableSkeletalComponent*, FSkeletalComponentData>) SkeletalComponentData                   ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CosmeticsLayoutSlot
/// Size: 0x0098 (0x000000 - 0x000098)
class FCosmeticsLayoutSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<UCustomizableObject*>)      SlottedObject                                               ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ComponentIndex                                              ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FCosmeticSlotSelector)                     RequiredCosmeticPart                                        ___ OFFSET(get<T>, {0x24, 2, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ProportionalLayerAnimBP                                     ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<int32_t, FName>)                      LinkedAnimGraphTag                                          ___ OFFSET(get<T>, {0x48, 80, 0, 0})
};
