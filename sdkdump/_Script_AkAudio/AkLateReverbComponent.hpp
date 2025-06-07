#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkLateReverbComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x40]; public:
    bool get_bEnable();
    void set_bEnable(bool value);
    _Script_AkAudio::AkAuxBus*& get_AuxBus();
    void* get_AuxBusName();
    float& get_SendLevel();
    float& get_FadeRate();
    float& get_Priority();
    _Script_AkAudio::AkLateReverbComponent*& get_NextLowerPriorityComponent();
    static _Script_CoreUObject::Class* static_class();
    void EnableReverb();
    void DisableReverb();
}; // Size: 0x310
#pragma pack(pop)
}
