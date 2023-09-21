
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0170 (0x000570 - 0x0006E0)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	DMember(int32_t)                                   PlayerIndex                                                 ___ OFFSET(get<int32_t>, {0x568, 4, 0, 0})
	SMember(FName)                                     MotionSource                                                ___ OFFSET(get<T>, {0x56C, 4, 0, 0})
	DMember(bool)                                      bDisableLowLatencyUpdate                                    ___ OFFSET(get<bool>, {0x570, 1, 1, 0})
	CMember(ETrackingStatus)                           CurrentTrackingStatus                                       ___ OFFSET(get<T>, {0x574, 1, 0, 0})
	DMember(bool)                                      bDisplayDeviceModel                                         ___ OFFSET(get<bool>, {0x575, 1, 0, 0})
	SMember(FName)                                     DisplayModelSource                                          ___ OFFSET(get<T>, {0x578, 4, 0, 0})
	CMember(UStaticMesh*)                              CustomDisplayMesh                                           ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               DisplayMeshMaterialOverrides                                ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      DisplayComponent                                            ___ OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (0x000000 - 0x000060)
class FXRHMDData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (0x000000 - 0x000120)
class FXRMotionControllerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EXRVisualType)                             DeviceVisualType                                            ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EControllerHand)                           HandIndex                                                   ___ OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              ___ OFFSET(get<T>, {0x1A, 1, 0, 0})
	SMember(FVector)                                   GripPosition                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     GripRotation                                                ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FVector)                                   AimPosition                                                 ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FQuat)                                     AimRotation                                                 ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	SMember(FVector)                                   PalmPosition                                                ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FQuat)                                     PalmRotation                                                ___ OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TArray<FVector>)                           HandKeyPositions                                            ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FQuat>)                             HandKeyRotations                                            ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<float>)                             HandKeyRadii                                                ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bIsGrasped                                                  ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
class FXRGestureConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bTap                                                        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHold                                                       ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ESpatialInputGestureAxis)                  AxisGesture                                                 ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisX                                            ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisY                                            ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisZ                                            ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0008 (0x000000 - 0x000008)
class FXRDeviceId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SystemName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation0                                            = 0,
	EOrientPositionSelector__Position1                                               = 1,
	EOrientPositionSelector__OrientationAndPosition2                                 = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX3                            = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor0                                                       = 0,
	EHMDTrackingOrigin__Eye1                                                         = 1,
	EHMDTrackingOrigin__Stage2                                                       = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX3                                      = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown0                                                          = 0,
	EHMDWornState__Worn1                                                             = 1,
	EHMDWornState__NotWorn2                                                          = 2,
	EHMDWornState__EHMDWornState_MAX3                                                = 3
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem0                                     = 0,
	EXRDeviceConnectionResult__FeatureNotSupported1                                  = 1,
	EXRDeviceConnectionResult__NoValidViewport2                                      = 2,
	EXRDeviceConnectionResult__MiscFailure3                                          = 3,
	EXRDeviceConnectionResult__Success4                                              = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX5                        = 5
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags0                                                         = 0,
	EXRSystemFlags__IsAR1                                                            = 1,
	EXRSystemFlags__IsTablet2                                                        = 2,
	EXRSystemFlags__IsHeadMounted3                                                   = 4,
	EXRSystemFlags__SupportsHandTracking4                                            = 8,
	EXRSystemFlags__EXRSystemFlags_MAX5                                              = 9
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled0                                                  = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed1                                      = 1,
	ESpectatorScreenMode__Undistorted2                                               = 2,
	ESpectatorScreenMode__Distorted3                                                 = 3,
	ESpectatorScreenMode__SingleEye4                                                 = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill5                                    = 5,
	ESpectatorScreenMode__Texture6                                                   = 6,
	ESpectatorScreenMode__TexturePlusEye7                                            = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX8                                  = 8
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x08
enum EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay0                                        = 0,
	EXRTrackedDeviceType__Controller1                                                = 1,
	EXRTrackedDeviceType__TrackingReference2                                         = 2,
	EXRTrackedDeviceType__Tracker3                                                   = 3,
	EXRTrackedDeviceType__Other4                                                     = 4,
	EXRTrackedDeviceType__Invalid5                                                   = 254,
	EXRTrackedDeviceType__Any6                                                       = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX7                                  = 256
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm0                                                             = 0,
	EHandKeypoint__Wrist1                                                            = 1,
	EHandKeypoint__ThumbMetacarpal2                                                  = 2,
	EHandKeypoint__ThumbProximal3                                                    = 3,
	EHandKeypoint__ThumbDistal4                                                      = 4,
	EHandKeypoint__ThumbTip5                                                         = 5,
	EHandKeypoint__IndexMetacarpal6                                                  = 6,
	EHandKeypoint__IndexProximal7                                                    = 7,
	EHandKeypoint__IndexIntermediate8                                                = 8,
	EHandKeypoint__IndexDistal9                                                      = 9,
	EHandKeypoint__IndexTip10                                                        = 10,
	EHandKeypoint__MiddleMetacarpal11                                                = 11,
	EHandKeypoint__MiddleProximal12                                                  = 12,
	EHandKeypoint__MiddleIntermediate13                                              = 13,
	EHandKeypoint__MiddleDistal14                                                    = 14,
	EHandKeypoint__MiddleTip15                                                       = 15,
	EHandKeypoint__RingMetacarpal16                                                  = 16,
	EHandKeypoint__RingProximal17                                                    = 17,
	EHandKeypoint__RingIntermediate18                                                = 18,
	EHandKeypoint__RingDistal19                                                      = 19,
	EHandKeypoint__RingTip20                                                         = 20,
	EHandKeypoint__LittleMetacarpal21                                                = 21,
	EHandKeypoint__LittleProximal22                                                  = 22,
	EHandKeypoint__LittleIntermediate23                                              = 23,
	EHandKeypoint__LittleDistal24                                                    = 24,
	EHandKeypoint__LittleTip25                                                       = 25,
	EHandKeypoint__EHandKeypoint_MAX26                                               = 26
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum EXRVisualType : uint8_t
{
	EXRVisualType__Controller0                                                       = 0,
	EXRVisualType__Hand1                                                             = 1,
	EXRVisualType__EXRVisualType_MAX2                                                = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked0                                                     = 0,
	ETrackingStatus__InertialOnly1                                                   = 1,
	ETrackingStatus__Tracked2                                                        = 2,
	ETrackingStatus__ETrackingStatus_MAX3                                            = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None0                                                  = 0,
	ESpatialInputGestureAxis__Manipulation1                                          = 1,
	ESpatialInputGestureAxis__Navigation2                                            = 2,
	ESpatialInputGestureAxis__NavigationRails3                                       = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX4                          = 4
};
