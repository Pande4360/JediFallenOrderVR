#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SlateMeshVertex {
    private: char pad_0[0x3c]; public:
    void* get_Position();
    void* get_Color();
    void* get_UV0();
    void* get_UV1();
    void* get_UV2();
    void* get_UV3();
    void* get_UV4();
    void* get_UV5();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
