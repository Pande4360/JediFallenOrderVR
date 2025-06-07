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
struct SkeletonToMeshLinkup {
    private: char pad_0[0x20]; public:
    void* get_SkeletonToMeshTable();
    void* get_MeshToSkeletonTable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
