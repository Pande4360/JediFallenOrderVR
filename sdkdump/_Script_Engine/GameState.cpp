#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameState.hpp"
#include "GameStateBase.hpp"
int32_t& _Script_Engine::GameState::get_ElapsedTime() {
    return *(int32_t*)((uintptr_t)this + 0x3b0);
}
void* _Script_Engine::GameState::get_MatchState() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::GameState::get_PreviousMatchState() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_Engine::GameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameState");
    return result;
}
void _Script_Engine::GameState::OnRep_ElapsedTime() {
    return;
}
void _Script_Engine::GameState::OnRep_MatchState() {
    return;
}
