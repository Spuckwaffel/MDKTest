
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule

/// Class /Script/GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FStateTreeReference)                       StateTreeReference                                          ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction
/// Size: 0x00D8 (0x000068 - 0x000140)
class UAITask_UseGameplayInteraction : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSucceeded                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveToFailed                                              ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FGameplayInteractionContext)               GameplayInteractionContext                                  ___ OFFSET(get<T>, {0xA8, 104, 0, 0})
	CMember(UAITask_MoveTo*)                           MoveToTask                                                  ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedHandle                                               ___ OFFSET(get<T>, {0x118, 32, 0, 0})
	SMember(FGameplayInteractionAbortContext)          AbortContext                                                ___ OFFSET(get<T>, {0x138, 1, 0, 0})
};

/// Class /Script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayInteractionStateTreeSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UClass*)                                   ContextActorClass                                           ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UClass*)                                   SmartObjectActorClass                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ContextDataDescs                                            ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UStateTreeTask_PlayContextualAnim_InstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AActor*)                                   PrimaryActor                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AActor*)                                   SecondaryActor                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SecondaryRole                                               ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(AActor*)                                   TertiaryActor                                               ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     TertiaryRole                                                ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     SectionName                                                 ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	CMember(EPlayContextualAnimExecutionMethod)        ExecutionMethod                                             ___ OFFSET(get<T>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    ___ OFFSET(get<bool>, {0x5D, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         WarpTargets                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionContext
/// Size: 0x0068 (0x000000 - 0x000068)
class FGameplayInteractionContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FStateTreeInstanceData)                    StateTreeInstanceData                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedHandle                                               ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FSmartObjectSlotEntranceHandle)            SlotEntranceHandle                                          ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FGameplayInteractionAbortContext)          AbortContext                                                ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(AActor*)                                   ContextActor                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(AActor*)                                   SmartObjectActor                                            ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UGameplayInteractionSmartObjectBehaviorDefinition*) Definition                                         ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionAbortContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayInteractionAbortContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGameplayInteractionAbortReason)           Reason                                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotUserData
/// Size: 0x0007 (0x000001 - 0x000008)
class FGameplayInteractionSlotUserData : public FSmartObjectSlotStateData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FGameplayInteractionStateTreeTask : public FStateTreeTaskBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeCondition
/// Size: 0x0000 (0x000020 - 0x000020)
class FGameplayInteractionStateTreeCondition : public FStateTreeConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayInteractionMatchSlotTagsConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToMatch                                                 ___ OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionSlotTagsMatchCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionMatchSlotTagSource)    Source                                                      ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               MatchType                                                   ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bExactMatch                                                 ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x23, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionQuerySlotTagsConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
/// Size: 0x0058 (0x000020 - 0x000078)
class FGameplayInteractionQuerySlotTagCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EGameplayInteractionMatchSlotTagSource)    Source                                                      ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x28, 72, 0, 0})
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionIsSlotHandleValidConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionIsSlotHandleValidCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionFindSlotTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    ReferenceSlot                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSmartObjectSlotHandle)                    ResultSlot                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionFindSlotTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionSlotReferenceType)     ReferenceType                                               ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTag)                              FindByTag                                                   ___ OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionGetSlotActorTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(AActor*)                                   ResultActor                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionGetSlotActorTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bFailIfNotFound                                             ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionListenSlotEventsTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionListenSlotEventsTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionModifySlotTagTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bTagRemoved                                                 ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionModifySlotTagTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionTaskModify)            Modify                                                      ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(EGameplayInteractionModifyGameplayTagOperation) Operation                                              ___ OFFSET(get<T>, {0x22, 1, 0, 0})
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionSendSlotEventTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FGameplayInteractionSendSlotEventTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              EventTag                                                    ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FInstancedStruct)                          Payload                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EGameplayInteractionTaskTrigger)           Trigger                                                     ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bShouldTriggerOnReselect                                    ___ OFFSET(get<bool>, {0x3A, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionSetSlotEnabledInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bInitialState                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionSetSlotEnabledTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionTaskModify)            Modify                                                      ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bEnableSlot                                                 ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionSyncSlotTagStateInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionSyncSlotTagStateTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              TagToMonitor                                                ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              BreakEventTag                                               ___ OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionSyncSlotTagTransitionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionSyncSlotTagTransitionTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              TransitionFromTag                                           ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              TransitionToTag                                             ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTag)                              TransitionEventTag                                          ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayMontageStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ComputedDuration                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FPlayMontageStateTreeTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FStateTreeTask_FindSlotEntranceLocation_InstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    ReferenceSlot                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                EntryTransform                                              ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FGameplayTagContainer)                     EntranceTags                                                ___ OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
/// Size: 0x0018 (0x000020 - 0x000038)
class FStateTreeTask_FindSlotEntranceLocation : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSmartObjectSlotEntrySelectionMethod)      SelectMethod                                                ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bProjectNavigationLocation                                  ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bTraceGroundLocation                                        ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bCheckTransitionTrajectory                                  ___ OFFSET(get<bool>, {0x23, 1, 0, 0})
	DMember(bool)                                      bCheckEntranceLocationOverlap                               ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bCheckSlotLocationOverlap                                   ___ OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bUseSlotLocationAsFallbackCandidate                         ___ OFFSET(get<bool>, {0x26, 1, 0, 0})
	CMember(ESmartObjectSlotNavigationLocationType)    LocationType                                                ___ OFFSET(get<T>, {0x27, 1, 0, 0})
	CMember(UClass*)                                   ValidationFilter                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation_InstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FStateTreeTask_GetSlotEntranceLocation_InstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSmartObjectSlotEntranceHandle)            SlotEntranceHandle                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     EntranceTags                                                ___ OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeTask_GetSlotEntranceLocation : public FGameplayInteractionStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeTask_PlayContextualAnim : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Enum /Script/GameplayInteractionsModule.EGameplayTaskActuationResult
/// Size: 0x05
enum EGameplayTaskActuationResult : uint8_t
{
	EGameplayTaskActuationResult__None0                                              = 0,
	EGameplayTaskActuationResult__RequestFailed1                                     = 1,
	EGameplayTaskActuationResult__Failed2                                            = 2,
	EGameplayTaskActuationResult__Succeeded3                                         = 3,
	EGameplayTaskActuationResult__EGameplayTaskActuationResult_MAX4                  = 4
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionAbortReason
/// Size: 0x04
enum EGameplayInteractionAbortReason : uint8_t
{
	EGameplayInteractionAbortReason__Unset0                                          = 0,
	EGameplayInteractionAbortReason__ExternalAbort1                                  = 1,
	EGameplayInteractionAbortReason__InternalAbort2                                  = 2,
	EGameplayInteractionAbortReason__EGameplayInteractionAbortReason_MAX3            = 3
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionModifyGameplayTagOperation
/// Size: 0x03
enum EGameplayInteractionModifyGameplayTagOperation : uint8_t
{
	EGameplayInteractionModifyGameplayTagOperation__Add0                             = 0,
	EGameplayInteractionModifyGameplayTagOperation__Remove1                          = 1,
	EGameplayInteractionModifyGameplayTagOperation__EGameplayInteractionModifyGameplayTagOperation_MAX2 = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskModify
/// Size: 0x06
enum EGameplayInteractionTaskModify : uint8_t
{
	EGameplayInteractionTaskModify__OnEnterStateUndoOnExitState0                     = 0,
	EGameplayInteractionTaskModify__OnEnterState1                                    = 1,
	EGameplayInteractionTaskModify__OnExitState2                                     = 2,
	EGameplayInteractionTaskModify__OnExitStateFailed3                               = 3,
	EGameplayInteractionTaskModify__OnExitStateSucceeded4                            = 4,
	EGameplayInteractionTaskModify__EGameplayInteractionTaskModify_MAX5              = 5
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskTrigger
/// Size: 0x05
enum EGameplayInteractionTaskTrigger : uint8_t
{
	EGameplayInteractionTaskTrigger__OnEnterState0                                   = 0,
	EGameplayInteractionTaskTrigger__OnExitState1                                    = 1,
	EGameplayInteractionTaskTrigger__OnExitStateFailed2                              = 2,
	EGameplayInteractionTaskTrigger__OnExitStateSucceeded3                           = 3,
	EGameplayInteractionTaskTrigger__EGameplayInteractionTaskTrigger_MAX4            = 4
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionMatchSlotTagSource
/// Size: 0x03
enum EGameplayInteractionMatchSlotTagSource : uint8_t
{
	EGameplayInteractionMatchSlotTagSource__ActivityTags0                            = 0,
	EGameplayInteractionMatchSlotTagSource__RuntimeTags1                             = 1,
	EGameplayInteractionMatchSlotTagSource__EGameplayInteractionMatchSlotTagSource_MAX2 = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSlotReferenceType
/// Size: 0x03
enum EGameplayInteractionSlotReferenceType : uint8_t
{
	EGameplayInteractionSlotReferenceType__ByActivityTag0                            = 0,
	EGameplayInteractionSlotReferenceType__ByLinkTag1                                = 1,
	EGameplayInteractionSlotReferenceType__EGameplayInteractionSlotReferenceType_MAX2 = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSyncSlotTransitionState
/// Size: 0x04
enum EGameplayInteractionSyncSlotTransitionState : uint8_t
{
	EGameplayInteractionSyncSlotTransitionState__WaitingForFromTag0                  = 0,
	EGameplayInteractionSyncSlotTransitionState__WaitingForToTag1                    = 1,
	EGameplayInteractionSyncSlotTransitionState__Completed2                          = 2,
	EGameplayInteractionSyncSlotTransitionState__EGameplayInteractionSyncSlotTransitionState_MAX3 = 3
};

/// Enum /Script/GameplayInteractionsModule.EPlayContextualAnimExecutionMethod
/// Size: 0x05
enum EPlayContextualAnimExecutionMethod : uint8_t
{
	EPlayContextualAnimExecutionMethod__StartInteraction0                            = 0,
	EPlayContextualAnimExecutionMethod__JoinInteraction1                             = 1,
	EPlayContextualAnimExecutionMethod__TransitionAllActors2                         = 2,
	EPlayContextualAnimExecutionMethod__TransitionSingleActor3                       = 3,
	EPlayContextualAnimExecutionMethod__EPlayContextualAnimExecutionMethod_MAX4      = 4
};
