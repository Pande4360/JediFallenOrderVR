#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapGlobalPlanetData : public _Script_Engine::DataAsset {
    private: char pad_30[0x20]; public:
    void* get_WorldName();
    void* get_CollectablesTotal();
    int32_t& get_MapSectionTotals();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
