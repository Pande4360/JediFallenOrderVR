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
struct UpdateLevelVisibilityLevelInfo {
    private: char pad_0[0x10]; public:
    void* get_PackageName();
    bool get_bIsVisible();
    void set_bIsVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
