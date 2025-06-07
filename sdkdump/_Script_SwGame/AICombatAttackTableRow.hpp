#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CombatAttackTableRow.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct AICombatAttackTableRow : public CombatAttackTableRow {
    private: char pad_b8[0x20]; public:
    void* get_MontageSection();
    bool get_StopChainAfterHit();
    void set_StopChainAfterHit(bool value);
    bool get_SkipParryReaction();
    void set_SkipParryReaction(bool value);
    void* get_ForceAbility();
    void* get_ForcePushAIChance();
    void* get_AltAttackAIChance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
