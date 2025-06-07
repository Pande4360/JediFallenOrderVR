#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis {
struct WMC_OnMantis_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap {
#pragma pack(push, 1)
struct BP_GalaxyMap_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C {
    private: char pad_4a8[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_Arrow();
    void* get_CamRotation();
    bool get_bStartRotation();
    void set_bStartRotation(bool value);
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C*& get_WMC_Mantis_Ref();
    static _Script_CoreUObject::Class* static_class();
    void ShouldAllowInteract__OverrideMe(bool& Result);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveTick(float DeltaSeconds);
    void MAP_InteractionComplete();
    void MAP_InteractionStarted();
    void ExecuteUbergraph_BP_GalaxyMap(int32_t EntryPoint);
}; // Size: 0x4d0
#pragma pack(pop)
}
