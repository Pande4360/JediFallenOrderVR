#include "..\FUObjectArray.hpp"
#include "AnimNode_AimOffsetLookAt.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SocketAxis() {
    return (void*)((uintptr_t)this + 0x168);
}
void _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::set_bIsLODEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x144 + 0);
    *(uint8_t*)((uintptr_t)this + 0x144 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_BasePose() {
    return (void*)((uintptr_t)this + 0x130);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
bool _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_bIsLODEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x144 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SourceSocketName() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_LookAtLocation() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_PivotSocketName() {
    return (void*)((uintptr_t)this + 0x160);
}
float& _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x174);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SocketBoneReference() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_SocketLocalTransform() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_PivotSocketBoneReference() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::get_PivotSocketLocalTransform() {
    return (void*)((uintptr_t)this + 0x1e0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_AimOffsetLookAt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt");
    return result;
}
