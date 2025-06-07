#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntime {
#pragma pack(push, 1)
struct ClothLODData {
    private: char pad_0[0xf8]; public:
    void* get_PhysicalMeshData();
    void* get_CollisionData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
