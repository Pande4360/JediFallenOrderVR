#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDestructionTestsComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x28]; public:
    _Script_Engine::AnimationAsset*& get_AnimationToPlay01();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteDestructionTestScenario02_PhysicsAsset(void* ActorNamePrefix, float DelayBeforeStartingPhysics);
    void ExecuteDestructionTestScenario01_APEXDestruction(void* ActorNamePrefix, float BaseDamage, float DamageRadius, float ImpulseStrength, bool bFullDamage);
}; // Size: 0x198
#pragma pack(pop)
}
