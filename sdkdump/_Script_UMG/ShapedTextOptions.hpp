#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ShapedTextOptions {
    private: char pad_0[0x3]; public:
    bool get_bOverride_TextShapingMethod();
    void set_bOverride_TextShapingMethod(bool value);
    bool get_bOverride_TextFlowDirection();
    void set_bOverride_TextFlowDirection(bool value);
    void* get_TextShapingMethod();
    void* get_TextFlowDirection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
