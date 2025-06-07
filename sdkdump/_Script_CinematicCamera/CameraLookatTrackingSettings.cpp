#include "..\FUObjectArray.hpp"
#include "CameraLookatTrackingSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
bool _Script_CinematicCamera::CameraLookatTrackingSettings::get_bEnableLookAtTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_CinematicCamera::CameraLookatTrackingSettings::get_bDrawDebugLookAtTrackingPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_CinematicCamera::CameraLookatTrackingSettings::set_bEnableLookAtTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_CinematicCamera::CameraLookatTrackingSettings::set_bDrawDebugLookAtTrackingPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_CinematicCamera::CameraLookatTrackingSettings::get_RelativeOffset() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_CinematicCamera::CameraLookatTrackingSettings::get_LookAtTrackingInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_Engine::Actor*& _Script_CinematicCamera::CameraLookatTrackingSettings::get_ActorToTrack() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x18);
}
bool _Script_CinematicCamera::CameraLookatTrackingSettings::get_bAllowRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_CinematicCamera::CameraLookatTrackingSettings::set_bAllowRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraLookatTrackingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.CameraLookatTrackingSettings");
    return result;
}
