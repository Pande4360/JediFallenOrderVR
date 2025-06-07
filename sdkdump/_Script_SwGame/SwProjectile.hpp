#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_RsGameTechRT\RsProjectile.hpp"
namespace _Script_Engine {
struct ProjectileMovementComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwProjectileSpreadingData;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwProjectile : public _Script_RsGameTechRT::RsProjectile {
    private: char pad_360[0x148]; public:
    _Script_Engine::ProjectileMovementComponent*& get_ProjectileMovement();
    _Script_AkAudio::AkComponent*& get_AkComponentForRemaingSounds();
    float& get_MaxTravelDistance();
    void* get_ProjectileFX();
    _Script_Engine::Actor*& get_ShootTarget();
    _Script_Engine::Actor*& get_ProjectileOwner();
    _Script_SwGame::SwProjectileSpreadingData*& get_SpreadingData();
    _Script_Engine::SceneComponent*& get_AttachToMuzzleComponent();
    void* get_ProjectileType();
    bool get_bIsCheap();
    void set_bIsCheap(bool value);
    bool get_bShouldUseCheapMovement();
    void set_bShouldUseCheapMovement(bool value);
    bool get_bShouldCheckDistanceToTarget();
    void set_bShouldCheckDistanceToTarget(bool value);
    float& get_DistanceToTarget();
    bool get_bShouldCheckDistanceDoDamageToTarget();
    void set_bShouldCheckDistanceDoDamageToTarget(bool value);
    bool get_bShouldUseRayCast();
    void set_bShouldUseRayCast(bool value);
    bool get_bShouldPlayImpact();
    void set_bShouldPlayImpact(bool value);
    bool get_bShouldUseCheapFlyby();
    void set_bShouldUseCheapFlyby(bool value);
    _Script_Engine::ParticleSystemComponent*& get_ProjectileVisual();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector TrackingShotVector(_Script_Engine::Actor* HitTarget, _Script_CoreUObject::Vector Offset);
    void SetReflectionCollision(_Script_Engine::PrimitiveComponent* InCollisionComponent);
    void SetProjectileCollision(_Script_Engine::PrimitiveComponent* InCollisionComponent);
    void SetAttackTypeName(void* InTypeName);
    void PostProjectileCollisionEvent(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnReflectionCollisionEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnReflectionCollisionBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnProjectileHitActor(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    bool HasBeenReflected();
    bool HasBeenDeflected();
    float GetInitialSpeed();
    _Script_RsGameTechRT::RsHitEvent GetHitEvent();
    void ExecuteReflectBehavior(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator);
    void ExecuteDeflectBehavior(_Script_RsGameTechRT::RsCharacter* DeflectionInstigator);
    bool CheckHitActorReflection(_Script_RsGameTechRT::RsCharacter* OtherActor);
}; // Size: 0x4a8
#pragma pack(pop)
}
