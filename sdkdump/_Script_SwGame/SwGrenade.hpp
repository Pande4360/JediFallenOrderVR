#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SwTKProjectileBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGrenade : public SwTKProjectileBase {
    private: char pad_388[0xa8]; public:
    float& get_BaseDamage();
    float& get_BlastRadius();
    void* get_HitEvent();
    bool get_bShouldSpawnActorOnExplode();
    void set_bShouldSpawnActorOnExplode(bool value);
    void* get_SpawnActorOnExplode();
    float& get_AutoExplodeTotalTime();
    bool get_bExplodesOnCollision();
    void set_bExplodesOnCollision(bool value);
    void* get_DamageFilterType();
    float& get_DelayOnDetonatedByExplosion();
    int32_t& get_Countdown();
    static _Script_CoreUObject::Class* static_class();
    void TryToExplode();
    void SetAttackTypeNames(void* ImpactEffect, void* AttackType);
    void OnPlayExplodeEffect();
    void OnGrenadeTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* InDamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnGrenadeHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void OnDisarmed();
    void OnCountdownTimeUp();
    void OnCountdownTicked();
    void OnCountdownBegan();
    void OnAutoExplodeTimeUp();
    void OnArmed();
    void NotifyOnTouchActor(_Script_Engine::Actor* OtherActor);
    void DropGrenade(bool bArmGrenade, float ArmDelay);
    void DisarmGrenade();
    void DeactivateCollision();
    void ArmGrenade(float Delay);
    void AddCollisionShape(_Script_Engine::PrimitiveComponent* CollisionComponent);
    void ActivateCollision();
}; // Size: 0x430
#pragma pack(pop)
}
