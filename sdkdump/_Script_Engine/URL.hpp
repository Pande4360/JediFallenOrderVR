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
struct URL {
    private: char pad_0[0x70]; public:
    void* get_Protocol();
    void* get_Host();
    int32_t& get_Port();
    void* get_Map();
    void* get_RedirectURL();
    void* get_Op();
    void* get_Portal();
    int32_t& get_Valid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
