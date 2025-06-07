#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ChildActorComponent : public SceneComponent {
    private: char pad_2d0[0x30]; public:
    void* get_ChildActorClass();
    _Script_Engine::Actor*& get_ChildActor();
    _Script_Engine::Actor*& get_ChildActorTemplate();
    static _Script_CoreUObject::Class* static_class();
    void SetChildActorClass(void* InClass);
}; // Size: 0x300
#pragma pack(pop)
}
