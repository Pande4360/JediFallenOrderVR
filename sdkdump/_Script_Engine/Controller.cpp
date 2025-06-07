#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Character.hpp"
#include "Controller.hpp"
#include "DamageType.hpp"
#include "Pawn.hpp"
#include "PlayerController.hpp"
#include "PlayerState.hpp"
#include "SceneComponent.hpp"
_Script_Engine::PlayerState*& _Script_Engine::Controller::get_PlayerState() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x368);
}
void* _Script_Engine::Controller::get_OnInstigatedAnyDamage() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::Pawn*& _Script_Engine::Controller::get_Pawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x390);
}
void _Script_Engine::Controller::StopMovement() {
    return;
}
void* _Script_Engine::Controller::get_StateName() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Script_Engine::Controller::get_bAttachToPawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 1 != 0;
}
_Script_Engine::Character*& _Script_Engine::Controller::get_Character() {
    return *(_Script_Engine::Character**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::SceneComponent*& _Script_Engine::Controller::get_TransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a8);
}
void _Script_Engine::Controller::ClientSetLocation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation) {
    return;
}
void* _Script_Engine::Controller::get_ControlRotation() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Script_Engine::Controller::set_bAttachToPawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Controller::get_bIsPlayerController() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 2 != 0;
}
void _Script_Engine::Controller::set_bIsPlayerController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Controller::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Controller");
    return result;
}
bool _Script_Engine::Controller::IsLocalPlayerController() {
    return;
}
void _Script_Engine::Controller::UnPossess() {
    return;
}
void _Script_Engine::Controller::SetInitialLocationAndRotation(_Script_CoreUObject::Vector& NewLocation, _Script_CoreUObject::Rotator& NewRotation) {
    return;
}
void _Script_Engine::Controller::SetIgnoreMoveInput(bool bNewMoveInput) {
    return;
}
void _Script_Engine::Controller::SetIgnoreLookInput(bool bNewLookInput) {
    return;
}
void _Script_Engine::Controller::SetControlRotation(_Script_CoreUObject::Rotator& NewRotation) {
    return;
}
void _Script_Engine::Controller::ResetIgnoreMoveInput() {
    return;
}
void _Script_Engine::Controller::ResetIgnoreLookInput() {
    return;
}
void _Script_Engine::Controller::ResetIgnoreInputFlags() {
    return;
}
void _Script_Engine::Controller::ReceiveInstigatedAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_Engine::Controller::Possess(_Script_Engine::Pawn* InPawn) {
    return;
}
void _Script_Engine::Controller::OnRep_PlayerState() {
    return;
}
void _Script_Engine::Controller::OnRep_Pawn() {
    return;
}
bool _Script_Engine::Controller::LineOfSightTo(_Script_Engine::Actor* Other, _Script_CoreUObject::Vector ViewPoint, bool bAlternateChecks) {
    return;
}
_Script_Engine::Pawn* _Script_Engine::Controller::K2_GetPawn() {
    return;
}
bool _Script_Engine::Controller::IsPlayerController() {
    return;
}
bool _Script_Engine::Controller::IsMoveInputIgnored() {
    return;
}
bool _Script_Engine::Controller::IsLookInputIgnored() {
    return;
}
bool _Script_Engine::Controller::IsLocalController() {
    return;
}
_Script_Engine::Actor* _Script_Engine::Controller::GetViewTarget() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Controller::GetDesiredRotation() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Controller::GetControlRotation() {
    return;
}
void _Script_Engine::Controller::ClientSetRotation(_Script_CoreUObject::Rotator NewRotation, bool bResetCamera) {
    return;
}
_Script_Engine::PlayerController* _Script_Engine::Controller::CastToPlayerController() {
    return;
}
