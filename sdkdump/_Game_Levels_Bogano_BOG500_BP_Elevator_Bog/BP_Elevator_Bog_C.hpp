#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_LevelObjects_BP_Elevator\BP_Elevator_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG500_BP_Elevator_Bog {
#pragma pack(push, 1)
struct BP_Elevator_Bog_C : public _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C {
    private: char pad_4a0[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void SetElevatorPlatformLights0(bool On);
    void ExecuteUbergraph_BP_Elevator_Bog(int32_t EntryPoint);
}; // Size: 0x4a8
#pragma pack(pop)
}
