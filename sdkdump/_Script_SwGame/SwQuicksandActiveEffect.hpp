#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwQuicksandActiveEffect {
    private: char pad_0[0x28]; public:
    _Script_Engine::Actor*& get_actorInQuicksand();
    _Script_Engine::ParticleSystemComponent*& get_FXComponent();
    _Script_Engine::ChildActorComponent*& get_ComponentForChildActorForSurfaceDeformation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
