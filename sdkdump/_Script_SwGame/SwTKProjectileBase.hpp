#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwTKProjectileBase : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x18]; public:
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_AbilityEffectVictim();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
