#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_UI_Holomap_UI_CriticalPath {
struct UI_CriticalPath_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan {
#pragma pack(push, 1)
struct WMC_DroidScan_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x78]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    _Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C*& get_UI_CriticalPath();
    void* get_CritPathUI_ToIdentifier();
    void* get_ScanLocationAverage();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void AddDroidScanIconToMap(_Script_CoreUObject::Vector UIScanLocation, void* ScanIdentifier, void* Planet);
    void OnTickDroidScan();
    void OnClose();
    void Remove(void* Scan_Identifier);
    void ExecuteUbergraph_WMC_DroidScan(int32_t EntryPoint);
}; // Size: 0x1e8
#pragma pack(pop)
}
