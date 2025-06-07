#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BuildPatchServices {
#pragma pack(push, 1)
struct ChunkPartData {
    private: char pad_0[0x18]; public:
    void* get_Guid();
    void* get_Offset();
    void* get_Size();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
