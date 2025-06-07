#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Font : public _Script_CoreUObject::Object {
    private: char pad_28[0x1a8]; public:
    void* get_FontCacheType();
    void* get_Characters();
    void* get_Textures();
    int32_t& get_IsRemapped();
    float& get_EmScale();
    float& get_Ascent();
    float& get_Descent();
    float& get_Leading();
    int32_t& get_Kerning();
    void* get_ImportOptions();
    int32_t& get_NumCharacters();
    void* get_MaxCharHeight();
    float& get_ScalingFactor();
    int32_t& get_LegacyFontSize();
    void* get_LegacyFontName();
    void* get_CompositeFont();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
