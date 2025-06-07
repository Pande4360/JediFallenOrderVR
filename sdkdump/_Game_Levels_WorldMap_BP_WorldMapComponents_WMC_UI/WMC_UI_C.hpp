#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI {
#pragma pack(push, 1)
struct WMC_UI_C : public _Script_Engine::ActorComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
