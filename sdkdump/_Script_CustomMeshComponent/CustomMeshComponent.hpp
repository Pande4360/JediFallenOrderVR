#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CustomMeshComponent {
#pragma pack(push, 1)
struct CustomMeshComponent : public _Script_Engine::MeshComponent {
    private: char pad_b60[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    bool SetCustomMeshTriangles(void*& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(void*& Triangles);
}; // Size: 0xb70
#pragma pack(pop)
}
