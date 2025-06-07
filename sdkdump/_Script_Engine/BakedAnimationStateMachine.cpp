#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BakedAnimationStateMachine.hpp"
void* _Script_Engine::BakedAnimationStateMachine::get_MachineName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::BakedAnimationStateMachine::get_InitialState() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BakedAnimationStateMachine::get_States() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BakedAnimationStateMachine::get_Transitions() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::BakedAnimationStateMachine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BakedAnimationStateMachine");
    return result;
}
