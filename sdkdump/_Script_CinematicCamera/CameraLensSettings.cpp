#include "..\FUObjectArray.hpp"
#include "CameraLensSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_CinematicCamera::CameraLensSettings::get_MinFocalLength() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraLensSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.CameraLensSettings");
    return result;
}
float& _Script_CinematicCamera::CameraLensSettings::get_MaxFocalLength() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CinematicCamera::CameraLensSettings::get_MinFStop() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_CinematicCamera::CameraLensSettings::get_MaxFStop() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_CinematicCamera::CameraLensSettings::get_MinimumFocusDistance() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_CinematicCamera::CameraLensSettings::get_DiaphragmBladeCount() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
