#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Basic_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x18]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    bool get_AttackButtonHeld();
    void set_AttackButtonHeld(bool value);
    int32_t& get_MeleeInputCount();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_CheckLightsaberSwitch();
    void ExecuteUbergraph_BP_Hero_AttackDescription_Basic(int32_t EntryPoint);
}; // Size: 0x270
#pragma pack(pop)
}
