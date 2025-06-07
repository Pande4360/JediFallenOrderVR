#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio {
#pragma pack(push, 1)
struct WMC_Audio_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    static _Script_CoreUObject::Class* static_class();
    void Audio_CloseMapOnHolotableInteract();
    void Audio_OnSwitchToLocalView();
    void Audio_OnSwitchToGalaxyView();
    void Audio_OnHolotableCameraStart();
    void ReceiveBeginPlay0();
    void Audio_OpenMapDuringCinematic();
    void Audio_CloseMapDuringCinematic();
    void Audio_OpenMapOnHolotableInteract();
    void Audio_OpenMapRoaming();
    void Audio_CloseMapRoaming();
    void Audio_CloseMapOnExitMantis();
    void Audio_OpenMapOnEnterMantis();
    void ExecuteUbergraph_WMC_Audio(int32_t EntryPoint);
}; // Size: 0x180
#pragma pack(pop)
}
