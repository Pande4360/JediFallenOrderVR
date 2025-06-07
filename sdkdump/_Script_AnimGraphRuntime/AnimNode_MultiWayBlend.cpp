#include "..\FUObjectArray.hpp"
#include "AnimNode_MultiWayBlend.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x54);
}
void _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::set_bAdditiveNode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::get_Poses() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::get_DesiredAlphas() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::set_bNormalizeAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::get_bAdditiveNode() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::get_bNormalizeAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_MultiWayBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend");
    return result;
}
