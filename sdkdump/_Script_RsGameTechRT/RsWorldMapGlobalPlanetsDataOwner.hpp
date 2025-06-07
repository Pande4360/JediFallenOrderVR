#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapGlobalPlanetsDataOwner : public _Script_Engine::Actor {
    private: char pad_360[0xf0]; public:
    void* get_PerPlanetCollectablesAcquired();
    void* get_PerPlanetMapSectionsExplored();
    void* get_GlobalPlanetDataMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x450
#pragma pack(pop)
}
