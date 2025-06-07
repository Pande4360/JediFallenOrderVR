#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VirtualTextureLayer {
    private: char pad_0[0x4]; public:
    void* get_Format();
    bool get_bCompressed();
    void set_bCompressed(bool value);
    bool get_bHasAlpha();
    void set_bHasAlpha(bool value);
    void* get_CompressionSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
