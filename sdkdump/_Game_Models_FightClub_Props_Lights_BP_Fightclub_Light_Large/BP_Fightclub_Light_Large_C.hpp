#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Game_Audio_Component_Comp_Audio_Actor_Continuous {
struct Comp_Audio_Actor_Continuous_C;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_FightClub_Props_Lights_BP_Fightclub_Light_Large {
#pragma pack(push, 1)
struct BP_Fightclub_Light_Large_C : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x10]; public:
    _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C*& get_Comp_Audio_Actor_Continuous();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x380
#pragma pack(pop)
}
