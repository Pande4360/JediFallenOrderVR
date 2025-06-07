#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsAttachToRopeParams.hpp"
#include "RsCharacter.hpp"
#include "RsDetachFromRopeParams.hpp"
#include "RsHeroComponent.hpp"
#include "RsRopeAttachmentComponent.hpp"
#include "RsRopeComponent.hpp"
_Script_RsGameTechRT::RsRopeComponent* _Script_RsGameTechRT::RsRopeAttachmentComponent::GetAttachedRope() {
    return;
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_AutoAlignmentStrength() {
    return *(float*)((uintptr_t)this + 0x190);
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ApplyTwistAngleDeltaDegrees(float twistAngleDelta) {
    return;
}
void* _Script_RsGameTechRT::RsRopeAttachmentComponent::get_AutoAlignMode() {
    return (void*)((uintptr_t)this + 0x180);
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_CurrentAngleToTargetAlign() {
    return *(float*)((uintptr_t)this + 0x194);
}
int32_t _Script_RsGameTechRT::RsRopeAttachmentComponent::AddRopeHandAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, int32_t ropeParticleIdx, _Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
void* _Script_RsGameTechRT::RsRopeAttachmentComponent::get_AutoAlignTargetDirection() {
    return (void*)((uintptr_t)this + 0x184);
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeAttachmentLength() {
    return;
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_SwingSlowdownRangePercentage() {
    return *(float*)((uintptr_t)this + 0x198);
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_SwingAlignmentStiffness() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
int32_t _Script_RsGameTechRT::RsRopeAttachmentComponent::AddRopeHandAttachmentAtLength(_Script_RsGameTechRT::RsRopeComponent* Rope, float attachmentLength, _Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateSwingImpulse(_Script_CoreUObject::Vector swingDir, float swingStrength, float swingDirectionInfluence, float velocityDirectionInfluence) {
    return;
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_SwingSlowdownStrength() {
    return *(float*)((uintptr_t)this + 0x19c);
}
float& _Script_RsGameTechRT::RsRopeAttachmentComponent::get_SwingAlignmentDamping() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::SetTwistAngleDegrees(float TwistAngle) {
    return;
}
void* _Script_RsGameTechRT::RsRopeAttachmentComponent::get_RopeSegmentAttachmentAutoUpdateMode() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::IsSwingingBackward() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRopeAttachmentComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRopeAttachmentComponent");
    return result;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateRopeHandAttachment(int32_t handAttachment) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateLengthRopeHandAttachment(int32_t handAttachment) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateClosestRopeHandAttachment(int32_t handAttachment) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateAllRopeHandAttachments() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateAllLengthRopeHandAttachments() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::UpdateAllClosestRopeHandAttachments() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::BlueprintOnRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::SetSwingAxis(_Script_CoreUObject::Vector SwingAxis) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::SetRopeAttachmentPoint(_Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::SetRopeAttachmentLength(float Length) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ResetTwistAngle() {
    return;
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::RemoveRopeHandAttachment(int32_t handAttachment) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::OnNavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* Character) {
    return;
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::IsSwingingForward() {
    return;
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::IsSwingIdle() {
    return;
}
int32_t _Script_RsGameTechRT::RsRopeAttachmentComponent::AddClosestRopeHandAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::IsAttachedToRope() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateRopeAttachmentLengthAlongAxis(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector Axis, _Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetTwistAngleDegrees() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingPhaseSigned() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::BlueprintOnRopeDetach(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingPhaseAbsoluteSigned() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingPhaseAbsolute() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingPhase() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingDirection() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::GetSwingAxis() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeIdleSwingVelocity() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeIdleSwingPhase() {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeAttachmentProgression() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ApplySlowDownImpulse(float slowDownStrength) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeAttachmentPointWorld() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::GetRopeAttachmentPointLocal() {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::DetachFromRope(_Script_RsGameTechRT::RsDetachFromRopeParams& Params) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ClearRopeHandAttachments() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateSwingAxisForAttachedRope(_Script_CoreUObject::Vector SwingDirection) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateSlowDownImpulse(float slowDownStrength) {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateSlowDownFactor(_Script_CoreUObject::Vector swingDir, float minVelocityThreshold, float slowdownOffset) {
    return;
}
float _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateRopeAttachmentLength(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector localPt, void* Bone) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeAttachmentComponent::CalculateReleaseImpulse(_Script_CoreUObject::Vector releaseDir, float releaseStrength, float releaseDirectionInfluence, float velocityDirectionInfluence, float upDirectionInfluence, float forwardDirectionInfluence, bool alignForwardWithSwinging) {
    return;
}
bool _Script_RsGameTechRT::RsRopeAttachmentComponent::AttachToRope(_Script_RsGameTechRT::RsAttachToRopeParams& Params) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ApplySwingImpulse(_Script_CoreUObject::Vector swingDir, float swingStrength, float swingDirectionInfluence, float velocityDirectionInfluence, bool SetVelocity) {
    return;
}
void _Script_RsGameTechRT::RsRopeAttachmentComponent::ApplyReleaseImpulse(_Script_CoreUObject::Vector releaseDir, float releaseStrength, float releaseDirectionInfluence, float velocityDirectionInfluence, float upDirectionInfluence, float forwardDirectionInfluence, bool alignForwardWithSwinging, bool SetVelocity) {
    return;
}
