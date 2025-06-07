#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_DFA_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x20]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_RsGameTechRT::RsCharacter*& get_Target();
    void* get_SavedLightsaberType();
    static _Script_CoreUObject::Class* static_class();
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void Reset_Lightsaber_Type();
    void CombatNotify_ResetToStaff();
    void CombatNotify_SwitchToSaber();
    void ExecuteUbergraph_BP_Hero_AttackDescription_DFA(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
