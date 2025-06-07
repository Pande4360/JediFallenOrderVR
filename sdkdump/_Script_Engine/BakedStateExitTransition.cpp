#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BakedStateExitTransition.hpp"
int32_t& _Script_Engine::BakedStateExitTransition::get_CanTakeDelegateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void _Script_Engine::BakedStateExitTransition::set_bAutomaticRemainingTimeRule(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BakedStateExitTransition::get_bAutomaticRemainingTimeRule() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
int32_t& _Script_Engine::BakedStateExitTransition::get_CustomResultNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::BakedStateExitTransition::get_PoseEvaluatorLinks() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::BakedStateExitTransition::set_bDesiredTransitionReturnValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::BakedStateExitTransition::get_TransitionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::BakedStateExitTransition::get_bDesiredTransitionReturnValue() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::BakedStateExitTransition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BakedStateExitTransition");
    return result;
}
