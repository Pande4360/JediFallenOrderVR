#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHologramCameraFacerComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x10]; public:
    void* get_OffsetDelta();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e0
#pragma pack(pop)
}
