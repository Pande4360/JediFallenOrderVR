#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationTransitionRule.hpp"
void* _Script_Engine::AnimationTransitionRule::get_RuleToExecute() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::AnimationTransitionRule::get_TransitionReturnVal() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationTransitionRule::set_TransitionReturnVal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::AnimationTransitionRule::get_TransitionIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationTransitionRule::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationTransitionRule");
    return result;
}
