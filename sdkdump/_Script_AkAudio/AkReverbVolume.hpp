#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_AkAudio {
struct AkLateReverbComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkReverbVolume : public _Script_Engine::Volume {
    private: char pad_398[0x38]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    _Script_AkAudio::AkAuxBus*& get_AuxBus();
    void* get_AuxBusName();
    float& get_SendLevel();
    float& get_FadeRate();
    float& get_Priority();
    _Script_AkAudio::AkLateReverbComponent*& get_LateReverbComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d0
#pragma pack(pop)
}
