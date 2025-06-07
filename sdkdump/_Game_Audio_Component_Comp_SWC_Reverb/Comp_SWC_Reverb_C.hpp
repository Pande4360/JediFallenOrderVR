#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AkAudio\AkLateReverbComponent.hpp"
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Component_Comp_SWC_Reverb {
#pragma pack(push, 1)
struct Comp_SWC_Reverb_C : public _Script_AkAudio::AkLateReverbComponent {
    private: char pad_310[0x20]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkAuxBus*& get_Reverb();
    float& get_Send_Level();
    float& get_Fade_Rate();
    float& get_Priority_Of_Reverb();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Comp_SWC_Reverb(int32_t EntryPoint);
}; // Size: 0x330
#pragma pack(pop)
}
