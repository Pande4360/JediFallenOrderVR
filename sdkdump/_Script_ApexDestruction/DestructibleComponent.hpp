#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SkinnedMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
struct DestructibleMesh;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleComponent : public _Script_Engine::SkinnedMeshComponent {
    private: char pad_d40[0xf0]; public:
    bool get_bFractureEffectOverride();
    void set_bFractureEffectOverride(bool value);
    void* get_FractureEffects();
    bool get_bEnableHardSleeping();
    void set_bEnableHardSleeping(bool value);
    float& get_LargeChunkThreshold();
    void* get_OnComponentFracture();
    static _Script_CoreUObject::Class* static_class();
    void SetDestructibleMesh(_Script_ApexDestruction::DestructibleMesh* NewMesh);
    _Script_ApexDestruction::DestructibleMesh* GetDestructibleMesh();
    void ApplyRadiusDamage(float BaseDamage, _Script_CoreUObject::Vector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    void ApplyDamage(float DamageAmount, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& ImpulseDir, float ImpulseStrength);
}; // Size: 0xe30
#pragma pack(pop)
}
