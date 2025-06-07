#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "AnimInstance.hpp"
#include "AnimMontage.hpp"
#include "AnimSequenceBase.hpp"
#include "AnimationAsset.hpp"
#include "MarkerSyncAnimPosition.hpp"
#include "Pawn.hpp"
#include "PoseSnapshot.hpp"
#include "SkeletalMeshComponent.hpp"
#include "Skeleton.hpp"
bool _Script_Engine::AnimInstance::get_bQueueMontageEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 8 != 0;
}
float _Script_Engine::AnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex) {
    return;
}
void _Script_Engine::AnimInstance::SavePoseSnapshot(void* SnapshotName) {
    return;
}
_Script_Engine::Skeleton*& _Script_Engine::AnimInstance::get_CurrentSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::AnimInstance::get_RootMotionMode() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::AnimInstance::Montage_JumpToSectionsEnd(void* SectionName, _Script_Engine::AnimMontage* Montage) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceMachineWeight(int32_t MachineIndex) {
    return;
}
bool _Script_Engine::AnimInstance::get_bUsingCopyPoseFromMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 2 != 0;
}
void _Script_Engine::AnimInstance::set_bUseMultiThreadedAnimationUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimInstance::Montage_JumpToSection(void* SectionName, _Script_Engine::AnimMontage* Montage) {
    return;
}
float _Script_Engine::AnimInstance::Montage_Play(_Script_Engine::AnimMontage* MontageToPlay, float InPlayRate, void* ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages, _Script_CoreUObject::Vector InBlendSpaceInput) {
    return;
}
bool _Script_Engine::AnimInstance::get_bUseMultiThreadedAnimationUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Script_Engine::AnimInstance::Montage_GetIsStopped(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_Engine::AnimInstance::set_bUsingCopyPoseFromMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::AnimInstance::set_bQueueMontageEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::AnimInstance::BlueprintUpdateAnimation(float DeltaTimeX) {
    return;
}
void* _Script_Engine::AnimInstance::get_OnMontageBlendingOut() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimInstance::get_OnMontageStarted() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AnimInstance::get_OnMontageEnded() {
    return (void*)((uintptr_t)this + 0x58);
}
float _Script_Engine::AnimInstance::PlaySlotAnimation(_Script_Engine::AnimSequenceBase* Asset, void* SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount) {
    return;
}
void* _Script_Engine::AnimInstance::get_OnAllMontageInstancesEnded() {
    return (void*)((uintptr_t)this + 0x68);
}
float _Script_Engine::AnimInstance::GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
void _Script_Engine::AnimInstance::BlueprintBeginPlay() {
    return;
}
void* _Script_Engine::AnimInstance::get_NotifyQueue() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::AnimInstance::get_ActiveAnimNotifyState() {
    return (void*)((uintptr_t)this + 0x1a0);
}
bool _Script_Engine::AnimInstance::IsAnyMontagePlaying() {
    return;
}
void* _Script_Engine::AnimInstance::get_QueuedMontagesForClearingNotifyStates() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void _Script_Engine::AnimInstance::Montage_Resume(_Script_Engine::AnimMontage* Montage) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::AnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimInstance");
    return result;
}
void _Script_Engine::AnimInstance::Montage_Pause(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_Engine::AnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
    return;
}
bool _Script_Engine::AnimInstance::GetTimeToClosestMarker(void* SyncGroup, void* MarkerName, float& OutMarkerTime) {
    return;
}
_Script_Engine::Pawn* _Script_Engine::AnimInstance::TryGetPawnOwner() {
    return;
}
void _Script_Engine::AnimInstance::StopSlotAnimation(float InBlendOutTime, void* SlotNodeName) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex) {
    return;
}
void _Script_Engine::AnimInstance::SnapshotPose(_Script_Engine::PoseSnapshot& Snapshot) {
    return;
}
void _Script_Engine::AnimInstance::Montage_Stop(float InBlendOutTime, _Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_Engine::AnimInstance::SetRootMotionMode(void* Value) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex) {
    return;
}
void _Script_Engine::AnimInstance::SetMorphTarget(void* MorphTargetName, float Value) {
    return;
}
void _Script_Engine::AnimInstance::ResetDynamics(void* InTeleportType) {
    return;
}
_Script_Engine::AnimMontage* _Script_Engine::AnimInstance::PlaySlotAnimationAsDynamicMontage(_Script_Engine::AnimationAsset* Asset, void* SlotNodeName, float StartPosition, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt, _Script_CoreUObject::Vector2D BlendSpaceInput) {
    return;
}
void _Script_Engine::AnimInstance::Montage_SetPosition(_Script_Engine::AnimMontage* Montage, float NewPosition) {
    return;
}
void _Script_Engine::AnimInstance::Montage_SetPlayRate(_Script_Engine::AnimMontage* Montage, float NewPlayRate) {
    return;
}
void _Script_Engine::AnimInstance::Montage_SetNextSection(void* SectionNameToChange, void* NextSection, _Script_Engine::AnimMontage* Montage) {
    return;
}
bool _Script_Engine::AnimInstance::Montage_IsPlaying(_Script_Engine::AnimMontage* Montage) {
    return;
}
bool _Script_Engine::AnimInstance::Montage_IsActive(_Script_Engine::AnimMontage* Montage) {
    return;
}
float _Script_Engine::AnimInstance::Montage_GetPosition(_Script_Engine::AnimMontage* Montage) {
    return;
}
float _Script_Engine::AnimInstance::Montage_GetPlayRate(_Script_Engine::AnimMontage* Montage) {
    return;
}
void* _Script_Engine::AnimInstance::Montage_GetCurrentSection(_Script_Engine::AnimMontage* Montage) {
    return;
}
_Script_Engine::SkeletalMeshComponent* _Script_Engine::AnimInstance::GetOwningComponent() {
    return;
}
float _Script_Engine::AnimInstance::Montage_GetBlendTime(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_Engine::AnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
    return;
}
bool _Script_Engine::AnimInstance::IsSyncGroupBetweenMarkers(void* InSyncGroupName, void* PreviousMarker, void* NextMarker, bool bRespectMarkerOrder) {
    return;
}
bool _Script_Engine::AnimInstance::IsPlayingSlotAnimation(_Script_Engine::AnimationAsset* Asset, void* SlotNodeName) {
    return;
}
bool _Script_Engine::AnimInstance::HasMarkerBeenHitThisFrame(void* SyncGroup, void* MarkerName) {
    return;
}
_Script_Engine::MarkerSyncAnimPosition _Script_Engine::AnimInstance::GetSyncGroupPosition(void* InSyncGroupName) {
    return;
}
float _Script_Engine::AnimInstance::GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex) {
    return;
}
_Script_Engine::Actor* _Script_Engine::AnimInstance::GetOwningActor() {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceCurrentStateElapsedTime(int32_t MachineIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex) {
    return;
}
float _Script_Engine::AnimInstance::GetCurveValue(void* CurveName) {
    return;
}
void* _Script_Engine::AnimInstance::GetCurrentStateName(int32_t MachineIndex) {
    return;
}
_Script_Engine::AnimMontage* _Script_Engine::AnimInstance::GetCurrentActiveMontage() {
    return;
}
void _Script_Engine::AnimInstance::GetAllCurveNames(void*& OutNames) {
    return;
}
void _Script_Engine::AnimInstance::GetActiveCurveNames(void* CurveType, void*& OutNames) {
    return;
}
void _Script_Engine::AnimInstance::ClearMorphTargets() {
    return;
}
float _Script_Engine::AnimInstance::CalculateDirection(_Script_CoreUObject::Vector& Velocity, _Script_CoreUObject::Rotator& BaseRotation) {
    return;
}
void _Script_Engine::AnimInstance::BlueprintPostEvaluateAnimation() {
    return;
}
void _Script_Engine::AnimInstance::BlueprintInitializeAnimation() {
    return;
}
