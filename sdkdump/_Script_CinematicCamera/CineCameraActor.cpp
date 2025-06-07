#include "..\FUObjectArray.hpp"
#include "CineCameraActor.hpp"
#include "CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraActor.hpp"
void* _Script_CinematicCamera::CineCameraActor::get_LookatTrackingSettings() {
    return (void*)((uintptr_t)this + 0x8a0);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CineCameraActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CineCameraActor");
    return result;
}
_Script_CinematicCamera::CineCameraComponent* _Script_CinematicCamera::CineCameraActor::GetCineCameraComponent() {
    return;
}
void _Script_CinematicCamera::CineCameraActor::BlendOutOfCinematicCamera() {
    return;
}
