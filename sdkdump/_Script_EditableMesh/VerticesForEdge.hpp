#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct VerticesForEdge {
    private: char pad_0[0xc]; public:
    void* get_EdgeID();
    void* get_NewVertexID0();
    void* get_NewVertexID1();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
