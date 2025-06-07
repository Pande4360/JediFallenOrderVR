#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SphereComponent.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHammerHunterTrailCollider : public _Script_Engine::SphereComponent {
    private: char pad_b90[0x30]; public:
    bool get_bPauseTrail();
    void set_bPauseTrail(bool value);
    _Script_Engine::SceneComponent*& get_HammerHeadLocation();
    float& get_HammerHeadRadius();
    float& get_HammerHeadTrailDuration();
    float& get_HammerHeadSampleRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xbc0
#pragma pack(pop)
}
