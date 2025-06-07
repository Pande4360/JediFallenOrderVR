#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_SplineIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Roll() {
    return *(float*)((uintptr_t)this + 0x138);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_StartBone() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_EndBone() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_AnimGraphRuntime::AnimNode_SplineIK::get_bAutoCalculateSpline() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_BoneAxis() {
    return (void*)((uintptr_t)this + 0x120);
}
void _Script_AnimGraphRuntime::AnimNode_SplineIK::set_bAutoCalculateSpline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_PointCount() {
    return *(int32_t*)((uintptr_t)this + 0x124);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0x128);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistStart() {
    return *(float*)((uintptr_t)this + 0x13c);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistEnd() {
    return *(float*)((uintptr_t)this + 0x140);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistBlend() {
    return (void*)((uintptr_t)this + 0x148);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Stretch() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Offset() {
    return *(float*)((uintptr_t)this + 0x184);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_BoneSpline() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_OriginalSplineLength() {
    return *(float*)((uintptr_t)this + 0x258);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_CachedBoneReferences() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_CachedBoneLengths() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_CachedOffsetRotations() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SplineIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SplineIK");
    return result;
}
