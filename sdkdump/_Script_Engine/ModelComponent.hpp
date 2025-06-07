#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ModelComponent : public PrimitiveComponent {
    private: char pad_b30[0x40]; public:
    _Script_Engine::BodySetup*& get_ModelBodySetup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb70
#pragma pack(pop)
}
