#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBoneTarget {
    private: char pad_0[0x28]; public:
    float& get_Alpha();
    void* get_PositionComponentSpace();
    void* get_RotationComponentSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
