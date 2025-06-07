#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SphereComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIDrawPatrolPathComponent : public _Script_Engine::SphereComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb90
#pragma pack(pop)
}
