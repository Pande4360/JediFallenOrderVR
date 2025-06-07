#include "..\FUObjectArray.hpp"
#include "AkSurfaceReflectorSetComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Script_AkAudio::AkSurfaceReflectorSetComponent::set_bEnableDiffractionOnBoundaryEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AkAudio::AkSurfaceReflectorSetComponent::get_bEnableSurfaceReflectors() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkSurfaceReflectorSetComponent::set_bEnableSurfaceReflectors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AkAudio::AkSurfaceReflectorSetComponent::set_bEnableDiffraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkSurfaceReflectorSetComponent::get_AcousticPolys() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Script_AkAudio::AkSurfaceReflectorSetComponent::get_bEnableDiffraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSurfaceReflectorSetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSurfaceReflectorSetComponent");
    return result;
}
bool _Script_AkAudio::AkSurfaceReflectorSetComponent::get_bEnableDiffractionOnBoundaryEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 2 != 0;
}
void _Script_AkAudio::AkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
    return;
}
void _Script_AkAudio::AkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
    return;
}
void _Script_AkAudio::AkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
    return;
}
