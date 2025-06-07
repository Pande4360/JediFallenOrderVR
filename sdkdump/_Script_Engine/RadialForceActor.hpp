#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigidBodyBase.hpp"
namespace _Script_Engine {
struct RadialForceComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RadialForceActor : public RigidBodyBase {
    private: char pad_360[0x8]; public:
    _Script_Engine::RadialForceComponent*& get_ForceComponent();
    static _Script_CoreUObject::Class* static_class();
    void ToggleForce();
    void FireImpulse();
    void EnableForce();
    void DisableForce();
}; // Size: 0x368
#pragma pack(pop)
}
