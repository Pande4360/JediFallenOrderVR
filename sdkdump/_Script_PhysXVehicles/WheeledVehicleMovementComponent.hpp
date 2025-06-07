#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PawnMovementComponent.hpp"
namespace _Script_Engine {
struct Controller;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct NavAvoidanceMask;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct WheeledVehicleMovementComponent : public _Script_Engine::PawnMovementComponent {
    private: char pad_208[0x158]; public:
    bool get_bDeprecatedSpringOffsetMode();
    void set_bDeprecatedSpringOffsetMode(bool value);
    bool get_bReverseAsBrake();
    void set_bReverseAsBrake(bool value);
    bool get_bUseRVOAvoidance();
    void set_bUseRVOAvoidance(bool value);
    bool get_bRawHandbrakeInput();
    void set_bRawHandbrakeInput(bool value);
    bool get_bRawGearUpInput();
    void set_bRawGearUpInput(bool value);
    bool get_bRawGearDownInput();
    void set_bRawGearDownInput(bool value);
    bool get_bWasAvoidanceUpdated();
    void set_bWasAvoidanceUpdated(bool value);
    float& get_Mass();
    void* get_WheelSetups();
    float& get_DragCoefficient();
    float& get_ChassisWidth();
    float& get_ChassisHeight();
    float& get_DragArea();
    float& get_EstimatedMaxEngineSpeed();
    float& get_MaxEngineRPM();
    float& get_DebugDragMagnitude();
    void* get_InertiaTensorScale();
    float& get_MinNormalizedTireLoad();
    float& get_MinNormalizedTireLoadFiltered();
    float& get_MaxNormalizedTireLoad();
    float& get_MaxNormalizedTireLoadFiltered();
    float& get_ThresholdLongitudinalSpeed();
    int32_t& get_LowForwardSpeedSubStepCount();
    int32_t& get_HighForwardSpeedSubStepCount();
    void* get_Wheels();
    float& get_RVOAvoidanceRadius();
    float& get_RVOAvoidanceHeight();
    float& get_AvoidanceConsiderationRadius();
    float& get_RVOSteeringStep();
    float& get_RVOThrottleStep();
    int32_t& get_AvoidanceUID();
    void* get_AvoidanceGroup();
    void* get_GroupsToAvoid();
    void* get_GroupsToIgnore();
    float& get_AvoidanceWeight();
    void* get_PendingLaunchVelocity();
    void* get_ReplicatedState();
    float& get_RawSteeringInput();
    float& get_RawThrottleInput();
    float& get_RawBrakeInput();
    float& get_SteeringInput();
    float& get_ThrottleInput();
    float& get_BrakeInput();
    float& get_HandbrakeInput();
    float& get_IdleBrakeInput();
    float& get_StopThreshold();
    float& get_WrongDirectionThreshold();
    void* get_ThrottleInputRate();
    void* get_BrakeInputRate();
    void* get_HandbrakeInputRate();
    void* get_SteeringInputRate();
    _Script_Engine::Controller*& get_OverrideController();
    static _Script_CoreUObject::Class* static_class();
    void SetUseAutoGears(bool bUseAuto);
    void SetThrottleInput(float Throttle);
    void SetTargetGear(int32_t GearNum, bool bImmediate);
    void SetSteeringInput(float Steering);
    void SetHandbrakeInput(bool bNewHandbrake);
    void SetGroupsToIgnoreMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32_t GroupFlags);
    void SetGroupsToAvoidMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32_t GroupFlags);
    void SetGearUp(bool bNewGearUp);
    void SetGearDown(bool bNewGearDown);
    void SetBrakeInput(float Brake);
    void SetAvoidanceGroupMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32_t GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear);
    bool GetUseAutoGears();
    int32_t GetTargetGear();
    float GetForwardSpeed();
    float GetEngineRotationSpeed();
    float GetEngineMaxRotationSpeed();
    int32_t GetCurrentGear();
}; // Size: 0x360
#pragma pack(pop)
}
