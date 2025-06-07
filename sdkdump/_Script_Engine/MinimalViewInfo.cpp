#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MinimalViewInfo.hpp"
bool _Script_Engine::MinimalViewInfo::get_bConstrainAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::MinimalViewInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MinimalViewInfo::get_Rotation() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::MinimalViewInfo::get_OrthoFarClipPlane() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::MinimalViewInfo::get_FOV() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::MinimalViewInfo::get_DesiredFOV() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::MinimalViewInfo::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::MinimalViewInfo::get_OrthoWidth() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::MinimalViewInfo::get_OrthoNearClipPlane() {
    return *(float*)((uintptr_t)this + 0x24);
}
void _Script_Engine::MinimalViewInfo::set_bConstrainAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MinimalViewInfo::get_bUseFieldOfViewForLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_Engine::MinimalViewInfo::set_bUseFieldOfViewForLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::MinimalViewInfo::get_ProjectionMode() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::MinimalViewInfo::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::MinimalViewInfo::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MinimalViewInfo::get_OffCenterProjectionOffset() {
    return (void*)((uintptr_t)this + 0x550);
}
_Script_CoreUObject::Class* _Script_Engine::MinimalViewInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MinimalViewInfo");
    return result;
}
