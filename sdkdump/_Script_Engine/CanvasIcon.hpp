#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CanvasIcon {
    private: char pad_0[0x18]; public:
    _Script_Engine::Texture*& get_Texture();
    float& get_U();
    float& get_V();
    float& get_UL();
    float& get_VL();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
