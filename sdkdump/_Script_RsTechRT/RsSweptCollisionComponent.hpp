#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsSweptCollisionComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x858]; public:
    bool get_bTraceComplex();
    void set_bTraceComplex(bool value);
    float& get_Extrapolation();
    void* get_OnSweepHit();
    static _Script_CoreUObject::Class* static_class();
    void IgnoreComponent(_Script_Engine::PrimitiveComponent* Component);
    void IgnoreActor(_Script_Engine::Actor* Actor);
}; // Size: 0x9c8
#pragma pack(pop)
}
