#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BakedAnimationState.hpp"
void* _Script_Engine::BakedAnimationState::get_StateName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::BakedAnimationState::set_bIsAConduit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BakedAnimationState::get_Transitions() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::BakedAnimationState::get_StateRootNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::BakedAnimationState::get_EndNotify() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::BakedAnimationState::get_StartNotify() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::BakedAnimationState::get_FullyBlendedNotify() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
bool _Script_Engine::BakedAnimationState::get_bIsAConduit() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::BakedAnimationState::get_EntryRuleNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::BakedAnimationState::get_PlayerNodeIndices() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::BakedAnimationState::get_bAlwaysResetOnEntry() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::BakedAnimationState::set_bAlwaysResetOnEntry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BakedAnimationState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BakedAnimationState");
    return result;
}
