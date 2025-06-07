#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct CombatAttackTableRow;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct ButtonMashSyncGroupParameters;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct SwButtonMashConfiguration;
}
namespace _Script_SwGame {
struct R4PlayerController;
}
namespace _Script_Engine {
struct SkinnedMeshComponent;
}
namespace _Script_SwGame {
struct RandomShuffler;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_SwGame {
struct SwHero;
}
namespace _Script_SwGame {
struct SwHighlightManager;
}
namespace _Script_RsGameTechRT {
struct RsPlayerController;
}
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Script_RsTechRT {
struct rsActor;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
struct AICombatAttackTableRow;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameplayLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void StopActiveButtonMashSequence(_Script_CoreUObject::Object* WorldContext);
    void StartSaberClash(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSyncDefinition* ClashSync, _Script_Engine::Actor* ClashActor, float ButtonMashDuration, float ClashDuration, float OscillationsPerSecond, float ApprovableClashStart, float MinApprovableClashArea, float MaxApprovableClashArea, int32_t MaxButtonMashes, void* ClashFinishAction);
    void StartButtonMashSequenceForSyncGroup(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, bool bDeferEvents, int32_t SyncGroupID, _Script_SwGame::ButtonMashSyncGroupParameters& SyncGroupData, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration);
    void StartButtonMashSequenceDurationBased(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, int32_t NumPressesToSucceed, bool bDeferEvents, float Duration, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration);
    void StartButtonMashSequenceAnimNotifyBased(_Script_CoreUObject::Object* WorldContext, void* ButtonAction, int32_t NumPressesToSucceed, bool bDeferEvents, void* NotifyIdentifier, void*& OnEnd, void*& OnButtonPress, void*& OnSuccess, void*& OnFail, float AutoSucceedDuration);
    void* SetZTargetCameraForTarget(_Script_SwGame::R4PlayerController* playerCtrl, _Script_Engine::Actor* Target, int32_t CameraModePriority);
    bool SetForcePushAttackRow(_Script_Engine::DataTable* AttackTable, _Script_SwGame::CombatAttackTableRow& InOutAttackRow);
    _Script_CoreUObject::Transform RsGetSocketTransformFromHierarcy(_Script_Engine::SkinnedMeshComponent* Target, void* InSocketName, void* TransformSpace);
    void RotateToTargetInstantlyYawOnly(_Script_Engine::Actor* actorToRotate, _Script_CoreUObject::Vector targetPos, void* TeleportType);
    void RandomShufflerInit(_Script_SwGame::RandomShuffler& Shuffler, int32_t Max);
    int32_t RandomShufflerGetNext(_Script_SwGame::RandomShuffler& Shuffler);
    void PlayerAttackSequence(_Script_Engine::DataTable* AttackTable, _Script_Engine::DataTable* OverrideTable, void* NextAttackOverride, _Script_Engine::DataTable* ForceMeterTable, _Script_Engine::Actor* Target, _Script_SwGame::SwHero* Hero, _Script_SwGame::CombatAttackTableRow& InOutAttackRow);
    void PlayerAltAttackSequence(_Script_Engine::DataTable* AttackTable, _Script_Engine::DataTable* ForceMeterTable, _Script_Engine::Actor* Target, _Script_SwGame::SwHero* Hero, _Script_SwGame::CombatAttackTableRow& InOutAttackRow);
    void KillZTarget(_Script_CoreUObject::Object* WorldContext, bool bUseDamageSystem, bool bSkipDeathAnimation);
    bool IsForceMeterEmpty(_Script_Engine::Actor* Target);
    bool IsAbilitySystemEnabled();
    _Script_SwGame::SwHighlightManager* GetSwHighlightManager(_Script_CoreUObject::Object* WorldContext);
    _Script_SwGame::R4PlayerController* GetR4PlayerController(_Script_CoreUObject::Object* WorldContextObject);
    void* GetPlayerInputRelativeDirection(_Script_RsGameTechRT::RsPlayerController* playerCtrl);
    _Script_SwGame::SwAIBuddyDroid* GetBuddyDroid(_Script_CoreUObject::Object* WorldContext);
    _Script_Engine::Actor* GetBestTargetForPlayer(_Script_RsGameTechRT::RsPlayerController* playerCtrl, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget);
    _Script_Engine::Actor* GetBestTargetForCamera(_Script_RsGameTechRT::RsPlayerController* playerCtrl, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget);
    _Script_Engine::Actor* GetBestTarget(_Script_CoreUObject::Vector& searchPos, _Script_CoreUObject::Vector& searchDirPos, _Script_CoreUObject::Vector& searchDir, _Script_Engine::Actor* searchActor, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed, bool forSoftTarget);
    _Script_Engine::Actor* GetBestSwitchTargetForCamera(_Script_RsGameTechRT::RsPlayerController* playerCtrl, _Script_CoreUObject::Vector& inputDir, _Script_Engine::Actor* CurrentTarget, void*& Targets, void*& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed);
    float GetActiveButtonMashProgress(_Script_CoreUObject::Object* WorldContext);
    float GetActiveButtonMashBlendSpacePct(_Script_CoreUObject::Object* WorldContext);
    void ForceRefeshBoneTransforms(_Script_RsTechRT::rsActor* Actor);
    void FinishActiveButtonMashSequence(_Script_CoreUObject::Object* WorldContext);
    void DetachRsActorFromParent(_Script_RsTechRT::rsActor* Actor, bool EnableMotionModel);
    _Script_CoreUObject::Rotator CalculateRotationToCameraFromSocket(_Script_Engine::SceneComponent* componentAttachedTo, void*& SocketName, _Script_CoreUObject::Vector& forwardVector);
    void CalculateBallisticTrajectory(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& StartLocation, _Script_CoreUObject::Vector& DestinationLocation, float DesiredLateralSpeed, _Script_CoreUObject::Rotator& Trajectory, float& InitalSpeed, float GravityScale);
    void BreakButtonMashParameters(_Script_SwGame::SwButtonMashConfiguration& InParameters, void*& ButtonAction, int32_t& NumPressToSucceed, bool& bDeferEvents, void*& DurationTypeEnum, float& Duration, void*& NotifyIdentifier, int32_t& SyncGroupID, _Script_SwGame::ButtonMashSyncGroupParameters& SyncGroupData, float& AutoSucceedDuration);
    void AttachRsActorToComponent(_Script_Engine::SceneComponent* Parent, _Script_RsTechRT::rsActor* Actor, void* SocketName, bool DisableMotionModel);
    bool AINextAttackSequence(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::DataTable* AttackTable, void* DefenseType, _Script_SwGame::AICombatAttackTableRow& InOutAttackRow, _Script_RsGameTechRT::RsCharacterAnimationData& NextAnimation, void*& AbilityType);
    bool AIAttackSequence(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::DataTable* AttackTable, void* RowName, _Script_SwGame::AICombatAttackTableRow& AttackRow, _Script_RsGameTechRT::RsCharacterAnimationData& SequenceAnimation);
}; // Size: 0x28
#pragma pack(pop)
}
