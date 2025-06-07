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
struct RenderingPolygonGroup {
    private: char pad_0[0x48]; public:
    void* get_RenderingSectionIndex();
    int32_t& get_MaterialIndex();
    int32_t& get_MaxTriangles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
