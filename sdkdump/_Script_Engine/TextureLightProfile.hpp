#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextureLightProfile : public Texture2D {
    private: char pad_e8[0x18]; public:
    float& get_Brightness();
    float& get_TextureMultiplier();
    float& get_SpotlightConeAngle();
    float& get_SourceRadius();
    float& get_SourceLength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
