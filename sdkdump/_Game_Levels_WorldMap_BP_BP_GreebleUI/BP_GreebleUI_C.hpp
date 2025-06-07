#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Levels_WorldMap_BP_BP_Greeble_Parent\BP_Greeble_Parent_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_GreebleUI {
#pragma pack(push, 1)
struct BP_GreebleUI_C : public _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C {
    private: char pad_398[0x60]; public:
    void* get_UberGraphFrame0();
    void* get_MapSection();
    bool get_IsCinematicGreeble_();
    void set_IsCinematicGreeble_(bool value);
    bool get_IsMissionObjective();
    void set_IsMissionObjective(bool value);
    void* get_MissionObjective();
    bool get_IsConnectedToDoor();
    void set_IsConnectedToDoor(bool value);
    void* get_ConnectedDoor();
    void* get_Greeble_Location();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void AddToArray();
    void ExecuteUbergraph_BP_GreebleUI(int32_t EntryPoint);
}; // Size: 0x3f8
#pragma pack(pop)
}
