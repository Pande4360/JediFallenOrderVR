#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CapsuleComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsActorRootComponent : public _Script_Engine::CapsuleComponent {
    private: char pad_b90[0x40]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xbd0
#pragma pack(pop)
}
