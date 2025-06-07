#include "..\FUObjectArray.hpp"
#include "CameraTrackingFocusSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_CinematicCamera::CameraTrackingFocusSettings::get_ActorToTrack() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraTrackingFocusSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.CameraTrackingFocusSettings");
    return result;
}
void _Script_CinematicCamera::CameraTrackingFocusSettings::set_bDrawDebugTrackingFocusPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CinematicCamera::CameraTrackingFocusSettings::get_RelativeOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_CinematicCamera::CameraTrackingFocusSettings::get_bDrawDebugTrackingFocusPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
