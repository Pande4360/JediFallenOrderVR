#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwProjectileComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_SwGame::SwProjectile* GetProjectile();
}; // Size: 0x178
#pragma pack(pop)
}
