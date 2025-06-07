#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Levels_WorldMap_BP_BP_Greeble_Parent\BP_Greeble_Parent_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition {
#pragma pack(push, 1)
struct BP_GreebleUI_StateTransition_C : public _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C {
    private: char pad_398[0x40]; public:
    void* get_UberGraphFrame0();
    bool get_IsConnectedToSTA();
    void set_IsConnectedToSTA(bool value);
    void* get_ConnectedSTA();
    bool get_StateChanged();
    void set_StateChanged(bool value);
    bool get_FromChildActor_();
    void set_FromChildActor_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void AddToArray();
    void ExecuteUbergraph_BP_GreebleUI_StateTransition(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
