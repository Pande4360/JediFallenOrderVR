#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PhysicsHandleComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwTelekinesisConstraint : public _Script_Engine::Actor {
    private: char pad_360[0x40]; public:
    _Script_Engine::SceneComponent*& get_SceneComponent();
    _Script_Engine::PhysicsHandleComponent*& get_PhysicsHandleComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
