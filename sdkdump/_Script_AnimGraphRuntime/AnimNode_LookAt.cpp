#include "..\FUObjectArray.hpp"
#include "AnimNode_LookAt.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_BoneToModify() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtBone() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_AnimGraphRuntime::AnimNode_LookAt::set_bUseLookUpAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookatTarget() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtSocket() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtLocation() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtAxis() {
    return (void*)((uintptr_t)this + 0x19c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_LookAt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_LookAt");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_CustomLookAtAxis() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAt_Axis() {
    return (void*)((uintptr_t)this + 0x1ac);
}
bool _Script_AnimGraphRuntime::AnimNode_LookAt::get_bUseLookUpAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x1bc + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookUpAxis() {
    return (void*)((uintptr_t)this + 0x1bd);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_CustomLookUpAxis() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookUp_Axis() {
    return (void*)((uintptr_t)this + 0x1cc);
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtClamp() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationType() {
    return (void*)((uintptr_t)this + 0x1e0);
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationTriggerThreashold() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
