#include "..\FUObjectArray.hpp"
#include "PoseDriverTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::PoseDriverTarget::get_CustomCurve() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimGraphRuntime::PoseDriverTarget::get_BoneTransforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::PoseDriverTarget::get_TargetRotation() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AnimGraphRuntime::PoseDriverTarget::get_TargetScale() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_AnimGraphRuntime::PoseDriverTarget::get_DrivenName() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_AnimGraphRuntime::PoseDriverTarget::get_bApplyCustomCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::PoseDriverTarget::set_bApplyCustomCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::PoseDriverTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.PoseDriverTarget");
    return result;
}
