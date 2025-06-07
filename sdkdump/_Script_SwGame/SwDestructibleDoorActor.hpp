#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwSimpleDestructibleActor.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapDoorComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDestructibleDoorActor : public SwSimpleDestructibleActor {
    private: char pad_750[0x8]; public:
    _Script_RsGameTechRT::RsWorldMapDoorComponent*& get_WorldMapDoorComponent();
    static _Script_CoreUObject::Class* static_class();
    void OnDoorDestructed(_Script_Engine::Actor* DestructibleActor, int32_t PhaseIndex);
}; // Size: 0x758
#pragma pack(pop)
}
