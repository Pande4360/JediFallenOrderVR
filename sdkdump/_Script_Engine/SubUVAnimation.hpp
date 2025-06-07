#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SubUVAnimation : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    _Script_Engine::Texture2D*& get_SubUVTexture();
    int32_t& get_SubImages_Horizontal();
    int32_t& get_SubImages_Vertical();
    void* get_BoundingMode();
    void* get_OpacitySourceMode();
    float& get_AlphaThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
