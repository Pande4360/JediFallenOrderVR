#include "..\FUObjectArray.hpp"
#include "AnimNode_ApplyAdditive.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
float& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_base() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x64);
}
bool _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive");
    return result;
}
