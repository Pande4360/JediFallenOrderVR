#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MeshDescription {
#pragma pack(push, 1)
struct MeshTriangle {
    private: char pad_0[0xc]; public:
    void* get_VertexInstanceID0();
    void* get_VertexInstanceID1();
    void* get_VertexInstanceID2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
