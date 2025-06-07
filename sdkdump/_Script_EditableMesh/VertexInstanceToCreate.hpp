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
struct VertexInstanceToCreate {
    private: char pad_0[0x20]; public:
    void* get_VertexID();
    void* get_VertexInstanceAttributes();
    void* get_OriginalVertexInstanceID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
