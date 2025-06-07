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
struct BuilderPoly {
    private: char pad_0[0x28]; public:
    void* get_VertexIndices();
    int32_t& get_Direction();
    void* get_ItemName();
    int32_t& get_PolyFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
