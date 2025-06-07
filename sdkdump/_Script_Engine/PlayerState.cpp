#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "Pawn.hpp"
#include "PlayerState.hpp"
void _Script_Engine::PlayerState::set_bShouldUpdateReplicatedPing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PlayerState::get_Score() {
    return *(float*)((uintptr_t)this + 0x360);
}
void _Script_Engine::PlayerState::set_bIsSpectator(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::PlayerState::get_PlayerId() {
    return *(int32_t*)((uintptr_t)this + 0x388);
}
void* _Script_Engine::PlayerState::get_PlayerName() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_Engine::PlayerState::get_Ping() {
    return (void*)((uintptr_t)this + 0x38c);
}
bool _Script_Engine::PlayerState::get_bShouldUpdateReplicatedPing() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 1 != 0;
}
bool _Script_Engine::PlayerState::get_bIsSpectator() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 2 != 0;
}
bool _Script_Engine::PlayerState::get_bOnlySpectator() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 4 != 0;
}
void _Script_Engine::PlayerState::set_bOnlySpectator(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::PlayerState::get_PlayerNamePrivate() {
    return (void*)((uintptr_t)this + 0x408);
}
bool _Script_Engine::PlayerState::get_bIsABot() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 8 != 0;
}
void _Script_Engine::PlayerState::set_bIsABot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PlayerState::get_bIsInactive() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 32 != 0;
}
void _Script_Engine::PlayerState::set_bIsInactive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PlayerState::get_bFromPreviousLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x38e + 0)) & 64 != 0;
}
void _Script_Engine::PlayerState::set_bFromPreviousLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38e + 0);
    *(uint8_t*)((uintptr_t)this + 0x38e + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
int32_t& _Script_Engine::PlayerState::get_StartTime() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::PlayerState::get_EngineMessageClass() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_Engine::PlayerState::get_SavedNetworkAddress() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::PlayerState::get_UniqueId() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_Engine::Pawn*& _Script_Engine::PlayerState::get_PawnPrivate() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x3e8);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerState");
    return result;
}
void _Script_Engine::PlayerState::ReceiveOverrideWith(_Script_Engine::PlayerState* OldPlayerState) {
    return;
}
void _Script_Engine::PlayerState::ReceiveCopyProperties(_Script_Engine::PlayerState* NewPlayerState) {
    return;
}
void _Script_Engine::PlayerState::OnRep_UniqueId() {
    return;
}
void _Script_Engine::PlayerState::OnRep_Score() {
    return;
}
void _Script_Engine::PlayerState::OnRep_PlayerName() {
    return;
}
void _Script_Engine::PlayerState::OnRep_PlayerId() {
    return;
}
void _Script_Engine::PlayerState::OnRep_bIsInactive() {
    return;
}
void* _Script_Engine::PlayerState::GetPlayerName() {
    return;
}
