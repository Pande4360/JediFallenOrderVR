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
struct SwWorldMapLocalPlanetSettings {
    private: char pad_0[0x28]; public:
    void* get_WorldMapName();
    float& get_MinZoomScale();
    float& get_MaxZoomScale();
    float& get_InitialMapScale();
    float& get_TranslationBoundsRadialMultiplier();
    void* get_InteriorLevelZValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
