#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsWallPressComponent.hpp"
#include "RsWallPressSettings.hpp"
#include "..\_Script_RsTechRT\RsJSONTweaksBook.hpp"
_Script_RsGameTechRT::RsWallPressSettings*& _Script_RsGameTechRT::RsWallPressComponent::get_m_settings() {
    return *(_Script_RsGameTechRT::RsWallPressSettings**)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWallPressComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWallPressComponent");
    return result;
}
void* _Script_RsGameTechRT::RsWallPressComponent::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_RsTechRT::RsJSONTweaksBook*& _Script_RsGameTechRT::RsWallPressComponent::get_Tweaks() {
    return *(_Script_RsTechRT::RsJSONTweaksBook**)((uintptr_t)this + 0x198);
}
void _Script_RsGameTechRT::RsWallPressComponent::UpdateReachState(void* MovementDirection) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::WallPressEntryComplete() {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::ApplyJumpOffImpulse() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::ValidateProximityForActiveSurvey(bool useAirProximityBox) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::WalkOffOntoGround(void* MovementDirection) {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::TriggerJumpOff(void* JumpDirection) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::StartWallJump(float Speed) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::StartSidling(float Speed) {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::ShouldAttachToActiveSurvey() {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::ReleaseWallPress() {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::OnNavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::OnEnterWallPress() {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::OnExitWallPress() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::IsWallJumping() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::IsInState(void* State) {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::IsSidling() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::IsInPlaceJumping() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::IsAttached() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::HasGroundToWalkOffOnto(void* MovementDirection) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::InPlaceJumpComplete() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::HasLedgeToDropTo() {
    return;
}
void* _Script_RsGameTechRT::RsWallPressComponent::GetCurrentState() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWallPressComponent::GetAttachedWallPressFaceNormal() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWallPressComponent::GetAttachedWallPressAxis() {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::DoWallJumpSurvey(void* MovementDirection) {
    return;
}
bool _Script_RsGameTechRT::RsWallPressComponent::DoSidleSurvey(void* MovementDirection) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::DoInPlaceJump(float jumpHeight) {
    return;
}
void _Script_RsGameTechRT::RsWallPressComponent::BP_WallPressTick(float Dt) {
    return;
}
