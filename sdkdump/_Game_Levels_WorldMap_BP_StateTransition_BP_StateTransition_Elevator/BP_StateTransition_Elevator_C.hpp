#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayActor.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshComponent;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator {
#pragma pack(push, 1)
struct BP_StateTransition_Elevator_C : public _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor {
    private: char pad_398[0x48]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_Second_ElevatorCar();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_First_ElevatorCar();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_Second_CallBox();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_First_CallBox();
    bool get_State_Changed();
    void set_State_Changed(bool value);
    bool get_TopCallBox();
    void set_TopCallBox(bool value);
    bool get_BottomCallBox();
    void set_BottomCallBox(bool value);
    bool get_MapSectionExplored();
    void set_MapSectionExplored(bool value);
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    bool get_IsActivated();
    void set_IsActivated(bool value);
    bool get_StartsActivated_();
    void set_StartsActivated_(bool value);
    bool get_StartsBottom_();
    void set_StartsBottom_(bool value);
    bool get_TopBoxVisible_();
    void set_TopBoxVisible_(bool value);
    bool get_BottomBoxVisible_();
    void set_BottomBoxVisible_(bool value);
    bool get_EntersBottomCarOnTop_();
    void set_EntersBottomCarOnTop_(bool value);
    bool get_StartsSecondState();
    void set_StartsSecondState(bool value);
    bool get_InStateTwo();
    void set_InStateTwo(bool value);
    bool get_MapSectionDependent_();
    void set_MapSectionDependent_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckIfBottomSectionIsExplored(bool& Explored);
    void ChangeElevatorVisibility();
    void SetColors();
    void UserConstructionScript();
    void ReceiveMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void SetVisible();
    void ReceiveStateChanged0(int32_t State);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StateTransition_Elevator(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
}
