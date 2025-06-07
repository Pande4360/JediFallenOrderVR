#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIGameStateSettings {
    private: char pad_0[0x14]; public:
    float& get_PreCombatCooldown();
    float& get_PostCombatCooldown();
    float& get_MinTimeUntilTranquilityAchievedEvent();
    float& get_MaxTimeUntilTranquilityAchievedEvent();
    float& get_DistanceToAggroEnemiesToRemainInCombat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
