#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct LightmassPortalComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightmassPortal : public Actor {
    private: char pad_360[0x8]; public:
    _Script_Engine::LightmassPortalComponent*& get_PortalComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
