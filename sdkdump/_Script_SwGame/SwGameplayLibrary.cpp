#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkinnedMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "..\_Script_RsTechRT\rsActor.hpp"
#include "AICombatAttackTableRow.hpp"
#include "ButtonMashSyncGroupParameters.hpp"
#include "CombatAttackTableRow.hpp"
#include "R4PlayerController.hpp"
#include "RandomShuffler.hpp"
#include "SwAIBuddyDroid.hpp"
#include "SwButtonMashConfiguration.hpp"
#include "SwGameplayLibrary.hpp"
#include "SwHero.hpp"
#include "SwHighlightManager.hpp"
void _Script_SwGame::SwGameplayLibrary::CalculateBallisticTrajectory(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& StartLocation, _Script_CoreUObject::Vector& DestinationLocation, float DesiredLateralSpeed, _Script_CoreUObject::Rotator& Trajectory, float& InitalSpeed, float GravityScale) {
    return;
}
bool _Script_SwGame::SwGameplayLibrary::SetForcePushAttackRow(_Script_Engine::DataTable* AttackTable, _Script_SwGame::CombatAttackTableRow& InOutAttackRow) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameplayLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGameplayLibrary");
    return result;
}
void _Script_SwGame::SwGameplayLibrary::StartButtonMashSequenceForSyncGroup(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, bool bDeferEvents, int32_t SyncGroupID, _Script_SwGame::ButtonMashSyncGroupParameters& SyncGroupData, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::StopActiveButtonMashSequence(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::StartSaberClash(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSyncDefinition* ClashSync, _Script_Engine::Actor* ClashActor, float ButtonMashDuration, float ClashDuration, float OscillationsPerSecond, float ApprovableClashStart, float MinApprovableClashArea, float MaxApprovableClashArea, int32_t MaxButtonMashes, void* ClashFinishAction) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::StartButtonMashSequenceDurationBased(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, int32_t NumPressesToSucceed, bool bDeferEvents, float Duration, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration) {
    return;
}
void* _Script_SwGame::SwGameplayLibrary::SetZTargetCameraForTarget(_Script_SwGame::R4PlayerController* playerCtrl, _Script_Engine::Actor* Target, int32_t CameraModePriority) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::StartButtonMashSequenceAnimNotifyBased(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, int32_t NumPressesToSucceed, bool bDeferEvents, void* NotifyIdentifier, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration) {
    return;
}
_Script_CoreUObject::Transform _Script_SwGame::SwGameplayLibrary::RsGetSocketTransformFromHierarcy(_Script_Engine::SkinnedMeshComponent* Target, void* InSocketName, void* TransformSpace) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::RotateToTargetInstantlyYawOnly(_Script_Engine::Actor* actorToRotate, _Script_CoreUObject::Vector targetPos, void* TeleportType) {
    return;
}
bool _Script_SwGame::SwGameplayLibrary::AINextAttackSequence(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::DataTable* AttackTable, void* DefenseType, _Script_SwGame::AICombatAttackTableRow& InOutAttackRow, _Script_RsGameTechRT::RsCharacterAnimationData& NextAnimation, void*& AbilityType) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::RandomShufflerInit(_Script_SwGame::RandomShuffler& Shuffler, int32_t Max) {
    return;
}
int32_t _Script_SwGame::SwGameplayLibrary::RandomShufflerGetNext(_Script_SwGame::RandomShuffler& Shuffler) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::PlayerAttackSequence(_Script_Engine::DataTable* AttackTable, _Script_Engine::DataTable* OverrideTable, void* NextAttackOverride, _Script_Engine::DataTable* ForceMeterTable, _Script_Engine::Actor* Target, _Script_SwGame::SwHero* Hero, _Script_SwGame::CombatAttackTableRow& InOutAttackRow) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::PlayerAltAttackSequence(_Script_Engine::DataTable* AttackTable, _Script_Engine::DataTable* ForceMeterTable, _Script_Engine::Actor* Target, _Script_SwGame::SwHero* Hero, _Script_SwGame::CombatAttackTableRow& InOutAttackRow) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::KillZTarget(_Script_CoreUObject::Object* WorldContext, bool bUseDamageSystem, bool bSkipDeathAnimation) {
    return;
}
bool _Script_SwGame::SwGameplayLibrary::IsForceMeterEmpty(_Script_Engine::Actor* Target) {
    return;
}
bool _Script_SwGame::SwGameplayLibrary::IsAbilitySystemEnabled() {
    return;
}
_Script_SwGame::SwHighlightManager* _Script_SwGame::SwGameplayLibrary::GetSwHighlightManager(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_SwGame::R4PlayerController* _Script_SwGame::SwGameplayLibrary::GetR4PlayerController(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_SwGame::SwGameplayLibrary::GetPlayerInputRelativeDirection(_Script_RsGameTechRT::RsPlayerController* playerCtrl) {
    return;
}
_Script_SwGame::SwAIBuddyDroid* _Script_SwGame::SwGameplayLibrary::GetBuddyDroid(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::SwGameplayLibrary::GetBestTargetForPlayer(_Script_RsGameTechRT::RsPlayerController* playerCtrl, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::SwGameplayLibrary::GetBestTargetForCamera(_Script_RsGameTechRT::RsPlayerController* playerCtrl, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::SwGameplayLibrary::GetBestTarget(_Script_CoreUObject::Vector& searchPos, _Script_CoreUObject::Vector& searchDirPos, _Script_CoreUObject::Vector& searchDir, _Script_Engine::Actor* searchActor, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed, bool forSoftTarget) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::SwGameplayLibrary::GetBestSwitchTargetForCamera(_Script_RsGameTechRT::RsPlayerController* playerCtrl, _Script_CoreUObject::Vector& inputDir, _Script_Engine::Actor* CurrentTarget, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed) {
    return;
}
float _Script_SwGame::SwGameplayLibrary::GetActiveButtonMashProgress(_Script_CoreUObject::Object* WorldContext) {
    return;
}
float _Script_SwGame::SwGameplayLibrary::GetActiveButtonMashBlendSpacePct(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_SwGame::SwGameplayLibrary::AIAttackSequence(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::DataTable* AttackTable, void* RowName, _Script_SwGame::AICombatAttackTableRow& AttackRow, _Script_RsGameTechRT::RsCharacterAnimationData& SequenceAnimation) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::ForceRefeshBoneTransforms(_Script_RsTechRT::rsActor* Actor) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::DetachRsActorFromParent(_Script_RsTechRT::rsActor* Actor, bool EnableMotionModel) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::FinishActiveButtonMashSequence(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_CoreUObject::Rotator _Script_SwGame::SwGameplayLibrary::CalculateRotationToCameraFromSocket(_Script_Engine::SceneComponent* componentAttachedTo, void*& SocketName, _Script_CoreUObject::Vector& forwardVector) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::BreakButtonMashParameters(_Script_SwGame::SwButtonMashConfiguration& InParameters, void*& ButtonAction, int32_t& NumPressToSucceed, bool& bDeferEvents, void*& DurationTypeEnum, float& Duration, void*& NotifyIdentifier, int32_t& SyncGroupID, _Script_SwGame::ButtonMashSyncGroupParameters& SyncGroupData, float& AutoSucceedDuration) {
    return;
}
void _Script_SwGame::SwGameplayLibrary::AttachRsActorToComponent(_Script_Engine::SceneComponent* Parent, _Script_RsTechRT::rsActor* Actor, void* SocketName, bool DisableMotionModel) {
    return;
}
