#include "..\FUObjectArray.hpp"
#include "AnimNode_ObserveBone.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_BoneToObserve() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_bRelativeToRefPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x109 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_DisplaySpace() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ObserveBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ObserveBone");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_Rotation() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_AnimGraphRuntime::AnimNode_ObserveBone::set_bRelativeToRefPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x109 + 0);
    *(uint8_t*)((uintptr_t)this + 0x109 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_Translation() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_AnimGraphRuntime::AnimNode_ObserveBone::get_Scale() {
    return (void*)((uintptr_t)this + 0x124);
}
