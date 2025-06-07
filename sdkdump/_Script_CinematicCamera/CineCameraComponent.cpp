#include "..\FUObjectArray.hpp"
#include "CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackSettings() {
    return (void*)((uintptr_t)this + 0x860);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocalLength() {
    return *(float*)((uintptr_t)this + 0x8e0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_LensSettings() {
    return (void*)((uintptr_t)this + 0x86c);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FocusSettings() {
    return (void*)((uintptr_t)this + 0x888);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentAperture() {
    return *(float*)((uintptr_t)this + 0x8e4);
}
void* _Script_CinematicCamera::CineCameraComponent::get_BlendInParameters() {
    return (void*)((uintptr_t)this + 0x8c0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_BlendOutParameters() {
    return (void*)((uintptr_t)this + 0x8d0);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocusDistance() {
    return *(float*)((uintptr_t)this + 0x8e8);
}
bool _Script_CinematicCamera::CineCameraComponent::get_bIsCameraBlendOutTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x8ec + 0)) & 1 != 0;
}
void _Script_CinematicCamera::CineCameraComponent::set_bIsCameraBlendOutTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x8ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackPresets() {
    return (void*)((uintptr_t)this + 0x8f8);
}
void* _Script_CinematicCamera::CineCameraComponent::get_LensPresets() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultFilmbackPresetName() {
    return (void*)((uintptr_t)this + 0x918);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultLensPresetName() {
    return (void*)((uintptr_t)this + 0x928);
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFocalLength() {
    return *(float*)((uintptr_t)this + 0x938);
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFStop() {
    return *(float*)((uintptr_t)this + 0x93c);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CineCameraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CineCameraComponent");
    return result;
}
void _Script_CinematicCamera::CineCameraComponent::SetLensPresetByName(void* InPresetName) {
    return;
}
void _Script_CinematicCamera::CineCameraComponent::SetFilmbackPresetByName(void* InPresetName) {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetVerticalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetLensPresetName() {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetHorizontalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetFilmbackPresetName() {
    return;
}
