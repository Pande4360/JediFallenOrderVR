#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_SwGame {
struct SwAIPredatorPreyDirector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIFightSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x120]; public:
    _Script_SwGame::SwAIPredatorPreyDirector*& get_PredatorPreyDirector();
    static _Script_CoreUObject::Class* static_class();
    void OnVictimDied(_Script_Engine::Actor* DeadActor);
    void OnVictimDestroyed(_Script_Engine::Actor* DestroyedActor);
}; // Size: 0x148
#pragma pack(pop)
}
