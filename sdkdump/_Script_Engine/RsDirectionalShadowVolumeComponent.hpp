#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsDirectionalShadowVolumeComponent : public PrimitiveComponent {
    private: char pad_b30[0x10]; public:
    float& get_UnitsPerPixel();
    float& get_DepthBias();
    float& get_EdgeFade();
    bool get_bInteriorNoShadow();
    void set_bInteriorNoShadow(bool value);
    void* get_CalculatedResolution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb40
#pragma pack(pop)
}
