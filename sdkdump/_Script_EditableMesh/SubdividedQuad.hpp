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
struct SubdividedQuad {
    private: char pad_0[0xd0]; public:
    void* get_QuadVertex0();
    void* get_QuadVertex1();
    void* get_QuadVertex2();
    void* get_QuadVertex3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
