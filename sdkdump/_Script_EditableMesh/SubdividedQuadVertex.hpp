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
struct SubdividedQuadVertex {
    private: char pad_0[0x34]; public:
    int32_t& get_VertexPositionIndex();
    void* get_TextureCoordinate0();
    void* get_TextureCoordinate1();
    void* get_VertexColor();
    void* get_VertexNormal();
    void* get_VertexTangent();
    float& get_VertexBinormalSign();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
