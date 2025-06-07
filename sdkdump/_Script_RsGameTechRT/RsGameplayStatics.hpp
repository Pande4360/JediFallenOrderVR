#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsTechRT\RsGeoLocator.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_RsGameTechRT {
struct RsAIEncounterManager;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsMissionObjectiveSystemBase;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_RsGameTechRT {
struct RsSyncManager;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsMasterSyncInstance;
}
namespace _Script_RsGameTechRT {
struct RsSlaveSyncInstance;
}
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct SkinnedMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_RsGameTechRT {
struct RsConversationDefinition;
}
namespace _Script_RsGameTechRT {
struct RsPlayerController;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_RsGameTechRT {
struct RsHitEvent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_RsGameTechRT {
struct RsSyncInstance;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationRuntimeProfileParameters;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameplayStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void WaitForStreamingAreaToLoad(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void* StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, void* OptionalLevelContainer);
    void UnloadStreamingArea(_Script_CoreUObject::Object* WorldContextObject, void* StreamingArea, _Script_Engine::LatentActionInfo LatentInfo);
    void UnloadStandaloneStreamingLevel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition, _Script_Engine::LatentActionInfo LatentInfo);
    void UnloadAllStreamingAreas(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo);
    void UnloadAllStandaloneStreamingLevels(_Script_CoreUObject::Object* WorldContextObject);
    void TeleportLoad(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void* PlayerStartName);
    void SyncActorsFromDefinitionHelper(_Script_CoreUObject::Transform& Transform, _Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, _Script_Engine::Actor* Master, _Script_CoreUObject::Vector2D& MasterBlendSpaceInput, void*& Actors, void*& SlaveBlendSpaceinputs, _Script_Engine::AnimationAsset* OverrideAnimation, _Script_RsGameTechRT::RsMasterSyncInstance*& MasterInstance, void*& SlaveInstanceArray);
    int32_t SyncActorsFromDefinitionBasic(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, _Script_Engine::Actor* Master, _Script_Engine::Actor* Slave);
    int32_t SyncActorsFromDefinitionAtLocation(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, _Script_CoreUObject::Transform& Transform, void*& Actors, _Script_Engine::AnimationAsset* OverrideAnimation, _Script_RsGameTechRT::RsMasterSyncInstance*& MasterInstance, void*& SlaveInstanceArray, void*& SlaveBlendSpaceinputs);
    int32_t SyncActorsFromDefinition(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, _Script_Engine::Actor* Master, void*& Actors, _Script_Engine::AnimationAsset* OverrideAnimation, _Script_RsGameTechRT::RsMasterSyncInstance*& MasterInstance, void*& SlaveInstanceArray, _Script_CoreUObject::Vector2D& MasterBlendSpaceInput, void*& SlaveBlendSpaceinputs);
    int32_t SyncActors(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMasterSyncInstance* MasterInstance, void* SlaveInstanceArray, void* BreakOnMontageEnd, void* BreakOnTakeDamage);
    void StopMontagesAndEndNotifyStates(_Script_Engine::AnimInstance* AnimInstance, float BlendOutTime);
    void StopMontageAndEndNotifyStates(_Script_Engine::AnimInstance* AnimInstance, _Script_Engine::AnimMontage* Montage, float BlendOutTime);
    void StopDamageOverTime(_Script_Engine::Actor* DamagedActor);
    void StartDamageOverTime(_Script_Engine::Actor* DamagedActor, float DamagePerTick, float DamageDuration, float DamageTickRate, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass);
    _Script_Engine::DecalComponent* SpawnDecalAtLocationWithNormal(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialInterface* DecalMaterial, _Script_CoreUObject::Vector DecalSize, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector DecalNormal, float RotationAroundNormal, float LifeSpan);
    _Script_Engine::Actor* SpawnActorAtSocket(_Script_Engine::Actor* SpawnerActor, void* SocketName, void* SpawnActorClass, _Script_CoreUObject::Vector LocalSpawnImpulse, _Script_CoreUObject::Vector LocalSpawnAngularImpulse, float LifeSpan, _Script_Engine::ParticleSystem* ParticleSystemClass);
    void ShowDismemberMeshComponent(_Script_Engine::SkinnedMeshComponent* SkinnedMeshComponent, bool ConvertToRagdoll, _Script_Engine::AnimationAsset* AnimationToPlay);
    bool ShouldDeferCineStart();
    bool SetWorldRootLevel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition);
    void SetMaxHealth(_Script_RsGameTechRT::RsCharacter* Character, float MaxHealth, bool bUpdateCurrentHealth);
    void SetLoadedStreamingArea(_Script_CoreUObject::Object* WorldContextObject, void* StreamingArea, void* InitialLoadToken, void* OptionalLoadOrder, _Script_Engine::LatentActionInfo LatentInfo);
    void SetLevelTransform(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition, _Script_CoreUObject::Transform LevelTransform);
    void SetHealth(_Script_RsGameTechRT::RsCharacter* Character, float Health, bool SetIfDead);
    void SetEnableMotionModel(_Script_RsGameTechRT::RsCharacter* Character, bool enable);
    void SetCanDie(_Script_RsGameTechRT::RsCharacter* Character, bool bCanDie);
    void SetCanBeTargeted(_Script_Engine::Actor* Actor, bool bCanBetargeted);
    void SetCanBePlayerZTargeted(_Script_Engine::Actor* Actor, bool bCanBePlayerZTargeted);
    void SetActiveOnlinePlayerController(_Script_Engine::PlayerController* PlayerController);
    void SeperateFromMasterPoseComponent(_Script_Engine::SkinnedMeshComponent* SkinnedMeshComponent, bool ConvertToRagdoll, _Script_Engine::AnimationAsset* AnimationToPlay);
    _Script_GameplayTags::GameplayTag SelectSmartTag(_Script_Engine::Actor* Actor, _Script_GameplayTags::GameplayTag ParentTag);
    void RsSetImpactEffectTable(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DataTable* ImpactEffectsSurface, _Script_Engine::DataTable* ImpactEffectsCharacter);
    bool RsIsLightsaberAttackType(_Script_CoreUObject::Object* WorldContextObject, void* AttackType);
    void RsImpactEffectOnGround(_Script_CoreUObject::Object* WorldContextObject, void* AttackType, _Script_CoreUObject::Vector& Location);
    void RsImpactEffectFromSweepImpactNormal(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& HitSweep, void* AttackType, void* DamageEffectType);
    void RsImpactEffectFromSweep(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& HitSweep, void* AttackType, void* DamageEffectType);
    void RsImpactEffectFromDamageParams(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* DamagedActor, _Script_Engine::SceneComponent* DamagedComponent, _Script_RsGameTechRT::RsDamageParams& DamageParams, void* DamageEffectType);
    void RsImpactEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* DamagedActor, _Script_Engine::SceneComponent* DamagedComponent, void* AttachSocket, void* AttackType, void* DamageEffectType, void* SurfaceType, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector& FXDir);
    _Script_RsGameTechRT::RsHero* RsGetPlayerHero(_Script_CoreUObject::Object* WorldContextObject);
    _Script_RsGameTechRT::RsPlayerController* RsGetPlayerController(_Script_CoreUObject::Object* WorldContextObject);
    _Script_RsGameTechRT::RsCharacter* RsGetPlayerCharacter(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::PlayerCameraManager* RsGetPlayerCameraManager(_Script_CoreUObject::Object* WorldContextObject);
    _Script_RsGameTechRT::RsCharacter* RsGetComponentCharacter(_Script_Engine::ActorComponent* Component);
    bool RsApplyRadialDamageWithFalloff(float BaseDamage, float MinimumDamage, _Script_CoreUObject::Vector& origin, float DamageInnerRadius, float DamageOuterRadius, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, void* DamagePreventionChannel, _Script_RsGameTechRT::RsHitEvent& HitEvent);
    bool RsApplyRadialDamage(float BaseDamage, _Script_CoreUObject::Vector& origin, float DamageRadius, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, void* DamagePreventionChannel, _Script_RsGameTechRT::RsHitEvent& HitEvent);
    float RsApplyDamageFromSweep(_Script_Engine::HitResult& HitSweep, float BaseDamage, _Script_RsGameTechRT::RsCharacter* DamageCauser, void* DamageTypeClass, void* AttackType);
    float RsApplyDamageFromHitEventSeparateActor(_Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsHitEvent& HitEvent, _Script_RsGameTechRT::RsCharacter* DamageCauser, _Script_Engine::Actor* DamageCauseActor);
    float RsApplyDamageFromHitEvent(_Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsHitEvent& HitEvent, _Script_RsGameTechRT::RsCharacter* DamageCauser);
    float RsApplyDamage(_Script_Engine::Actor* DamagedActor, _Script_Engine::PrimitiveComponent* DamagedComponent, float BaseDamage, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void RotateToVector(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector& Direction, float Offset);
    void RotateToTargetWithMax(_Script_Engine::Actor* ActorStart, _Script_Engine::Actor* ActorTarget, float Offset, float MaxAmount);
    void RotateToTarget(_Script_Engine::Actor* ActorStart, _Script_Engine::Actor* ActorTarget, float RotateAmount);
    void RestartWorld(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, _Script_Engine::Actor* AtPlayerStart);
    void ResetHealthToMax(_Script_RsGameTechRT::RsCharacter* Character, bool SetIfDead);
    void ResetAllRopePhysics();
    void RemoveAllCorpses(_Script_CoreUObject::Object* WorldContext, bool bFade);
    void ReloadStreamingLevel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition);
    void ReclaimParticlePools(_Script_CoreUObject::Object* WorldContext);
    _Script_RsGameTechRT::RsConversation* PlayConversation(_Script_CoreUObject::Object* WorldContextObject, _Script_RsGameTechRT::RsConversationDefinition* ConversationData, void* Actors, int32_t Priority);
    void LoseHealth(_Script_RsGameTechRT::RsCharacter* Character, float Amount);
    void LogTelemetryStat_Int(_Script_CoreUObject::Object* WorldContextObject, void* StatName, int32_t StatValue);
    void LogTelemetryStat_Float(_Script_CoreUObject::Object* WorldContextObject, void* StatName, float StatValue);
    void LogTelemetryEventAtLocation(_Script_CoreUObject::Object* WorldContextObject, void* EventName, _Script_CoreUObject::Vector Location, void* AdditionalFloatParameters, void* AdditionalIntegerParameters, void* AdditionalBooleanParameters, void* AdditionalIndexedStringParameters, void* AdditionalStringParameters);
    void LogTelemetryEvent(_Script_CoreUObject::Object* WorldContextObject, void* EventName, void* AdditionalFloatParameters, void* AdditionalIntegerParameters, void* AdditionalBooleanParameters, void* AdditionalIndexedStringParameters, void* AdditionalStringParameters);
    void LoadWorld(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void* WorldName, void* PlayerStartName, bool bAllowLoadoutOverride);
    void LoadStreamingArea(_Script_CoreUObject::Object* WorldContextObject, void* StreamingArea, void* InitialLoadToken, bool bShouldBlockOnLoad, void* OptionalLoadOrder, _Script_Engine::LatentActionInfo LatentInfo);
    void LoadStandaloneStreamingLevel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition, void* DesiredLoadState, void* InitialLoadToken, _Script_Engine::LatentActionInfo LatentInfo);
    void LoadPlayerStartListForWorld(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void* WorldName);
    void LoadPlayerStartLevels(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition, void* PlayerStartName, _Script_Engine::LatentActionInfo LatentInfo);
    void KillCharacter(_Script_RsGameTechRT::RsCharacter* Character, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, bool bUseDamageSystem, bool bSkipDeathAnimation);
    bool IsTelemetryEnabled(_Script_CoreUObject::Object* WorldContextObject);
    bool IsStreamingLevelLoaded(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition);
    bool IsLevelStreamingInProgress(_Script_CoreUObject::Object* WorldContextObject);
    bool IsCharacterOfType(_Script_RsGameTechRT::RsCharacter* Character, void* CharacterType);
    bool IsAlive(_Script_RsGameTechRT::RsCharacter* Character);
    bool IsActorSyncingWithPlayer(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* SyncActor);
    bool IsActorSyncing(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* SyncActor);
    bool IsActorOfType(_Script_Engine::Actor* Actor, void* CharacterType);
    void InflictDamage(_Script_RsGameTechRT::RsCharacter* Character, float Damage, void* DamageType);
    void HealCharacter(_Script_RsGameTechRT::RsCharacter* Character, float Amount);
    void* GetWorldNameList(_Script_CoreUObject::Object* WorldContextObject);
    _Script_RsGameTechRT::RsTargetableComponent* GetTargetableComponent(_Script_Engine::Actor* Actor);
    _Script_RsGameTechRT::RsSyncManager* GetSyncManager(_Script_CoreUObject::Object* WorldContext);
    void* GetSurfaceTypeName(void* SurfaceType);
    void GetStreamingAreaNames(_Script_CoreUObject::Object* WorldContextObject, void*& OutAreaNames);
    _Script_GameplayTags::GameplayTag GetRAPGameplayTag(_Script_CoreUObject::Object* WorldContextObject, _Script_DialoguePlugin::Dialogue* Dialogue, int32_t ChoiceNumber, void* Choice);
    void GetPlayerStartNames(_Script_CoreUObject::Object* WorldContextObject, void*& OutPlayerStartNames);
    void* GetPlayerStartListForWorld(_Script_CoreUObject::Object* WorldContextObject, void* WorldName);
    _Script_RsGameTechRT::RsMissionObjectiveSystemBase* GetMissionObjectiveSystem(_Script_CoreUObject::Object* WorldContext);
    float GetMaxHealth(_Script_RsGameTechRT::RsCharacter* Character);
    float GetHealthFraction(_Script_RsGameTechRT::RsCharacter* Character);
    float GetHealth(_Script_RsGameTechRT::RsCharacter* Character);
    _Script_RsGameTechRT::RsAIEncounterManager* GetEncounterManager(_Script_CoreUObject::Object* WorldContext);
    void* GetDialogueSpeakerList(_Script_CoreUObject::Object* WorldContextObject, _Script_DialoguePlugin::Dialogue* Dialogue);
    void* GetAttackerRelativeDirectionForHitVelocity(_Script_Engine::Actor* Target, _Script_CoreUObject::Vector& Velicity);
    void* GetAttackerRelativeDirection(_Script_Engine::Actor* Target, _Script_Engine::Actor* Attacker);
    void* GetActiveOnlinePlayerNickname(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::PlayerController* GetActiveOnlinePlayerController();
    bool GetAchievementNameByIndex(void* Index, void*& AchievementName);
    void ForceImmediateLevelsVisibilityUpdate(_Script_CoreUObject::Object* WorldContextObject);
    void* FlipAttackerDirection(void* AttackerDirection);
    _Script_RsGameTechRT::RsSyncInstance* FindSyncInstance(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsCharacter* Character);
    void EnablePhysicalAnimationProfile(_Script_Engine::Actor* TargetActor, _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters& OperationParameters, _Script_RsGameTechRT::RsPhysicalAnimationProfile* InProfile);
    void DisablePhysicalAnimationImmediately(_Script_Engine::Actor* TargetActor, _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
    void DisablePhysicalAnimation(_Script_Engine::Actor* TargetActor, _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
    bool DetermineTargetToRight(_Script_Engine::Actor* ActorSelf, _Script_Engine::Actor* ActorTarget);
    bool DetermineTargetBehind(_Script_Engine::Actor* ActorSelf, _Script_Engine::Actor* ActorTarget);
    void DeferEventUntilNextFrame(_Script_CoreUObject::Object* WorldContext, void*& Event);
    _Script_RsGameTechRT::RsSlaveSyncInstance* CreateSlaveSyncInstance(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* Actor, _Script_Engine::AnimationAsset* Animation, void* BoneName, bool bEndSyncOnMontageBlendingOut);
    _Script_RsGameTechRT::RsMasterSyncInstance* CreateMasterSyncInstance(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* Actor, _Script_Engine::AnimationAsset* Animation, _Script_RsTechRT::RsGeoLocator ConstraintLocator, bool bEndSyncOnMontageBlendingOut);
    _Script_RsGameTechRT::RsConversation* CreateConversation(_Script_CoreUObject::Object* WorldContextObject, _Script_DialoguePlugin::Dialogue* ConversationData, void* Actors, int32_t Priority);
    void ConvertToRagdoll(_Script_Engine::Actor* Actor, bool DisableColliders);
    void ClearLevelTransform(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::RsStreamingDefinition* StreamingLevelDefinition);
    void BreakSync(_Script_CoreUObject::Object* WorldContext, int32_t SyncId);
    bool BreakFirstSync(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* Actor);
    void BreakActorInSync(_Script_CoreUObject::Object* WorldContext, _Script_Engine::Actor* Actor, int32_t SyncId);
    void BlueprintError(_Script_CoreUObject::Object* WorldContextObject, void* Error);
}; // Size: 0x28
#pragma pack(pop)
}
