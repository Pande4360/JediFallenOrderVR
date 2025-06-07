#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CustomMeshComponent {
#pragma pack(push, 1)
struct CustomMeshTriangle {
    private: char pad_0[0x24]; public:
    void* get_Vertex0();
    void* get_Vertex1();
    void* get_Vertex2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
