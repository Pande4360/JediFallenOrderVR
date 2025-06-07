#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NavigationSystem\NavModifierComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNavModifierComponent : public _Script_NavigationSystem::NavModifierComponent {
    private: char pad_1c8[0x10]; public:
    void* get_NavModifierPrimitives();
    static _Script_CoreUObject::Class* static_class();
    void AddNavModifierPrimitives(void* InNavModifierPrimitives);
}; // Size: 0x1d8
#pragma pack(pop)
}
