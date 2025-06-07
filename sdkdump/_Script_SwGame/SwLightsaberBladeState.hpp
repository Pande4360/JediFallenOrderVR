#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberBladeState {
    private: char pad_0[0x20]; public:
    void* get_PosWs();
    void* get_DirWs();
    float& get_Length();
    bool get_bExtended();
    void set_bExtended(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
