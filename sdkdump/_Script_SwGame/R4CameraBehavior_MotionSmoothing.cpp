#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_MotionSmoothing.hpp"
bool _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_bScaleWithTransitions() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_TrackingPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_TrackingTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_SwGame::R4CameraBehavior_MotionSmoothing::set_bSmoothInCameraSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_SmoothingTarget() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_bSmoothInCameraSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
bool _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_bSmoothByDistanceInsteadOfTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_MotionSmoothing::set_bSmoothByDistanceInsteadOfTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::R4CameraBehavior_MotionSmoothing::set_bScaleWithTransitions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_SmoothByDistanceUnitsPerSecondEquivalent() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_bSmoothZOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_MotionSmoothing::set_bSmoothZOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_MotionSmoothing::get_MaxDeltaZ() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_MotionSmoothing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_MotionSmoothing");
    return result;
}
