#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Controller.hpp"
#include "Pawn.hpp"
#include "PawnMovementComponent.hpp"
#include "PlayerState.hpp"
void _Script_Engine::Pawn::set_bCanAffectNavigationGeneration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Pawn::set_bUseControllerRotationRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Pawn::IsMoveInputIgnored() {
    return;
}
bool _Script_Engine::Pawn::get_bUseControllerRotationPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::Pawn::set_bUseControllerRotationPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Pawn::get_bUseControllerRotationRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 4 != 0;
}
bool _Script_Engine::Pawn::get_bUseControllerRotationYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
void _Script_Engine::Pawn::set_bUseControllerRotationYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Pawn::get_bCanAffectNavigationGeneration() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 8 != 0;
}
float& _Script_Engine::Pawn::get_BaseEyeHeight() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void* _Script_Engine::Pawn::get_AutoPossessPlayer() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_Engine::PawnMovementComponent* _Script_Engine::Pawn::GetMovementComponent() {
    return;
}
void* _Script_Engine::Pawn::get_AutoPossessAI() {
    return (void*)((uintptr_t)this + 0x371);
}
bool _Script_Engine::Pawn::IsPlayerControlled() {
    return;
}
void* _Script_Engine::Pawn::get_RemoteViewPitch() {
    return (void*)((uintptr_t)this + 0x372);
}
void* _Script_Engine::Pawn::get_AIControllerClass() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Script_Engine::Pawn::AddControllerYawInput(float Val) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetNavAgentLocation() {
    return;
}
_Script_Engine::PlayerState*& _Script_Engine::Pawn::get_PlayerState() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Rotator _Script_Engine::Pawn::GetBaseAimRotation() {
    return;
}
_Script_Engine::Controller* _Script_Engine::Pawn::GetController() {
    return;
}
_Script_Engine::Controller*& _Script_Engine::Pawn::get_LastHitBy() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetPendingMovementInputVector() {
    return;
}
_Script_Engine::Controller*& _Script_Engine::Pawn::get_Controller() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x398);
}
void* _Script_Engine::Pawn::get_ControlInputVector() {
    return (void*)((uintptr_t)this + 0x3a4);
}
void* _Script_Engine::Pawn::get_LastControlInputVector() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_CoreUObject::Class* _Script_Engine::Pawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Pawn");
    return result;
}
void _Script_Engine::Pawn::SpawnDefaultController() {
    return;
}
void _Script_Engine::Pawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
    return;
}
void _Script_Engine::Pawn::ReceiveUnpossessed(_Script_Engine::Controller* OldController) {
    return;
}
void _Script_Engine::Pawn::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Script_Engine::Pawn::PawnMakeNoise(float Loudness, _Script_CoreUObject::Vector NoiseLocation, bool bUseNoiseMakerLocation, _Script_Engine::Actor* NoiseMaker) {
    return;
}
void _Script_Engine::Pawn::OnRep_PlayerState() {
    return;
}
void _Script_Engine::Pawn::OnRep_Controller() {
    return;
}
void _Script_Engine::Pawn::LaunchPawn(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::K2_GetMovementInputVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetLastMovementInputVector() {
    return;
}
_Script_Engine::Actor* _Script_Engine::Pawn::GetMovementBaseActor(_Script_Engine::Pawn* Pawn) {
    return;
}
bool _Script_Engine::Pawn::IsLocallyControlled() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Pawn::GetControlRotation() {
    return;
}
bool _Script_Engine::Pawn::IsControlled() {
    return;
}
void _Script_Engine::Pawn::DetachFromControllerPendingDestroy() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::ConsumeMovementInputVector() {
    return;
}
void _Script_Engine::Pawn::AddMovementInput(_Script_CoreUObject::Vector WorldDirection, float ScaleValue, bool bForce) {
    return;
}
void _Script_Engine::Pawn::AddControllerRollInput(float Val) {
    return;
}
void _Script_Engine::Pawn::AddControllerPitchInput(float Val) {
    return;
}
