#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct Model;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BrushComponent : public PrimitiveComponent {
    private: char pad_b30[0x10]; public:
    _Script_Engine::Model*& get_Brush();
    _Script_Engine::BodySetup*& get_BrushBodySetup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb40
#pragma pack(pop)
}
