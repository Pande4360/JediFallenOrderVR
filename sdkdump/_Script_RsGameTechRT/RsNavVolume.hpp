#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_RsGameTechRT {
struct RsNavCurrentComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNavVolume : public _Script_Engine::Volume {
    private: char pad_398[0x28]; public:
    _Script_RsGameTechRT::RsNavCurrentComponent*& get_current();
    void* get_VolumeColor();
    bool get_ShowInGame();
    void set_ShowInGame(bool value);
    bool get_bRsNavVolumeShouldAlwaysDrawSolid();
    void set_bRsNavVolumeShouldAlwaysDrawSolid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c0
#pragma pack(pop)
}
