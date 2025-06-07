#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct FractureMaterial {
    private: char pad_0[0x24]; public:
    void* get_UVScale();
    void* get_UVOffset();
    void* get_Tangent();
    float& get_UAngle();
    int32_t& get_InteriorElementIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
