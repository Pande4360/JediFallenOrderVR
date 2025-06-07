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
struct CanvasUVTri {
    private: char pad_0[0x60]; public:
    void* get_V0_Pos();
    void* get_V0_UV();
    void* get_V0_Color();
    void* get_V1_Pos();
    void* get_V1_UV();
    void* get_V1_Color();
    void* get_V2_Pos();
    void* get_V2_UV();
    void* get_V2_Color();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
