#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationState.hpp"
#include "AnimationStateBase.hpp"
void* _Script_Engine::AnimationState::get_Transitions() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AnimationState::get_StateRootNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::AnimationState::get_StartNotify() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::AnimationState::get_EndNotify() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::AnimationState::get_FullyBlendedNotify() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationState");
    return result;
}
