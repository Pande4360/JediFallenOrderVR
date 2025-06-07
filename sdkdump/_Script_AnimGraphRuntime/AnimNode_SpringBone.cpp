#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_SpringBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bLimitDisplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringBone() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bLimitDisplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bNoZSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateY() {
    return (*(uint8_t*)((uintptr_t)this + 0x11e + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringStiffness() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_MaxDisplacement() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringDamping() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_ErrorResetThresh() {
    return *(float*)((uintptr_t)this + 0x118);
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bNoZSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateX() {
    return (*(uint8_t*)((uintptr_t)this + 0x11d + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11d + 0);
    *(uint8_t*)((uintptr_t)this + 0x11d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11e + 0);
    *(uint8_t*)((uintptr_t)this + 0x11e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x11f + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11f + 0);
    *(uint8_t*)((uintptr_t)this + 0x11f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateX() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateY() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x122 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x122 + 0);
    *(uint8_t*)((uintptr_t)this + 0x122 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SpringBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SpringBone");
    return result;
}
