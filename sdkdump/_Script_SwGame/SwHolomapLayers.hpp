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
struct SwHolomapLayers {
    private: char pad_0[0x6]; public:
    void* get_ActiveMapSections();
    void* get_NonActiveMapSections();
    void* get_Terrain();
    void* get_Doors();
    void* get_Gateways();
    void* get_PlayerArrow();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6
#pragma pack(pop)
}
