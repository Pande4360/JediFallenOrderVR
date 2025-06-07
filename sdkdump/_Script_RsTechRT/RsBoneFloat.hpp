#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsBoneFloat {
    private: char pad_0[0x20]; public:
    void* get_BoneReference();
    float& get_Value();
    bool get_bOverrideChildren();
    void set_bOverrideChildren(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
