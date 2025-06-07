#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsWorldMapStreamingAreas {
    private: char pad_0[0x50]; public:
    void* get_StreamingArea_Visual();
    void* get_StreamingArea_Collision();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
