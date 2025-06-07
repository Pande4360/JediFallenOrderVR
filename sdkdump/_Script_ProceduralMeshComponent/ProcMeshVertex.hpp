#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ProceduralMeshComponent {
#pragma pack(push, 1)
struct ProcMeshVertex {
    private: char pad_0[0x4c]; public:
    void* get_Position();
    void* get_Normal();
    void* get_Tangent();
    void* get_Color();
    void* get_UV0();
    void* get_UV1();
    void* get_UV2();
    void* get_UV3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c
#pragma pack(pop)
}
