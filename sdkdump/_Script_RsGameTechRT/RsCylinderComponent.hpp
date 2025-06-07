#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ShapeComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCylinderComponent : public _Script_Engine::ShapeComponent {
    private: char pad_b80[0x10]; public:
    float& get_CylinderHalfHeight();
    float& get_CylinderRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb90
#pragma pack(pop)
}
