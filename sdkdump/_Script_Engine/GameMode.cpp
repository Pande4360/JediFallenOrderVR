#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameMode.hpp"
#include "GameModeBase.hpp"
void* _Script_Engine::GameMode::get_MatchState() {
    return (void*)((uintptr_t)this + 0x400);
}
bool _Script_Engine::GameMode::get_bDelayedStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x408 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::GameMode::get_NumBots() {
    return *(int32_t*)((uintptr_t)this + 0x414);
}
void _Script_Engine::GameMode::set_bDelayedStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x408 + 0);
    *(uint8_t*)((uintptr_t)this + 0x408 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::GameMode::get_NumTravellingPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x41c);
}
int32_t& _Script_Engine::GameMode::get_NumSpectators() {
    return *(int32_t*)((uintptr_t)this + 0x40c);
}
int32_t& _Script_Engine::GameMode::get_NumPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x410);
}
float& _Script_Engine::GameMode::get_MinRespawnDelay() {
    return *(float*)((uintptr_t)this + 0x418);
}
bool _Script_Engine::GameMode::HasMatchEnded() {
    return;
}
void* _Script_Engine::GameMode::get_EngineMessageClass() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_Engine::GameMode::get_InactivePlayerArray() {
    return (void*)((uintptr_t)this + 0x428);
}
float& _Script_Engine::GameMode::get_InactivePlayerStateLifeSpan() {
    return *(float*)((uintptr_t)this + 0x438);
}
int32_t& _Script_Engine::GameMode::get_MaxInactivePlayers() {
    return *(int32_t*)((uintptr_t)this + 0x43c);
}
bool _Script_Engine::GameMode::get_bHandleDedicatedServerReplays() {
    return (*(uint8_t*)((uintptr_t)this + 0x440 + 0)) & 1 != 0;
}
void _Script_Engine::GameMode::set_bHandleDedicatedServerReplays(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x440 + 0);
    *(uint8_t*)((uintptr_t)this + 0x440 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::GameMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameMode");
    return result;
}
void _Script_Engine::GameMode::StartMatch() {
    return;
}
void _Script_Engine::GameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit) {
    return;
}
void _Script_Engine::GameMode::Say(void* Msg) {
    return;
}
void _Script_Engine::GameMode::RestartGame() {
    return;
}
bool _Script_Engine::GameMode::ReadyToEndMatch() {
    return;
}
bool _Script_Engine::GameMode::ReadyToStartMatch() {
    return;
}
void _Script_Engine::GameMode::K2_OnSetMatchState(void* NewState) {
    return;
}
bool _Script_Engine::GameMode::IsMatchInProgress() {
    return;
}
void* _Script_Engine::GameMode::GetMatchState() {
    return;
}
void _Script_Engine::GameMode::EndMatch() {
    return;
}
void _Script_Engine::GameMode::AbortMatch() {
    return;
}
