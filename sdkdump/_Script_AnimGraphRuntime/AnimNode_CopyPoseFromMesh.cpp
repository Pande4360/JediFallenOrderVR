#include "..\FUObjectArray.hpp"
#include "AnimNode_CopyPoseFromMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bCopyCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_SourceMeshComponent() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bUseAttachedParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bCopyCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bUseEditableBoneTransformsIfAvailable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bUseAttachedParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::set_bDoNotUseCachedTransformsWhenInAnimationCustomMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bUseEditableBoneTransformsIfAvailable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::get_bDoNotUseCachedTransformsWhenInAnimationCustomMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CopyPoseFromMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh");
    return result;
}
