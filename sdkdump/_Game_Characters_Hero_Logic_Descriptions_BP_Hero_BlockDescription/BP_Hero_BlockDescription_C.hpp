#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwPlayerDefenseState.hpp"
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Defense {
struct HC_Defense_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription {
#pragma pack(push, 1)
struct BP_Hero_BlockDescription_C : public _Script_SwGame::SwPlayerDefenseState {
    private: char pad_1a0[0x18]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& get_HC_Defense_REF();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime);
    void ExecuteUbergraph_BP_Hero_BlockDescription(int32_t EntryPoint);
}; // Size: 0x1b8
#pragma pack(pop)
}
