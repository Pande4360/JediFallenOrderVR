#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Landscape {
struct LandscapeLayerInfoObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct WeightmapLayerAllocationInfo {
    private: char pad_0[0x10]; public:
    _Script_Landscape::LandscapeLayerInfoObject*& get_LayerInfo();
    void* get_WeightmapTextureIndex();
    void* get_WeightmapTextureChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
