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
struct FormatArgumentData {
    private: char pad_0[0x40]; public:
    void* get_ArgumentName();
    void* get_ArgumentValueType();
    void* get_ArgumentValue();
    int32_t& get_ArgumentValueInt();
    float& get_ArgumentValueFloat();
    void* get_ArgumentValueGender();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
