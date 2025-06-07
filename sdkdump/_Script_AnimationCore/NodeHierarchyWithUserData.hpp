#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct NodeHierarchyWithUserData {
    private: char pad_0[0x78]; public:
    void* get_Hierarchy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
