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
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Switch_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    static _Script_CoreUObject::Class* static_class();
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_BP_Hero_AttackDescription_Switch(int32_t EntryPoint);
}; // Size: 0x268
#pragma pack(pop)
}
