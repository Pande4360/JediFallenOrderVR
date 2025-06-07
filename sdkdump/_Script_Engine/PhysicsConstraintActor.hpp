#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigidBodyBase.hpp"
namespace _Script_Engine {
struct PhysicsConstraintComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsConstraintActor : public RigidBodyBase {
    private: char pad_360[0x20]; public:
    _Script_Engine::PhysicsConstraintComponent*& get_ConstraintComp();
    _Script_Engine::Actor*& get_ConstraintActor1();
    _Script_Engine::Actor*& get_ConstraintActor2();
    bool get_bDisableCollision();
    void set_bDisableCollision(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
