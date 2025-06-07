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
struct GeomSelection {
    private: char pad_0[0xc]; public:
    int32_t& get_Type();
    int32_t& get_Index();
    int32_t& get_SelectionIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
