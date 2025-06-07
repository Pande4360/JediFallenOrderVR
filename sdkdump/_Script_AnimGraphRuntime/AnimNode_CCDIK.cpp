#include "..\FUObjectArray.hpp"
#include "AnimNode_CCDIK.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorLocation() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorLocationSpace() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_TipBone() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_AnimGraphRuntime::AnimNode_CCDIK::get_bStartFromTail() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_RootBone() {
    return (void*)((uintptr_t)this + 0x178);
}
float& _Script_AnimGraphRuntime::AnimNode_CCDIK::get_Precision() {
    return *(float*)((uintptr_t)this + 0x190);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_CCDIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0x194);
}
void _Script_AnimGraphRuntime::AnimNode_CCDIK::set_bStartFromTail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CCDIK::get_bEnableRotationLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x199 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CCDIK::set_bEnableRotationLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x199 + 0);
    *(uint8_t*)((uintptr_t)this + 0x199 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_RotationLimitPerJoints() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CCDIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CCDIK");
    return result;
}
