#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_AkAudio {
struct AkAcousticTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSpotReflector : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    _Script_AkAudio::AkAuxBus*& get_AuxBus();
    void* get_AuxBusName();
    _Script_AkAudio::AkAcousticTexture*& get_AcousticTexture();
    float& get_DistanceScalingFactor();
    float& get_Level();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x390
#pragma pack(pop)
}
