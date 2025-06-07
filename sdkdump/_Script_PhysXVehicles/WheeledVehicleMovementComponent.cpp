#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\NavAvoidanceMask.hpp"
#include "..\_Script_Engine\PawnMovementComponent.hpp"
#include "WheeledVehicleMovementComponent.hpp"
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetEngineRotationSpeed() {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bUseRVOAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bUseRVOAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 4 != 0;
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bDeprecatedSpringOffsetMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bDeprecatedSpringOffsetMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bReverseAsBrake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceWeight() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bReverseAsBrake() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 2 != 0;
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawHandbrakeInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 8 != 0;
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ReplicatedState() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawHandbrakeInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawGearUpInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 16 != 0;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThresholdLongitudinalSpeed() {
    return *(float*)((uintptr_t)this + 0x268);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawGearUpInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawGearDownInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 32 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawGearDownInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HandbrakeInput() {
    return *(float*)((uintptr_t)this + 0x304);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bWasAvoidanceUpdated() {
    return (*(uint8_t*)((uintptr_t)this + 0x214 + 0)) & 1 != 0;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_StopThreshold() {
    return *(float*)((uintptr_t)this + 0x30c);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bWasAvoidanceUpdated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x214 + 0);
    *(uint8_t*)((uintptr_t)this + 0x214 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_Mass() {
    return *(float*)((uintptr_t)this + 0x218);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_WheelSetups() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawSteeringInput() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DragCoefficient() {
    return *(float*)((uintptr_t)this + 0x230);
}
_Script_Engine::Controller*& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_OverrideController() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x358);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ChassisWidth() {
    return *(float*)((uintptr_t)this + 0x234);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ChassisHeight() {
    return *(float*)((uintptr_t)this + 0x238);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
    return;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DragArea() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate) {
    return;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_EstimatedMaxEngineSpeed() {
    return *(float*)((uintptr_t)this + 0x240);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_InertiaTensorScale() {
    return (void*)((uintptr_t)this + 0x24c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxEngineRPM() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOAvoidanceRadius() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DebugDragMagnitude() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MinNormalizedTireLoad() {
    return *(float*)((uintptr_t)this + 0x258);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_BrakeInputRate() {
    return (void*)((uintptr_t)this + 0x31c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MinNormalizedTireLoadFiltered() {
    return *(float*)((uintptr_t)this + 0x25c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxNormalizedTireLoad() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxNormalizedTireLoadFiltered() {
    return *(float*)((uintptr_t)this + 0x264);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_LowForwardSpeedSubStepCount() {
    return *(int32_t*)((uintptr_t)this + 0x26c);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HandbrakeInputRate() {
    return (void*)((uintptr_t)this + 0x324);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HighForwardSpeedSubStepCount() {
    return *(int32_t*)((uintptr_t)this + 0x270);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_Wheels() {
    return (void*)((uintptr_t)this + 0x278);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOAvoidanceHeight() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceConsiderationRadius() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOThrottleStep() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOSteeringStep() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceUID() {
    return *(int32_t*)((uintptr_t)this + 0x2b4);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceGroup() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_GroupsToAvoid() {
    return (void*)((uintptr_t)this + 0x2bc);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_GroupsToIgnore() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_PendingLaunchVelocity() {
    return (void*)((uintptr_t)this + 0x2c8);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawThrottleInput() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawBrakeInput() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_SteeringInputRate() {
    return (void*)((uintptr_t)this + 0x32c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_SteeringInput() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThrottleInput() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_BrakeInput() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_IdleBrakeInput() {
    return *(float*)((uintptr_t)this + 0x308);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_WrongDirectionThreshold() {
    return *(float*)((uintptr_t)this + 0x310);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThrottleInputRate() {
    return (void*)((uintptr_t)this + 0x314);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheeledVehicleMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.WheeledVehicleMovementComponent");
    return result;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToIgnoreMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToAvoidMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetBrakeInput(float Brake) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceGroupMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
    return;
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetUseAutoGears() {
    return;
}
int32_t _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetTargetGear() {
    return;
}
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetForwardSpeed() {
    return;
}
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() {
    return;
}
int32_t _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetCurrentGear() {
    return;
}
