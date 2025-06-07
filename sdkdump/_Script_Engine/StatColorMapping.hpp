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
struct StatColorMapping {
    private: char pad_0[0x28]; public:
    void* get_StatName();
    void* get_ColorMap();
    bool get_DisableBlend();
    void set_DisableBlend(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
