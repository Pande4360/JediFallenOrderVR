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
struct EdgeToCreate {
    private: char pad_0[0x30]; public:
    void* get_VertexID0();
    void* get_VertexID1();
    void* get_ConnectedPolygons();
    void* get_EdgeAttributes();
    void* get_OriginalEdgeID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
