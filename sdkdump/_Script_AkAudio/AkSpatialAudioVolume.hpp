#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_AkAudio {
struct AkSurfaceReflectorSetComponent;
}
namespace _Script_AkAudio {
struct AkLateReverbComponent;
}
namespace _Script_AkAudio {
struct AkRoomComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSpatialAudioVolume : public _Script_Engine::Volume {
    private: char pad_398[0x18]; public:
    _Script_AkAudio::AkSurfaceReflectorSetComponent*& get_SurfaceReflectorSet();
    _Script_AkAudio::AkLateReverbComponent*& get_LateReverb();
    _Script_AkAudio::AkRoomComponent*& get_Room();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}
