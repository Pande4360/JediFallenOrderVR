#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DebugCameraController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDebugCameraController : public _Script_Engine::DebugCameraController {
    private: char pad_718[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x720
#pragma pack(pop)
}
