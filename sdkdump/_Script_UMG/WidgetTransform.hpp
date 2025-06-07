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
struct WidgetTransform {
    private: char pad_0[0x1c]; public:
    void* get_Translation();
    void* get_Scale();
    void* get_Shear();
    float& get_Angle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
