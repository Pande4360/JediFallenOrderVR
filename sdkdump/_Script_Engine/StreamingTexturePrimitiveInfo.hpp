#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StreamingTexturePrimitiveInfo {
    private: char pad_0[0x30]; public:
    _Script_Engine::Texture2D*& get_Texture();
    void* get_Bounds();
    float& get_TexelFactor();
    void* get_PackedRelativeBox();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
