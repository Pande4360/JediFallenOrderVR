#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendBoneByChannel.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_A() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_InternalBlendAlpha() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_B() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_BoneDefinitions() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_bBIsRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_TransformsSpace() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x54);
}
void _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::set_bBIsRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::get_ValidBoneEntries() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendBoneByChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel");
    return result;
}
