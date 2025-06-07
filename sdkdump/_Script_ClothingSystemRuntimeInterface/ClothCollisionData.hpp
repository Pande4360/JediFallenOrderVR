#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeInterface {
#pragma pack(push, 1)
struct ClothCollisionData {
    private: char pad_0[0x30]; public:
    void* get_Spheres();
    void* get_SphereConnections();
    void* get_Convexes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
