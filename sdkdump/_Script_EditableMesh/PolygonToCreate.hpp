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
struct PolygonToCreate {
    private: char pad_0[0x30]; public:
    void* get_PolygonGroupID();
    void* get_PerimeterVertices();
    void* get_PolygonHoles();
    void* get_OriginalPolygonID();
    void* get_PolygonEdgeHardness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
