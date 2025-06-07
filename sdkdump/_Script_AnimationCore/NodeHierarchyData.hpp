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
struct NodeHierarchyData {
    private: char pad_0[0x70]; public:
    void* get_Nodes();
    void* get_Transforms();
    void* get_NodeNameToIndexMapping();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
