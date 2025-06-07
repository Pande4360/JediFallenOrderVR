#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMapSectionVolume : public _Script_Engine::Volume {
    private: char pad_398[0x18]; public:
    void* get_MapSectionTag();
    static _Script_CoreUObject::Class* static_class();
    void HandleHeroOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
}; // Size: 0x3b0
#pragma pack(pop)
}
