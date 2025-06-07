#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Viewport : public ContentWidget {
    private: char pad_118[0x28]; public:
    void* get_BackgroundColor();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::Actor* Spawn(void* ActorClass);
    void SetViewRotation(_Script_CoreUObject::Rotator Rotation);
    void SetViewLocation(_Script_CoreUObject::Vector Location);
    _Script_CoreUObject::Rotator GetViewRotation();
    _Script_Engine::World* GetViewportWorld();
    _Script_CoreUObject::Vector GetViewLocation();
}; // Size: 0x140
#pragma pack(pop)
}
