#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShake.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Camera_CameraShakes_Shake_Combat_Medium {
#pragma pack(push, 1)
struct Shake_Combat_Medium_C : public _Script_Engine::CameraShake {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
