#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "AudioComponent.hpp"
#include "Blueprint.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "Character.hpp"
#include "Controller.hpp"
#include "DecalComponent.hpp"
#include "ForceFeedbackAttenuation.hpp"
#include "ForceFeedbackComponent.hpp"
#include "ForceFeedbackEffect.hpp"
#include "GameInstance.hpp"
#include "GameModeBase.hpp"
#include "GameStateBase.hpp"
#include "GameplayStatics.hpp"
#include "HitResult.hpp"
#include "LevelStreaming.hpp"
#include "MaterialInterface.hpp"
#include "ParticleSystem.hpp"
#include "ParticleSystemComponent.hpp"
#include "Pawn.hpp"
#include "PhysicalMaterial.hpp"
#include "PlayerCameraManager.hpp"
#include "PlayerController.hpp"
#include "PredictProjectilePathParams.hpp"
#include "PredictProjectilePathResult.hpp"
#include "PrimitiveComponent.hpp"
#include "ReverbEffect.hpp"
#include "SaveGame.hpp"
#include "SceneComponent.hpp"
#include "SoundAttenuation.hpp"
#include "SoundBase.hpp"
#include "SoundClass.hpp"
#include "SoundConcurrency.hpp"
#include "SoundMix.hpp"
#include "StaticMesh.hpp"
_Script_Engine::PlayerCameraManager* _Script_Engine::GameplayStatics::GetPlayerCameraManager(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex) {
    return;
}
_Script_Engine::AudioComponent* _Script_Engine::GameplayStatics::SpawnSoundAttached(_Script_Engine::SoundBase* Sound, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::GameplayStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameplayStatics");
    return result;
}
_Script_Engine::PlayerController* _Script_Engine::GameplayStatics::GetPlayerController(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex) {
    return;
}
int32_t _Script_Engine::GameplayStatics::GrassOverlappingSphereCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Vector CenterPosition, float Radius) {
    return;
}
bool _Script_Engine::GameplayStatics::SuggestProjectileVelocity_CustomArc(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& OutLaunchVelocity, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector EndPos, float OverrideGravityZ, float ArcParam) {
    return;
}
_Script_Engine::AudioComponent* _Script_Engine::GameplayStatics::SpawnSoundAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return;
}
void* _Script_Engine::GameplayStatics::ParseOption(void* Options, void* Key) {
    return;
}
_Script_Engine::ForceFeedbackComponent* _Script_Engine::GameplayStatics::SpawnForceFeedbackAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, _Script_Engine::ForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return;
}
_Script_Engine::AudioComponent* _Script_Engine::GameplayStatics::SpawnSound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return;
}
_Script_Engine::ForceFeedbackComponent* _Script_Engine::GameplayStatics::SpawnForceFeedbackAttached(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, _Script_Engine::ForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return;
}
_Script_CoreUObject::Object* _Script_Engine::GameplayStatics::SpawnObject(void* ObjectClass, _Script_CoreUObject::Object* Outer) {
    return;
}
_Script_Engine::ParticleSystemComponent* _Script_Engine::GameplayStatics::SpawnEmitterAttached(_Script_Engine::ParticleSystem* EmitterTemplate, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, void* LocationType, bool bAutoDestroy, void* PoolingMethod, bool bAbsoluteRotation) {
    return;
}
_Script_Engine::ParticleSystemComponent* _Script_Engine::GameplayStatics::SpawnEmitterAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ParticleSystem* EmitterTemplate, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, bool bAutoDestroy, void* PoolingMethod) {
    return;
}
void* _Script_Engine::GameplayStatics::GetPlatformName() {
    return;
}
_Script_Engine::DecalComponent* _Script_Engine::GameplayStatics::SpawnDecalAttached(_Script_Engine::MaterialInterface* DecalMaterial, _Script_CoreUObject::Vector DecalSize, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, float LifeSpan) {
    return;
}
_Script_Engine::LevelStreaming* _Script_Engine::GameplayStatics::GetStreamingLevel(_Script_CoreUObject::Object* WorldContextObject, void* PackageName) {
    return;
}
_Script_Engine::DecalComponent* _Script_Engine::GameplayStatics::SpawnDecalAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialInterface* DecalMaterial, _Script_CoreUObject::Vector DecalSize, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float LifeSpan) {
    return;
}
void _Script_Engine::GameplayStatics::SetWorldOriginLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::IntVector NewLocation) {
    return;
}
void _Script_Engine::GameplayStatics::SetSubtitlesEnabled(bool bEnabled) {
    return;
}
void _Script_Engine::GameplayStatics::SetSoundMixClassOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier, _Script_Engine::SoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
    return;
}
void _Script_Engine::GameplayStatics::SetPlayerControllerID(_Script_Engine::PlayerController* Player, int32_t ControllerId) {
    return;
}
void _Script_Engine::GameplayStatics::SetGlobalTimeDilation(_Script_CoreUObject::Object* WorldContextObject, float TimeDilation) {
    return;
}
void _Script_Engine::GameplayStatics::SetGlobalPitchModulation(_Script_CoreUObject::Object* WorldContextObject, float PitchModulation, float TimeSec) {
    return;
}
void _Script_Engine::GameplayStatics::SetGlobalListenerFocusParameters(_Script_CoreUObject::Object* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale) {
    return;
}
bool _Script_Engine::GameplayStatics::SetGameSuspended(_Script_CoreUObject::Object* WorldContextObject, bool bSuspended) {
    return;
}
bool _Script_Engine::GameplayStatics::SetGamePaused(_Script_CoreUObject::Object* WorldContextObject, bool bPaused) {
    return;
}
_Script_Engine::GameModeBase* _Script_Engine::GameplayStatics::GetGameMode(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::GameplayStatics::SetEnableWorldRendering(_Script_CoreUObject::Object* WorldContextObject, bool bEnable) {
    return;
}
float _Script_Engine::GameplayStatics::GetRealTimeSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::GameInstance* _Script_Engine::GameplayStatics::GetGameInstance(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::GameplayStatics::SetDevTimeDilation(_Script_CoreUObject::Object* WorldContextObject, float TimeDilation) {
    return;
}
void* _Script_Engine::GameplayStatics::GetObjectClass(_Script_CoreUObject::Object* Object) {
    return;
}
void _Script_Engine::GameplayStatics::SetBaseSoundMix(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMix) {
    return;
}
void _Script_Engine::GameplayStatics::SetActiveVolumetricLightmap(_Script_CoreUObject::Object* WorldContextObject, void* VolumetricLightmapName) {
    return;
}
void _Script_Engine::GameplayStatics::RemovePlayer(_Script_Engine::PlayerController* Player, bool bDestroyPawn) {
    return;
}
_Script_Engine::Character* _Script_Engine::GameplayStatics::GetPlayerCharacter(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::GameplayStatics::RebaseZeroOriginOntoLocal(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector WorldLocation) {
    return;
}
_Script_Engine::GameStateBase* _Script_Engine::GameplayStatics::GetGameState(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::GameplayStatics::RebaseLocalOriginOntoZero(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector WorldLocation) {
    return;
}
void _Script_Engine::GameplayStatics::GetKeyValue(void* Pair, void*& Key, void*& Value) {
    return;
}
void _Script_Engine::GameplayStatics::PushSoundMixModifier(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier) {
    return;
}
bool _Script_Engine::GameplayStatics::ProjectWorldToScreen(_Script_Engine::PlayerController* Player, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector2D& ScreenPosition, bool bPlayerViewportRelative) {
    return;
}
void _Script_Engine::GameplayStatics::PlaySoundAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, _Script_Engine::Actor* OwningActor) {
    return;
}
void _Script_Engine::GameplayStatics::PopSoundMixModifier(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier) {
    return;
}
void _Script_Engine::GameplayStatics::PlayWorldCameraShake(_Script_CoreUObject::Object* WorldContextObject, void* Shake, _Script_CoreUObject::Vector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
    return;
}
void _Script_Engine::GameplayStatics::PlaySound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, _Script_Engine::Actor* OwningActor) {
    return;
}
void* _Script_Engine::GameplayStatics::GetSurfaceType(_Script_Engine::HitResult& Hit) {
    return;
}
void _Script_Engine::GameplayStatics::OpenLevel(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, bool bAbsolute, void* Options) {
    return;
}
bool _Script_Engine::GameplayStatics::IsGamePaused(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameplayStatics::BeginSpawningActorFromBlueprint(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Blueprint* Blueprint, _Script_CoreUObject::Transform& SpawnTransform, bool bNoCollisionFail) {
    return;
}
_Script_Engine::HitResult _Script_Engine::GameplayStatics::MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector ImpactPoint, _Script_CoreUObject::Vector Normal, _Script_CoreUObject::Vector ImpactNormal, _Script_Engine::PhysicalMaterial* PhysMat, _Script_Engine::Actor* HitActor, _Script_Engine::PrimitiveComponent* HitComponent, void* HitBoneName, int32_t HitItem, int32_t FaceIndex, _Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, float PenetrationDepth) {
    return;
}
bool _Script_Engine::GameplayStatics::HasOption(void* Options, void* InKey) {
    return;
}
bool _Script_Engine::GameplayStatics::HasLaunchOption(void* OptionToCheck) {
    return;
}
_Script_CoreUObject::IntVector _Script_Engine::GameplayStatics::GetWorldOriginLocation(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::GameplayStatics::GetGlobalTimeDilation(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::GameplayStatics::GetWorldDeltaSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::GameplayStatics::GetUnpausedTimeSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::GameplayStatics::GetTimeSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::Pawn* _Script_Engine::GameplayStatics::GetPlayerPawn(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex) {
    return;
}
int32_t _Script_Engine::GameplayStatics::GetPlayerControllerID(_Script_Engine::PlayerController* Player) {
    return;
}
int32_t _Script_Engine::GameplayStatics::GetIntOption(void* Options, void* Key, int32_t DefaultValue) {
    return;
}
bool _Script_Engine::GameplayStatics::GetEnableWorldRendering(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::GameplayStatics::GetDevTimeDilation(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::ReverbEffect* _Script_Engine::GameplayStatics::GetCurrentReverbEffect(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_Engine::GameplayStatics::GetCurrentLevelName(_Script_CoreUObject::Object* WorldContextObject, bool bRemovePrefixString) {
    return;
}
float _Script_Engine::GameplayStatics::GetAudioTimeSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::GameplayStatics::GetAllActorsWithTag(_Script_CoreUObject::Object* WorldContextObject, void* Tag, void*& OutActors) {
    return;
}
void _Script_Engine::GameplayStatics::GetAllActorsWithInterface(_Script_CoreUObject::Object* WorldContextObject, void* Interface, void*& OutActors) {
    return;
}
void _Script_Engine::GameplayStatics::GetAllActorsOfClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, void*& OutActors) {
    return;
}
void _Script_Engine::GameplayStatics::GetActorArrayBounds(void*& Actors, bool bOnlyCollidingComponents, _Script_CoreUObject::Vector& Center, _Script_CoreUObject::Vector& BoxExtent) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::GameplayStatics::GetActorArrayAverageLocation(void*& Actors) {
    return;
}
void _Script_Engine::GameplayStatics::GetAccurateRealTime(_Script_CoreUObject::Object* WorldContextObject, int32_t& Seconds, float& PartialSeconds) {
    return;
}
void _Script_Engine::GameplayStatics::FlushLevelStreaming(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameplayStatics::FinishSpawningActor(_Script_Engine::Actor* Actor, _Script_CoreUObject::Transform& SpawnTransform) {
    return;
}
bool _Script_Engine::GameplayStatics::FindCollisionUV(_Script_Engine::HitResult& Hit, int32_t UVChannel, _Script_CoreUObject::Vector2D& UV) {
    return;
}
void _Script_Engine::GameplayStatics::ActivateReverbEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ReverbEffect* ReverbEffect, void* TagName, float Priority, float Volume, float FadeTime) {
    return;
}
void _Script_Engine::GameplayStatics::EnableLiveStreaming(bool enable) {
    return;
}
bool _Script_Engine::GameplayStatics::DeprojectScreenToWorld(_Script_Engine::PlayerController* Player, _Script_CoreUObject::Vector2D& ScreenPosition, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& WorldDirection) {
    return;
}
void _Script_Engine::GameplayStatics::DeactivateReverbEffect(_Script_CoreUObject::Object* WorldContextObject, void* TagName) {
    return;
}
_Script_Engine::AudioComponent* _Script_Engine::GameplayStatics::CreateSound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return;
}
_Script_Engine::SaveGame* _Script_Engine::GameplayStatics::CreateSaveGameObjectFromBlueprint(_Script_Engine::Blueprint* SaveGameBlueprint) {
    return;
}
_Script_Engine::SaveGame* _Script_Engine::GameplayStatics::CreateSaveGameObject(void* SaveGameClass) {
    return;
}
_Script_Engine::PlayerController* _Script_Engine::GameplayStatics::CreatePlayer(_Script_CoreUObject::Object* WorldContextObject, int32_t ControllerId, bool bSpawnPawn) {
    return;
}
void _Script_Engine::GameplayStatics::ClearSoundMixModifiers(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::GameplayStatics::ClearSoundMixClassOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier, _Script_Engine::SoundClass* InSoundClass, float FadeOutTime) {
    return;
}
void _Script_Engine::GameplayStatics::CancelAsyncLoading() {
    return;
}
void _Script_Engine::GameplayStatics::BreakHitResult(_Script_Engine::HitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector& ImpactPoint, _Script_CoreUObject::Vector& Normal, _Script_CoreUObject::Vector& ImpactNormal, _Script_Engine::PhysicalMaterial*& PhysMat, _Script_Engine::Actor*& HitActor, _Script_Engine::PrimitiveComponent*& HitComponent, void*& HitBoneName, int32_t& HitItem, int32_t& FaceIndex, _Script_CoreUObject::Vector& TraceStart, _Script_CoreUObject::Vector& TraceEnd, float& PenetrationDepth) {
    return;
}
bool _Script_Engine::GameplayStatics::BlueprintSuggestProjectileVelocity(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& TossVelocity, _Script_CoreUObject::Vector StartLocation, _Script_CoreUObject::Vector EndLocation, float LaunchSpeed, float OverrideGravityZ, void* TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
    return;
}
bool _Script_Engine::GameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& OutHit, void*& OutPathPositions, _Script_CoreUObject::Vector& OutLastTraceDestination, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector LaunchVelocity, bool bTracePath, float ProjectileRadius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    return;
}
bool _Script_Engine::GameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& OutHit, void*& OutPathPositions, _Script_CoreUObject::Vector& OutLastTraceDestination, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector LaunchVelocity, bool bTracePath, float ProjectileRadius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    return;
}
bool _Script_Engine::GameplayStatics::Blueprint_PredictProjectilePath_Advanced(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PredictProjectilePathParams& PredictParams, _Script_Engine::PredictProjectilePathResult& PredictResult) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameplayStatics::BeginSpawningActorFromClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_CoreUObject::Transform& SpawnTransform, bool bNoCollisionFail, _Script_Engine::Actor* Owner) {
    return;
}
_Script_Engine::Actor* _Script_Engine::GameplayStatics::BeginDeferredActorSpawnFromClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_CoreUObject::Transform& SpawnTransform, void* CollisionHandlingOverride, _Script_Engine::Actor* Owner) {
    return;
}
bool _Script_Engine::GameplayStatics::AreSubtitlesEnabled() {
    return;
}
bool _Script_Engine::GameplayStatics::AreAnyListenersWithinRange(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, float MaximumRange) {
    return;
}
bool _Script_Engine::GameplayStatics::ApplyRadialDamageWithFalloff(_Script_CoreUObject::Object* WorldContextObject, float BaseDamage, float MinimumDamage, _Script_CoreUObject::Vector& origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, void* DamagePreventionChannel) {
    return;
}
bool _Script_Engine::GameplayStatics::ApplyRadialDamage(_Script_CoreUObject::Object* WorldContextObject, float BaseDamage, _Script_CoreUObject::Vector& origin, float DamageRadius, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, bool bDoFullDamage, void* DamagePreventionChannel) {
    return;
}
float _Script_Engine::GameplayStatics::ApplyPointDamage(_Script_Engine::Actor* DamagedActor, float BaseDamage, _Script_CoreUObject::Vector& HitFromDirection, _Script_Engine::HitResult& HitInfo, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass) {
    return;
}
float _Script_Engine::GameplayStatics::ApplyDamage(_Script_Engine::Actor* DamagedActor, float BaseDamage, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass) {
    return;
}
