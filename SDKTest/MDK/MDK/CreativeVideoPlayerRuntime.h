
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
/// Size: 0x0080 (0x000B28 - 0x000BA8)
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
	CMember(UClass*)                                   NoCollisionGameplayEffectClass                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   NoDamageGameplayEffectClass                                 ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(TArray<UClass*>)                           AnimationStateGameplayEffectClasses                         ___ OFFSET(get<T>, {0xB38, 16, 0, 0})
	CMember(UClass*)                                   FullscreenWidgetClass                                       ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     FullscreenEffects                                           ___ OFFSET(get<T>, {0xB50, 1, 0, 0})
	DMember(bool)                                      bPromptToConfirmFullscreen                                  ___ OFFSET(get<bool>, {0xB51, 1, 0, 0})
	DMember(bool)                                      bIsDismissable                                              ___ OFFSET(get<bool>, {0xB52, 1, 0, 0})
	CMember(UFortInputComponent*)                      OverrideMovementInputComponent                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(UFortInputComponent*)                      SelectFullscreenModeInputComponent                          ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TArray<FActiveGameplayEffectHandle>)       ActiveGameplayEffects                                       ___ OFFSET(get<T>, {0xB68, 16, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     RequestedFullscreenEffects                                  ___ OFFSET(get<T>, {0xB78, 1, 0, 0})
	CMember(UUserWidget*)                              VideoPlayerWidget                                           ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UMediaTexture*)                            ExtMediaTextureCached                                       ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(USoundSourceBus*)                          ExtSourceBusCached                                          ___ OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     ExtMediaSoundComponentCached                                ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
	DMember(bool)                                      bExtComponentsSet                                           ___ OFFSET(get<bool>, {0xBA0, 1, 0, 0})
	DMember(bool)                                      bActivatedFullscreen                                        ___ OFFSET(get<bool>, {0xBA1, 1, 0, 0})
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnNotifyFullscreenChange                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FCreativeVideoPlayerFullscreenOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(ECreativeVideoPlayerFullscreenEffects)     GameplayEffects                                             ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPromptFirst                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Enum /Script/CreativeVideoPlayerRuntime.ECreativeVideoPlayerFullscreenEffects
/// Size: 0x05
enum ECreativeVideoPlayerFullscreenEffects : uint8_t
{
	ECreativeVideoPlayerFullscreenEffects__None0                                     = 0,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionOnly1                          = 1,
	ECreativeVideoPlayerFullscreenEffects__NoDamageOnly2                             = 2,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionAndNoDamage3                   = 3,
	ECreativeVideoPlayerFullscreenEffects__ECreativeVideoPlayerFullscreenEffects_MAX4 = 4
};
