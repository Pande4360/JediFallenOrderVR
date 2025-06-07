#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_ComponentOptimizationParameters {
    private: char pad_0[0x28]; public:
    void* get_ComponentName();
    bool get_HideBoneOnFirstCollision();
    void set_HideBoneOnFirstCollision(bool value);
    int32_t& get_HideBoneAfterNumberCollisionHits();
    _Script_Engine::ParticleSystem*& get_ParticleToSpawnAfterHidingBone();
    int32_t& get_SpawnOnlyEveryNthParticle();
    float& get_MinimumTimeBetweenSpawningParticles();
    float& get_TimeToHideAllBonesAndDeactivateComponent();
    bool get_HideComponentAfterDeactivation();
    void set_HideComponentAfterDeactivation(bool value);
    bool get_DisableAllCollisionsAfterDeactivation();
    void set_DisableAllCollisionsAfterDeactivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
