#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic\BP_Hero_AttackDescription_Basic_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_TwinSpecial_Staff {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_TwinSpecial_Staff_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic::BP_Hero_AttackDescription_Basic_C {
    private: char pad_270[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_BP_Hero_AttackDescription_TwinSpecial_Staff(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
