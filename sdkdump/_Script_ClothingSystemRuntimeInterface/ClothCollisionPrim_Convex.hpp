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
struct ClothCollisionPrim_Convex {
    private: char pad_0[0x18]; public:
    void* get_Planes();
    int32_t& get_BoneIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
