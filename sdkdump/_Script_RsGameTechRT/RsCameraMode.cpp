#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsCameraMode.hpp"
void _Script_RsGameTechRT::RsCameraMode::set_bBaseRelative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsCameraMode::get_ModeName() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsCameraMode::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsCameraMode::get_FocusTraceSize() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_RsGameTechRT::RsCameraMode::get_bBaseRelative() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsCameraMode::get_bApplyCameraShakes() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraMode::set_bApplyCameraShakes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCameraMode::get_bApplyTimeDeltaWhileGamePaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraMode::set_bApplyTimeDeltaWhileGamePaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCameraMode::get_bResetRollOnBegin() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraMode::set_bResetRollOnBegin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCameraMode::get_bResetRollOnEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraMode::set_bResetRollOnEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCameraMode::get_bAllowCameraObstructionCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraMode::set_bAllowCameraObstructionCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsCameraMode::get_ViewTargetRotationUpdateMethod() {
    return (void*)((uintptr_t)this + 0x3e);
}
void* _Script_RsGameTechRT::RsCameraMode::get_MotionParms() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsCameraMode::get_Aliases() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsCameraMode::get_Behaviors() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraMode");
    return result;
}
