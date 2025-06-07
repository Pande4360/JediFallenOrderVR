#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "SwSuperJumpComponent.hpp"
#include "SwSuperJumpSettings.hpp"
_Script_SwGame::SwSuperJumpSettings*& _Script_SwGame::SwSuperJumpComponent::get_Settings() {
    return *(_Script_SwGame::SwSuperJumpSettings**)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSuperJumpComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSuperJumpComponent");
    return result;
}
void _Script_SwGame::SwSuperJumpComponent::OnJumpEnd(void* State) {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::OnChargeEnd(void* State, void* Reason) {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::OnJumpAscentCompleted() {
    return;
}
bool _Script_SwGame::SwSuperJumpComponent::IsJumpDescending() {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::OnChargeCompleted() {
    return;
}
bool _Script_SwGame::SwSuperJumpComponent::IsJumping() {
    return;
}
bool _Script_SwGame::SwSuperJumpComponent::IsJumpAscending() {
    return;
}
bool _Script_SwGame::SwSuperJumpComponent::IsCharging() {
    return;
}
bool _Script_SwGame::SwSuperJumpComponent::IsChargeComplete() {
    return;
}
void* _Script_SwGame::SwSuperJumpComponent::GetState() {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::EndJump() {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::EndCharge(void* Reason) {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::BeginJump() {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::BeginCharge() {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::_OnTopologyChange(void* prevMode, void* newMode, float Proximity) {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::_OnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwSuperJumpComponent::_OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter) {
    return;
}
