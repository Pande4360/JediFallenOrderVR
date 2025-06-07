#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIFightComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x40]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnOwnerRevived(_Script_Engine::Actor* RevivedActor);
}; // Size: 0x1b0
#pragma pack(pop)
}
