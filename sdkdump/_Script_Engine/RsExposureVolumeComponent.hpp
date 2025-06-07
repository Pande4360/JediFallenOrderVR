#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsExposureVolumeComponent : public SceneComponent {
    private: char pad_2d0[0x10]; public:
    float& get_ExposureOffset();
    float& get_VolumeRadius();
    float& get_FadeStart();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e0
#pragma pack(pop)
}
