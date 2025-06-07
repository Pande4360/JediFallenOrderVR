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
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection {
#pragma pack(push, 1)
struct WMC_Selection_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x120]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_RegionMap();
    void* get_CollectibleRegionColor();
    void* get_CollectibleRegionStatus();
    void* get_SelectedRegion();
    void* get_PerRegionSecretSections();
    float& get_RegionMultiplier();
    static _Script_CoreUObject::Class* static_class();
    void SetRegionCollectibleBool();
    void ClearRegion();
    void SetRegionStruct();
    void SetCollectibleRegionColor();
    void SetRegionColor();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_WMC_Selection(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
