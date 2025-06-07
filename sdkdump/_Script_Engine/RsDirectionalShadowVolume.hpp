#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_Engine {
struct RsDirectionalShadowVolumeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsDirectionalShadowVolume : public Volume {
    private: char pad_398[0x8]; public:
    _Script_Engine::RsDirectionalShadowVolumeComponent*& get_DirectionalShadowVolumeComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
