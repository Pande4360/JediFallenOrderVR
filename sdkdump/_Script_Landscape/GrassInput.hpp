#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Landscape {
struct LandscapeGrassType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct GrassInput {
    private: char pad_0[0x28]; public:
    void* get_Name();
    _Script_Landscape::LandscapeGrassType*& get_GrassType();
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
