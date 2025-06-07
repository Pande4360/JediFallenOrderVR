#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsRopeAttachmentComponent.hpp"
#include "..\_Script_RsGameTechRT\RsRopeComponent.hpp"
#include "SwRopeAttachmentComponent.hpp"
#include "SwRopeAttachmentSettings.hpp"
_Script_SwGame::SwRopeAttachmentSettings*& _Script_SwGame::SwRopeAttachmentComponent::get_Settings() {
    return *(_Script_SwGame::SwRopeAttachmentSettings**)((uintptr_t)this + 0x328);
}
float& _Script_SwGame::SwRopeAttachmentComponent::get_SwingTimeToImpactNormalized() {
    return *(float*)((uintptr_t)this + 0x358);
}
float& _Script_SwGame::SwRopeAttachmentComponent::get_SwingInputMagnitude() {
    return *(float*)((uintptr_t)this + 0x350);
}
_Script_RsGameTechRT::RsRopeComponent*& _Script_SwGame::SwRopeAttachmentComponent::get_PossibleRopeAttachTarget() {
    return *(_Script_RsGameTechRT::RsRopeComponent**)((uintptr_t)this + 0x330);
}
float& _Script_SwGame::SwRopeAttachmentComponent::get_ClimbInputMagnitude() {
    return *(float*)((uintptr_t)this + 0x35c);
}
void* _Script_SwGame::SwRopeAttachmentComponent::get_SwingInputDirection() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_SwGame::SwRopeAttachmentComponent::get_ClimbInputDirection() {
    return (void*)((uintptr_t)this + 0x344);
}
void* _Script_SwGame::SwRopeAttachmentComponent::GetNextState() {
    return;
}
float& _Script_SwGame::SwRopeAttachmentComponent::get_SwingTimeToImpactAbsolute() {
    return *(float*)((uintptr_t)this + 0x354);
}
bool _Script_SwGame::SwRopeAttachmentComponent::get_ClimbInputActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentComponent::set_ClimbInputActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwRopeAttachmentComponent::get_SlideToAttachmentLengthState() {
    return (void*)((uintptr_t)this + 0x364);
}
float& _Script_SwGame::SwRopeAttachmentComponent::get_SlideToAttachmentVelocity() {
    return *(float*)((uintptr_t)this + 0x368);
}
void _Script_SwGame::SwRopeAttachmentComponent::OnGroundTopologyChange(void* prevMode, void* newMode, float Proximity) {
    return;
}
void* _Script_SwGame::SwRopeAttachmentComponent::get_OnStateChangedEvent() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRopeAttachmentComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwRopeAttachmentComponent");
    return result;
}
bool _Script_SwGame::SwRopeAttachmentComponent::SwingImpactFound() {
    return;
}
void _Script_SwGame::SwRopeAttachmentComponent::SetupRopeHandAttachments(_Script_RsGameTechRT::RsRopeComponent* Rope, bool leftHand, bool rightHand) {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsRopeAttachAllowed() {
    return;
}
void _Script_SwGame::SwRopeAttachmentComponent::SetJumpedOffRope(bool jumpedOffRope) {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsRopeValidForAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, bool bIsAutoAttachment) {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInSwingTurningState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInSwingStartedState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInSwingingState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInSwingingForwardState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInSwingingBackwardState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInStrafingState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInClimbTurningState() {
    return;
}
bool _Script_SwGame::SwRopeAttachmentComponent::IsInClimbingState() {
    return;
}
void* _Script_SwGame::SwRopeAttachmentComponent::GetState() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::SwRopeAttachmentComponent::GetMovementInputDirection() {
    return;
}
void* _Script_SwGame::SwRopeAttachmentComponent::GetHandPosition() {
    return;
}
_Script_CoreUObject::Rotator _Script_SwGame::SwRopeAttachmentComponent::GetCameraRotation() {
    return;
}
_Script_RsGameTechRT::RsRopeComponent* _Script_SwGame::SwRopeAttachmentComponent::FindRopeForAttachment(int32_t& outClosestParticleIndex, float& outDistSq) {
    return;
}
void _Script_SwGame::SwRopeAttachmentComponent::DontDetachRopeOnNextSync() {
    return;
}
void _Script_SwGame::SwRopeAttachmentComponent::BlueprintOnStateChanged(void* OldState, void* NewState) {
    return;
}
void _Script_SwGame::SwRopeAttachmentComponent::BlueprintOnPossibleRopeAttachFound(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
