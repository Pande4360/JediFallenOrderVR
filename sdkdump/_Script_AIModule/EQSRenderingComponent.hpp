#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EQSRenderingComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x30]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb60
#pragma pack(pop)
}
