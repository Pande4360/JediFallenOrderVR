#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DebugCameraHUD.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDebugCameraHUD : public _Script_Engine::DebugCameraHUD {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x450
#pragma pack(pop)
}
