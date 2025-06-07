#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BuildPatchServices {
#pragma pack(push, 1)
struct CustomFieldData {
    private: char pad_0[0x20]; public:
    void* get_Key();
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
