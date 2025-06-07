#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CameraAnim.hpp"
#include "InterpGroup.hpp"
void* _Script_Engine::CameraAnim::get_BoundingBox() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_Engine::InterpGroup*& _Script_Engine::CameraAnim::get_CameraInterpGroup() {
    return *(_Script_Engine::InterpGroup**)((uintptr_t)this + 0x28);
}
float& _Script_Engine::CameraAnim::get_AnimLength() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_Engine::CameraAnim::set_bRelativeToInitialFOV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::CameraAnim::get_bRelativeToInitialTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Engine::CameraAnim::set_bRelativeToInitialTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CameraAnim::get_bRelativeToInitialFOV() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 2 != 0;
}
float& _Script_Engine::CameraAnim::get_BaseFOV() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::CameraAnim::get_BasePostProcessSettings() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::CameraAnim::get_BasePostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x570);
}
_Script_CoreUObject::Class* _Script_Engine::CameraAnim::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraAnim");
    return result;
}
