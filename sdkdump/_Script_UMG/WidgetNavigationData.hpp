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
struct WidgetNavigationData {
    private: char pad_0[0x28]; public:
    void* get_Rule();
    void* get_WidgetToFocus();
    void* get_Widget();
    void* get_CustomDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
