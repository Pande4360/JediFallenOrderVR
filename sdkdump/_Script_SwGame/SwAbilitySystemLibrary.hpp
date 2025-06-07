#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAbilitySystemLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void TriggerAbilityWithHighestAcquiredUpgrade(_Script_Engine::Actor* Target, void* AbilityType, bool bIsHeld);
    void TriggerAbility(_Script_Engine::Actor* Target, void* AbilityType, void* UpgradeLevel, bool bIsHeld);
    void SetZTargetForAbilities(_Script_Engine::Actor* WorldContextObject, _Script_Engine::Actor* ZTargetActor);
    bool IsEffectActiveOnVictim(void* EffectType, _Script_Engine::Actor* Target);
    bool IsAbilityTriggered(_Script_Engine::Actor* Actor, void* AbilityType);
    int32_t GetEffectCountActiveOnVictim(void* EffectType, _Script_Engine::Actor* Target);
    void* GetAbilityUpgradeLevel(_Script_Engine::Actor* Target, void* AbilityType);
    int32_t DeactivateEffectFromVictim(void* EffectType, _Script_Engine::Actor* Target);
    int32_t DeactivateAllEffectsInWorld(_Script_Engine::Actor* WorldContextObject);
    void DeactivateAbilityFromTarget(void* AbilityType, _Script_Engine::Actor* Target);
    void ApplyForcePushEffectOnVictim(void* EffectType, _Script_Engine::Actor* Victim, _Script_CoreUObject::Vector DirectionVector, float Strength, float DurationMultiplier);
}; // Size: 0x28
#pragma pack(pop)
}
