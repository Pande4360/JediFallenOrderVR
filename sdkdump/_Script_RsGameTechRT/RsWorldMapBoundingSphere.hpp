#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapBoundingSphere : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    _Script_Engine::SphereComponent*& get_BoundingSphere();
    void* get_MapSection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
