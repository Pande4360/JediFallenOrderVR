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
struct ClothCollisionPrim_Sphere {
    private: char pad_0[0x14]; public:
    int32_t& get_BoneIndex();
    float& get_Radius();
    void* get_LocalPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
