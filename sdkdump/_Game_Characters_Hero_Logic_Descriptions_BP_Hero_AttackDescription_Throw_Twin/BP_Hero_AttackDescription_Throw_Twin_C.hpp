#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw\BP_Hero_AttackDescription_Throw_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Throw_Twin_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C {
    private: char pad_280[0x10]; public:
    void* get_UberGraphFrame0();
    bool get_Thrown();
    void set_Thrown(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_ThrowTwin();
    void Start_Catch_Twin();
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void Clean_Up();
    void ExecuteUbergraph_BP_Hero_AttackDescription_Throw_Twin(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
