#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "SwWallRunComponent.hpp"
#include "SwWallRunSettings.hpp"
void _Script_SwGame::SwWallRunComponent::SetWallRunState(void* State) {
    return;
}
_Script_SwGame::SwWallRunSettings*& _Script_SwGame::SwWallRunComponent::get_Settings() {
    return *(_Script_SwGame::SwWallRunSettings**)((uintptr_t)this + 0x180);
}
void _Script_SwGame::SwWallRunComponent::OnWallRunEnd(void* Reason) {
    return;
}
void _Script_SwGame::SwWallRunComponent::OnWallRunFound(void* wallOrientation) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwWallRunComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWallRunComponent");
    return result;
}
void _Script_SwGame::SwWallRunComponent::OnWallRunLost(void* Reason) {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnAnyNavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Script_SwGame::SwWallRunComponent::OnWallRunExpiredEnd() {
    return;
}
void _Script_SwGame::SwWallRunComponent::OnWallRunExpiredBegin() {
    return;
}
bool _Script_SwGame::SwWallRunComponent::IsWallRunning() {
    return;
}
bool _Script_SwGame::SwWallRunComponent::IsWallRunJumping() {
    return;
}
bool _Script_SwGame::SwWallRunComponent::IsWallRunFalling() {
    return;
}
bool _Script_SwGame::SwWallRunComponent::IsWallRunAllowed() {
    return;
}
bool _Script_SwGame::SwWallRunComponent::HasWallRunExpired() {
    return;
}
void* _Script_SwGame::SwWallRunComponent::GetWallRunState() {
    return;
}
void* _Script_SwGame::SwWallRunComponent::GetWallRunOrientation() {
    return;
}
float _Script_SwGame::SwWallRunComponent::GetWallRunExpiredElapsedTime() {
    return;
}
float _Script_SwGame::SwWallRunComponent::GetWallRunElapsedTime() {
    return;
}
float _Script_SwGame::SwWallRunComponent::GetWallRunAbsoluateElapsedTime() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::SwWallRunComponent::GetWallNormal() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::SwWallRunComponent::GetViewDirection() {
    return;
}
void _Script_SwGame::SwWallRunComponent::EndWallRun(void* Reason) {
    return;
}
void _Script_SwGame::SwWallRunComponent::BeginWallRun() {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnWallTopologyChange(void* prevMode, void* newMode, float Proximity) {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnGroundTopologyChange(void* prevMode, void* newMode, float Proximity) {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnForceMeterBarEmptied(void* ForceAbility, float timeUntilRegen) {
    return;
}
void _Script_SwGame::SwWallRunComponent::_OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* myCharacter) {
    return;
}
