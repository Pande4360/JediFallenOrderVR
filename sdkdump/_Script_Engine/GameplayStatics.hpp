#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "HitResult.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ReverbEffect;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct ForceFeedbackAttenuation;
}
namespace _Script_Engine {
struct ForceFeedbackComponent;
}
namespace _Script_Engine {
struct Blueprint;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct LevelStreaming;
}
namespace _Script_Engine {
struct PredictProjectilePathResult;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct SoundMix;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Character;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct GameModeBase;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Engine {
struct PredictProjectilePathParams;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameplayStatics : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool SuggestProjectileVelocity_CustomArc(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& OutLaunchVelocity, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector EndPos, float OverrideGravityZ, float ArcParam);
    _Script_Engine::AudioComponent* SpawnSoundAttached(_Script_Engine::SoundBase* Sound, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    _Script_Engine::AudioComponent* SpawnSoundAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    _Script_Engine::AudioComponent* SpawnSound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    _Script_CoreUObject::Object* SpawnObject(void* ObjectClass, _Script_CoreUObject::Object* Outer);
    _Script_Engine::ForceFeedbackComponent* SpawnForceFeedbackAttached(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, _Script_Engine::ForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    _Script_Engine::ForceFeedbackComponent* SpawnForceFeedbackAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, _Script_Engine::ForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    _Script_Engine::ParticleSystemComponent* SpawnEmitterAttached(_Script_Engine::ParticleSystem* EmitterTemplate, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, void* LocationType, bool bAutoDestroy, void* PoolingMethod, bool bAbsoluteRotation);
    _Script_Engine::ParticleSystemComponent* SpawnEmitterAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ParticleSystem* EmitterTemplate, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, bool bAutoDestroy, void* PoolingMethod);
    _Script_Engine::DecalComponent* SpawnDecalAttached(_Script_Engine::MaterialInterface* DecalMaterial, _Script_CoreUObject::Vector DecalSize, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, float LifeSpan);
    _Script_Engine::DecalComponent* SpawnDecalAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialInterface* DecalMaterial, _Script_CoreUObject::Vector DecalSize, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float LifeSpan);
    void SetWorldOriginLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::IntVector NewLocation);
    void SetSubtitlesEnabled(bool bEnabled);
    void SetSoundMixClassOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier, _Script_Engine::SoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
    void SetPlayerControllerID(_Script_Engine::PlayerController* Player, int32_t ControllerId);
    void SetGlobalTimeDilation(_Script_CoreUObject::Object* WorldContextObject, float TimeDilation);
    void SetGlobalPitchModulation(_Script_CoreUObject::Object* WorldContextObject, float PitchModulation, float TimeSec);
    void SetGlobalListenerFocusParameters(_Script_CoreUObject::Object* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
    bool SetGameSuspended(_Script_CoreUObject::Object* WorldContextObject, bool bSuspended);
    bool SetGamePaused(_Script_CoreUObject::Object* WorldContextObject, bool bPaused);
    void SetEnableWorldRendering(_Script_CoreUObject::Object* WorldContextObject, bool bEnable);
    void SetDevTimeDilation(_Script_CoreUObject::Object* WorldContextObject, float TimeDilation);
    void SetBaseSoundMix(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMix);
    void SetActiveVolumetricLightmap(_Script_CoreUObject::Object* WorldContextObject, void* VolumetricLightmapName);
    void RemovePlayer(_Script_Engine::PlayerController* Player, bool bDestroyPawn);
    _Script_CoreUObject::Vector RebaseZeroOriginOntoLocal(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector WorldLocation);
    _Script_CoreUObject::Vector RebaseLocalOriginOntoZero(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector WorldLocation);
    void PushSoundMixModifier(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier);
    bool ProjectWorldToScreen(_Script_Engine::PlayerController* Player, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector2D& ScreenPosition, bool bPlayerViewportRelative);
    void PopSoundMixModifier(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier);
    void PlayWorldCameraShake(_Script_CoreUObject::Object* WorldContextObject, void* Shake, _Script_CoreUObject::Vector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    void PlaySoundAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundAttenuation* AttenuationSettings, _Script_Engine::SoundConcurrency* ConcurrencySettings, _Script_Engine::Actor* OwningActor);
    void PlaySound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, _Script_Engine::Actor* OwningActor);
    void* ParseOption(void* Options, void* Key);
    void OpenLevel(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, bool bAbsolute, void* Options);
    _Script_Engine::HitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector ImpactPoint, _Script_CoreUObject::Vector Normal, _Script_CoreUObject::Vector ImpactNormal, _Script_Engine::PhysicalMaterial* PhysMat, _Script_Engine::Actor* HitActor, _Script_Engine::PrimitiveComponent* HitComponent, void* HitBoneName, int32_t HitItem, int32_t FaceIndex, _Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, float PenetrationDepth);
    bool IsGamePaused(_Script_CoreUObject::Object* WorldContextObject);
    bool HasOption(void* Options, void* InKey);
    bool HasLaunchOption(void* OptionToCheck);
    int32_t GrassOverlappingSphereCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Vector CenterPosition, float Radius);
    _Script_CoreUObject::IntVector GetWorldOriginLocation(_Script_CoreUObject::Object* WorldContextObject);
    float GetWorldDeltaSeconds(_Script_CoreUObject::Object* WorldContextObject);
    float GetUnpausedTimeSeconds(_Script_CoreUObject::Object* WorldContextObject);
    float GetTimeSeconds(_Script_CoreUObject::Object* WorldContextObject);
    void* GetSurfaceType(_Script_Engine::HitResult& Hit);
    _Script_Engine::LevelStreaming* GetStreamingLevel(_Script_CoreUObject::Object* WorldContextObject, void* PackageName);
    float GetRealTimeSeconds(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::Pawn* GetPlayerPawn(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex);
    int32_t GetPlayerControllerID(_Script_Engine::PlayerController* Player);
    _Script_Engine::PlayerController* GetPlayerController(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex);
    _Script_Engine::Character* GetPlayerCharacter(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex);
    _Script_Engine::PlayerCameraManager* GetPlayerCameraManager(_Script_CoreUObject::Object* WorldContextObject, int32_t PlayerIndex);
    void* GetPlatformName();
    void* GetObjectClass(_Script_CoreUObject::Object* Object);
    void GetKeyValue(void* Pair, void*& Key, void*& Value);
    int32_t GetIntOption(void* Options, void* Key, int32_t DefaultValue);
    float GetGlobalTimeDilation(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::GameStateBase* GetGameState(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::GameModeBase* GetGameMode(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::GameInstance* GetGameInstance(_Script_CoreUObject::Object* WorldContextObject);
    bool GetEnableWorldRendering(_Script_CoreUObject::Object* WorldContextObject);
    float GetDevTimeDilation(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::ReverbEffect* GetCurrentReverbEffect(_Script_CoreUObject::Object* WorldContextObject);
    void* GetCurrentLevelName(_Script_CoreUObject::Object* WorldContextObject, bool bRemovePrefixString);
    float GetAudioTimeSeconds(_Script_CoreUObject::Object* WorldContextObject);
    void GetAllActorsWithTag(_Script_CoreUObject::Object* WorldContextObject, void* Tag, void*& OutActors);
    void GetAllActorsWithInterface(_Script_CoreUObject::Object* WorldContextObject, void* Interface, void*& OutActors);
    void GetAllActorsOfClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, void*& OutActors);
    void GetActorArrayBounds(void*& Actors, bool bOnlyCollidingComponents, _Script_CoreUObject::Vector& Center, _Script_CoreUObject::Vector& BoxExtent);
    _Script_CoreUObject::Vector GetActorArrayAverageLocation(void*& Actors);
    void GetAccurateRealTime(_Script_CoreUObject::Object* WorldContextObject, int32_t& Seconds, float& PartialSeconds);
    void FlushLevelStreaming(_Script_CoreUObject::Object* WorldContextObject);
    _Script_Engine::Actor* FinishSpawningActor(_Script_Engine::Actor* Actor, _Script_CoreUObject::Transform& SpawnTransform);
    bool FindCollisionUV(_Script_Engine::HitResult& Hit, int32_t UVChannel, _Script_CoreUObject::Vector2D& UV);
    void EnableLiveStreaming(bool enable);
    bool DeprojectScreenToWorld(_Script_Engine::PlayerController* Player, _Script_CoreUObject::Vector2D& ScreenPosition, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& WorldDirection);
    void DeactivateReverbEffect(_Script_CoreUObject::Object* WorldContextObject, void* TagName);
    _Script_Engine::AudioComponent* CreateSound2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, _Script_Engine::SoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    _Script_Engine::SaveGame* CreateSaveGameObjectFromBlueprint(_Script_Engine::Blueprint* SaveGameBlueprint);
    _Script_Engine::SaveGame* CreateSaveGameObject(void* SaveGameClass);
    _Script_Engine::PlayerController* CreatePlayer(_Script_CoreUObject::Object* WorldContextObject, int32_t ControllerId, bool bSpawnPawn);
    void ClearSoundMixModifiers(_Script_CoreUObject::Object* WorldContextObject);
    void ClearSoundMixClassOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundMix* InSoundMixModifier, _Script_Engine::SoundClass* InSoundClass, float FadeOutTime);
    void CancelAsyncLoading();
    void BreakHitResult(_Script_Engine::HitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector& ImpactPoint, _Script_CoreUObject::Vector& Normal, _Script_CoreUObject::Vector& ImpactNormal, _Script_Engine::PhysicalMaterial*& PhysMat, _Script_Engine::Actor*& HitActor, _Script_Engine::PrimitiveComponent*& HitComponent, void*& HitBoneName, int32_t& HitItem, int32_t& FaceIndex, _Script_CoreUObject::Vector& TraceStart, _Script_CoreUObject::Vector& TraceEnd, float& PenetrationDepth);
    bool BlueprintSuggestProjectileVelocity(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& TossVelocity, _Script_CoreUObject::Vector StartLocation, _Script_CoreUObject::Vector EndLocation, float LaunchSpeed, float OverrideGravityZ, void* TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    bool Blueprint_PredictProjectilePath_ByTraceChannel(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& OutHit, void*& OutPathPositions, _Script_CoreUObject::Vector& OutLastTraceDestination, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector LaunchVelocity, bool bTracePath, float ProjectileRadius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_ByObjectType(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::HitResult& OutHit, void*& OutPathPositions, _Script_CoreUObject::Vector& OutLastTraceDestination, _Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector LaunchVelocity, bool bTracePath, float ProjectileRadius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_Advanced(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PredictProjectilePathParams& PredictParams, _Script_Engine::PredictProjectilePathResult& PredictResult);
    _Script_Engine::Actor* BeginSpawningActorFromClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_CoreUObject::Transform& SpawnTransform, bool bNoCollisionFail, _Script_Engine::Actor* Owner);
    _Script_Engine::Actor* BeginSpawningActorFromBlueprint(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Blueprint* Blueprint, _Script_CoreUObject::Transform& SpawnTransform, bool bNoCollisionFail);
    _Script_Engine::Actor* BeginDeferredActorSpawnFromClass(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_CoreUObject::Transform& SpawnTransform, void* CollisionHandlingOverride, _Script_Engine::Actor* Owner);
    bool AreSubtitlesEnabled();
    bool AreAnyListenersWithinRange(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, float MaximumRange);
    bool ApplyRadialDamageWithFalloff(_Script_CoreUObject::Object* WorldContextObject, float BaseDamage, float MinimumDamage, _Script_CoreUObject::Vector& origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, void* DamagePreventionChannel);
    bool ApplyRadialDamage(_Script_CoreUObject::Object* WorldContextObject, float BaseDamage, _Script_CoreUObject::Vector& origin, float DamageRadius, void* DamageTypeClass, void*& IgnoreActors, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* InstigatedByController, bool bDoFullDamage, void* DamagePreventionChannel);
    float ApplyPointDamage(_Script_Engine::Actor* DamagedActor, float BaseDamage, _Script_CoreUObject::Vector& HitFromDirection, _Script_Engine::HitResult& HitInfo, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass);
    float ApplyDamage(_Script_Engine::Actor* DamagedActor, float BaseDamage, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser, void* DamageTypeClass);
    void ActivateReverbEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::ReverbEffect* ReverbEffect, void* TagName, float Priority, float Volume, float FadeTime);
}; // Size: 0x28
#pragma pack(pop)
}
