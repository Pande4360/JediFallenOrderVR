#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAmbOverlapComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Component_Comp_SW_Amb_Overlap {
#pragma pack(push, 1)
struct Comp_SW_Amb_Overlap_C : public _Script_SwGame::SwAmbOverlapComponent {
    private: char pad_310[0x10]; public:
    void* get_UberGraphFrame();
    int32_t& get_CinematicCounter();
    bool get_IsInCinematic();
    void set_IsInCinematic(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void LVL_CinematicEnded_Event_0();
    void ExecuteUbergraph_Comp_SW_Amb_Overlap(int32_t EntryPoint);
}; // Size: 0x320
#pragma pack(pop)
}
