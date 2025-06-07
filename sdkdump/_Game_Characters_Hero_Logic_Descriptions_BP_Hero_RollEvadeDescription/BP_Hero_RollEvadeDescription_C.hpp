#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwDefenseState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Defense {
struct HC_Defense_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription {
#pragma pack(push, 1)
struct BP_Hero_RollEvadeDescription_C : public _Script_SwGame::SwDefenseState {
    private: char pad_130[0x18]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& get_HeroDefenseComponent();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void ExecuteUbergraph_BP_Hero_RollEvadeDescription(int32_t EntryPoint);
}; // Size: 0x148
#pragma pack(pop)
}
