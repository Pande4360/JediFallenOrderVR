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
struct VirtualBone {
    private: char pad_0[0x18]; public:
    void* get_SourceBoneName();
    void* get_TargetBoneName();
    void* get_VirtualBoneName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
