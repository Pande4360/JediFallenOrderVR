#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\HUD.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPhotomodeCameraHUD : public _Script_Engine::HUD {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x450
#pragma pack(pop)
}
