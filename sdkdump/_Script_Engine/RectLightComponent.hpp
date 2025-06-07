#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LocalLightComponent.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RectLightComponent : public LocalLightComponent {
    private: char pad_440[0x10]; public:
    float& get_SourceWidth();
    float& get_SourceHeight();
    _Script_Engine::Texture*& get_SourceTexture();
    static _Script_CoreUObject::Class* static_class();
    void SetSourceWidth(float bNewValue);
    void SetSourceHeight(float NewValue);
}; // Size: 0x450
#pragma pack(pop)
}
