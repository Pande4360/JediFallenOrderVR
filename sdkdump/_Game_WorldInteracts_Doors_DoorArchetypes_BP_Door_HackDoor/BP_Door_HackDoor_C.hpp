#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Doors_BP_Door\BP_Door_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_HackDoor {
#pragma pack(push, 1)
struct BP_Door_HackDoor_C : public _Game_WorldInteracts_Doors_BP_Door::BP_Door_C {
    private: char pad_6c0[0x10]; public:
    _Script_Engine::StaticMeshComponent*& get_Zeffo_Hack_Door_Frame_02();
    _Script_Engine::StaticMeshComponent*& get_Zeffo_Hack_Door_02();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x6d0
#pragma pack(pop)
}
