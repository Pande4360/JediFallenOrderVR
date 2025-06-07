#include "..\FUObjectArray.hpp"
#include "CameraRig_Rail.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
bool _Script_CinematicCamera::CameraRig_Rail::get_bLockOrientationToRail() {
    return (*(uint8_t*)((uintptr_t)this + 0x364 + 0)) & 1 != 0;
}
float& _Script_CinematicCamera::CameraRig_Rail::get_CurrentPositionOnRail() {
    return *(float*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraRig_Rail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CameraRig_Rail");
    return result;
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Rail::get_TransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void _Script_CinematicCamera::CameraRig_Rail::set_bLockOrientationToRail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x364 + 0);
    *(uint8_t*)((uintptr_t)this + 0x364 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SplineComponent*& _Script_CinematicCamera::CameraRig_Rail::get_RailSplineComponent() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Rail::get_RailCameraMount() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
