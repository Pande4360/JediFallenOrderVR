#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Zone_LoadAreaNEW\Zone_LoadAreaNEW_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Zone_LoadAreaOLD {
#pragma pack(push, 1)
struct Zone_LoadAreaOLD_C : public _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C {
    private: char pad_438[0x8]; public:
    _Script_Engine::StaticMeshComponent*& get_Cube_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x440
#pragma pack(pop)
}
