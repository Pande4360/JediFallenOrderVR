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
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis {
#pragma pack(push, 1)
struct State_ForceTelekinesis_C : public _Script_SwGame::RsAbilityState {
    private: char pad_268[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    static _Script_CoreUObject::Class* static_class();
    void* OnDefenseSuccess0(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser);
    void OnNavStateChange(void* NewState, void* PrevState);
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_State_ForceTelekinesis(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
