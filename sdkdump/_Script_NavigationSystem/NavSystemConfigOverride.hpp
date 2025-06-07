#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct NavigationSystemConfig;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavSystemConfigOverride : public _Script_Engine::Actor {
    private: char pad_360[0x10]; public:
    _Script_Engine::NavigationSystemConfig*& get_NavigationSystemConfig();
    bool get_bLoadOnClient();
    void set_bLoadOnClient(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
