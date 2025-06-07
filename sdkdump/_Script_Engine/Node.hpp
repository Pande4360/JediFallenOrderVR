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
struct Node {
    private: char pad_0[0x60]; public:
    void* get_Name();
    void* get_ParentName();
    void* get_Transform();
    void* get_DisplayName();
    bool get_bAdvanced();
    void set_bAdvanced(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
