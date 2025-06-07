#include "..\FUObjectArray.hpp"
#include "AnimNode_ModifyBone.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_ScaleMode() {
    return (void*)((uintptr_t)this + 0x12e);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_BoneToModify() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Rotation() {
    return (void*)((uintptr_t)this + 0x114);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Translation() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_Scale() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_TranslationMode() {
    return (void*)((uintptr_t)this + 0x12c);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_RotationMode() {
    return (void*)((uintptr_t)this + 0x12d);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_TranslationSpace() {
    return (void*)((uintptr_t)this + 0x12f);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_RotationSpace() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_AnimGraphRuntime::AnimNode_ModifyBone::get_ScaleSpace() {
    return (void*)((uintptr_t)this + 0x131);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ModifyBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone");
    return result;
}
