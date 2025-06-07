#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsBalanceBeamComponent.hpp"
#include "RsBalanceBeamSettingsDefinition.hpp"
#include "RsCharacterNavigationComponent.hpp"
void _Script_RsGameTechRT::RsBalanceBeamComponent::BeginOnMonkeyBeam(void* PreviousState) {
    return;
}
_Script_RsGameTechRT::RsBalanceBeamSettingsDefinition*& _Script_RsGameTechRT::RsBalanceBeamComponent::get_BalanceBeamDefinition() {
    return *(_Script_RsGameTechRT::RsBalanceBeamSettingsDefinition**)((uintptr_t)this + 0x190);
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::TryJump() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBalanceBeamComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBalanceBeamComponent");
    return result;
}
_Script_Engine::AnimMontage*& _Script_RsGameTechRT::RsBalanceBeamComponent::get_TurnMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xcd8);
}
_Script_Engine::AnimMontage*& _Script_RsGameTechRT::RsBalanceBeamComponent::get_FallMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xce0);
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::TryDropFromBeam(bool bAllowAllStates) {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::CanBalanceBeamWalkOnCurrentBeam() {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::TryClimb(bool bClimbToRight, bool& OutBlockedByCollision, bool& OutAllowMovingClimb) {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::ShouldBeamTransitionOnRightSide() {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::OnTurnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::OnNavStateExited(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::OnGripNeededEnded() {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::IsTurning() {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::IsOnBalanceBeam() {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::IsClimbingAnimationPlaying() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsBalanceBeamComponent::GetPlayerFacingDir() {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::GetIsParallelToBeam() {
    return;
}
float _Script_RsGameTechRT::RsBalanceBeamComponent::GetGripTimerDuration() {
    return;
}
float _Script_RsGameTechRT::RsBalanceBeamComponent::GetForwardDistanceOnBeam() {
    return;
}
void* _Script_RsGameTechRT::RsBalanceBeamComponent::GetCurrentState() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsBalanceBeamComponent::GetBalanceBeamDir() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsBalanceBeamComponent::GetBalanceBeamCenter() {
    return;
}
float _Script_RsGameTechRT::RsBalanceBeamComponent::GetAngleOfEntry() {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::FallToMonkeyBeam(bool bEjectIfBlocked, bool bSkipGripConfirmation) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::EndNotOnBeam(void* NextState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::EndOnMonkeyBeam(void* NextState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::EndOnBalanceBeam(void* NextState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::EndFallingToMonkeyBeam(void* NextState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::EndClimbingToBalanceBeam(void* NextState) {
    return;
}
bool _Script_RsGameTechRT::RsBalanceBeamComponent::CanMonkeyBeamUnderCurrentBeam() {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::BeginOnBalanceBeam(void* PreviousState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::BeginNotOnBeam(void* PreviousState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::BeginClimbingToBalanceBeam(void* PreviousState) {
    return;
}
void _Script_RsGameTechRT::RsBalanceBeamComponent::BeginFallingToMonkeyBeam(void* PreviousState) {
    return;
}
