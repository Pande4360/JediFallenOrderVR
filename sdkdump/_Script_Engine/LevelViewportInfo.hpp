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
struct LevelViewportInfo {
    private: char pad_0[0x20]; public:
    void* get_CamPosition();
    void* get_CamRotation();
    float& get_CamOrthoZoom();
    bool get_CamUpdated();
    void set_CamUpdated(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
