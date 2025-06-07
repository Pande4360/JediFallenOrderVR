#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavLinkRenderingComponent : public _Script_Engine::PrimitiveComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb30
#pragma pack(pop)
}
