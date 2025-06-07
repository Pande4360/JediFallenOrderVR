#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "Actor.hpp"
#include "Controller.hpp"
#include "GameModeBase.hpp"
#include "GameSession.hpp"
#include "GameStateBase.hpp"
#include "Info.hpp"
#include "Pawn.hpp"
#include "PlayerController.hpp"
#include "PlayerState.hpp"
#include "ServerStatReplicator.hpp"
void* _Script_Engine::GameModeBase::get_OptionsString() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_Engine::GameModeBase::get_GameSessionClass() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_Engine::GameModeBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameModeBase");
    return result;
}
void* _Script_Engine::GameModeBase::get_SpectatorClass() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::GameModeBase::get_GameStateClass() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::GameModeBase::get_PlayerControllerClass() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Script_Engine::GameModeBase::set_bStartPlayersAsSpectators(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::GameModeBase::get_PlayerStateClass() {
    return (void*)((uintptr_t)this + 0x388);
}
void _Script_Engine::GameModeBase::InitializeHUDForPlayer(_Script_Engine::PlayerController* NewPlayer) {
    return;
}
void* _Script_Engine::GameModeBase::get_HUDClass() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::GameModeBase::get_DefaultPawnClass() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_Engine::Pawn* _Script_Engine::GameModeBase::SpawnDefaultPawnAtTransform(_Script_Engine::Controller* NewPlayer, _Script_CoreUObject::Transform& SpawnTransform) {
    return;
}
void* _Script_Engine::GameModeBase::get_ReplaySpectatorPlayerControllerClass() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::GameModeBase::get_ServerStatReplicatorClass() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_Engine::GameModeBase::OnBeginPauseForStreamingLoad() {
    return;
}
void _Script_Engine::GameModeBase::OnEndPauseForStreamingLoad() {
    return;
}
_Script_Engine::GameSession*& _Script_Engine::GameModeBase::get_GameSession() {
    return *(_Script_Engine::GameSession**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::GameStateBase*& _Script_Engine::GameModeBase::get_GameState() {
    return *(_Script_Engine::GameStateBase**)((uintptr_t)this + 0x3c0);
}
_Script_Engine::ServerStatReplicator*& _Script_Engine::GameModeBase::get_ServerStatReplicator() {
    return *(_Script_Engine::ServerStatReplicator**)((uintptr_t)this + 0x3c8);
}
void* _Script_Engine::GameModeBase::get_DefaultPlayerName() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Script_Engine::GameModeBase::get_bUseSeamlessTravel() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 1 != 0;
}
void _Script_Engine::GameModeBase::K2_OnRestartPlayer(_Script_Engine::Controller* NewPlayer) {
    return;
}
void _Script_Engine::GameModeBase::set_bUseSeamlessTravel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GameModeBase::get_bStartPlayersAsSpectators() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 2 != 0;
}
bool _Script_Engine::GameModeBase::get_bPauseable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 4 != 0;
}
void _Script_Engine::GameModeBase::set_bPauseable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::GameModeBase::StartPlay() {
    return;
}
_Script_Engine::Pawn* _Script_Engine::GameModeBase::SpawnDefaultPawnFor(_Script_Engine::Controller* NewPlayer, _Script_Engine::Actor* StartSpot) {
    return;
}
bool _Script_Engine::GameModeBase::ShouldReset(_Script_Engine::Actor* ActorToReset) {
    return;
}
void _Script_Engine::GameModeBase::ReturnToMainMenuHost() {
    return;
}
void _Script_Engine::GameModeBase::RestartPlayerAtTransform(_Script_Engine::Controller* NewPlayer, _Script_CoreUObject::Transform& SpawnTransform) {
    return;
}
void _Script_Engine::GameModeBase::RestartPlayerAtPlayerStart(_Script_Engine::Controller* NewPlayer, _Script_Engine::Actor* StartSpot) {
    return;
}
void _Script_Engine::GameModeBase::K2_OnChangeName(_Script_Engine::Controller* Other, void* NewName, bool bNameChange) {
    return;
}
void _Script_Engine::GameModeBase::RestartPlayer(_Script_Engine::Controller* NewPlayer) {
    return;
}
void _Script_Engine::GameModeBase::ResetLevel() {
    return;
}
bool _Script_Engine::GameModeBase::PlayerCanRestart(_Script_Engine::PlayerController* Player) {
    return;
}
bool _Script_Engine::GameModeBase::MustSpectate(_Script_Engine::PlayerController* NewPlayerController) {
    return;
}
void _Script_Engine::GameModeBase::K2_OnSwapPlayerControllers(_Script_Engine::PlayerController* OldPC, _Script_Engine::PlayerController* NewPC) {
    return;
}
void _Script_Engine::GameModeBase::K2_PostLogin(_Script_Engine::PlayerController* NewPlayer) {
    return;
}
void _Script_Engine::GameModeBase::K2_OnLogout(_Script_Engine::Controller* ExitingController) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameModeBase::K2_FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName) {
    return;
}
void _Script_Engine::GameModeBase::InitStartSpot(_Script_Engine::Actor* StartSpot, _Script_Engine::Controller* NewPlayer) {
    return;
}
bool _Script_Engine::GameModeBase::HasMatchStarted() {
    return;
}
void _Script_Engine::GameModeBase::HandleStartingNewPlayer(_Script_Engine::PlayerController* NewPlayer) {
    return;
}
int32_t _Script_Engine::GameModeBase::GetNumSpectators() {
    return;
}
int32_t _Script_Engine::GameModeBase::GetNumPlayers() {
    return;
}
void* _Script_Engine::GameModeBase::GetDefaultPawnClassForController(_Script_Engine::Controller* InController) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameModeBase::FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameModeBase::ChoosePlayerStart(_Script_Engine::Controller* Player) {
    return;
}
void _Script_Engine::GameModeBase::ChangeName(_Script_Engine::Controller* Controller, void* NewName, bool bNameChange) {
    return;
}
bool _Script_Engine::GameModeBase::CanSpectate(_Script_Engine::PlayerController* Viewer, _Script_Engine::PlayerState* ViewTarget) {
    return;
}
