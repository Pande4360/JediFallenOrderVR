#include "..\FUObjectArray.hpp"
#include "CameraFilmbackSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_CinematicCamera::CameraFilmbackSettings::get_SensorHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CinematicCamera::CameraFilmbackSettings::get_SensorWidth() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CinematicCamera::CameraFilmbackSettings::get_SensorAspectRatio() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraFilmbackSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.CameraFilmbackSettings");
    return result;
}
