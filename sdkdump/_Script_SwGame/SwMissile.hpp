#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SwTKProjectileBase.hpp"
namespace _Script_SwGame {
struct SwMissileMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMissile : public SwTKProjectileBase {
    private: char pad_388[0x80]; public:
    bool get_bSpawnUnarmed();
    void set_bSpawnUnarmed(bool value);
    float& get_BaseDamage();
    float& get_BlastRadius();
    void* get_HitEvent();
    float& get_AutoExplodeTotalTime();
    bool get_bIsHomingMissile();
    void set_bIsHomingMissile(bool value);
    float& get_HomingDuration();
    float& get_MissileArmDistance();
    float& get_MissileNotificationRadius();
    _Script_SwGame::SwMissileMovementComponent*& get_MissileMovement();
    static _Script_CoreUObject::Class* static_class();
    void TryToExplode(bool bCollidedWithActor, void* SurfaceType, _Script_Engine::HitResult& Hit);
    void SetMissileAlive(bool bIsAlive);
    void SetAttackTypeNames(void* ImpactEffect, void* AttackType);
    void OnPlayStopSound();
    void OnPlayStartSound();
    void OnPlayHitActorEffect();
    void OnMissileHit(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* OtherActor, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void OnMissileDeflected(_Script_CoreUObject::Vector& NewDirection, void*& CharactersInTrajectory);
    void OnLaunched();
    void OnDisarmed();
    void OnAutoExplodeTimeUp();
    void OnArmed();
    void LaunchMissileInDirection(float InMissileArmDistance, bool bIsHoming, _Script_CoreUObject::Vector InDirection);
    void LaunchMissile(float InMissileArmDistance, bool bIsHoming);
    bool IsMissileAlive();
    void DisarmMissile();
    void DeactivateCollision();
    void ArmMissile();
    void ActivateCollision();
}; // Size: 0x408
#pragma pack(pop)
}
