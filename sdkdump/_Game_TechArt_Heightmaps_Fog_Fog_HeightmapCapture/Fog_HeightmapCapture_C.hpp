#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_TechArt_Heightmaps_HeightmapCapture\HeightmapCapture_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_TechArt_Heightmaps_Fog_Fog_HeightmapCapture {
#pragma pack(push, 1)
struct Fog_HeightmapCapture_C : public _Game_TechArt_Heightmaps_HeightmapCapture::HeightmapCapture_C {
    private: char pad_3c0[0x40]; public:
    _Script_Engine::StaticMeshComponent*& get_FogVolume();
    float& get_FogOffset();
    float& get_FogFade();
    float& get_Fog_Density();
    void* get_FogAlbedo();
    void* get_FogEmissive();
    _Script_Engine::Texture*& get_HeightmapTex();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x400
#pragma pack(pop)
}
