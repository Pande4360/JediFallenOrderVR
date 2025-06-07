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
struct ProcMeshSection {
    private: char pad_0[0x40]; public:
    void* get_ProcVertexBuffer();
    void* get_ProcIndexBuffer();
    void* get_SectionLocalBox();
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    bool get_bSectionVisible();
    void set_bSectionVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
