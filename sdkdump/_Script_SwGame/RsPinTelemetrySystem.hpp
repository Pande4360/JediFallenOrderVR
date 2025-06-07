#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsPinTelemetrySystem : public _Script_CoreUObject::Object {
    private: char pad_28[0xe10]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnPlayerUsedAbility(void* AbilityType, _Script_Engine::Actor* Target, bool bHasSucceeded);
    void OnPlayerPawnChanged(_Script_Engine::Pawn* NewPawn);
    void OnHeroUpgradesChanged(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewFlags);
}; // Size: 0xe38
#pragma pack(pop)
}
