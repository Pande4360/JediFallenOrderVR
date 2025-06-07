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
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Saber {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Basic_Saber_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic::BP_Hero_AttackDescription_Basic_C {
    static _Script_CoreUObject::Class* static_class();
    void OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData);
}; // Size: 0x270
#pragma pack(pop)
}
