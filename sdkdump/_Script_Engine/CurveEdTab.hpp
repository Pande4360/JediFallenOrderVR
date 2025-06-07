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
struct CurveEdTab {
    private: char pad_0[0x30]; public:
    void* get_TabName();
    void* get_Curves();
    float& get_ViewStartInput();
    float& get_ViewEndInput();
    float& get_ViewStartOutput();
    float& get_ViewEndOutput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
