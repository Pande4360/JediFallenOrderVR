#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\RsAbilityState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters__Shared_Abilities_States_State_ForceSlow {
#pragma pack(push, 1)
struct State_ForceSlow_C : public _Script_SwGame::RsAbilityState {
    private: char pad_268[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    static _Script_CoreUObject::Class* static_class();
    void CombatNotify_EndForceSlowEarly();
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_State_ForceSlow(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
