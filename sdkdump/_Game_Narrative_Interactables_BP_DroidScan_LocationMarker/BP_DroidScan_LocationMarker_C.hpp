#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_DroidScan_LocationMarker {
#pragma pack(push, 1)
struct BP_DroidScan_LocationMarker_C : public _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C {
    private: char pad_710[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_UIPlacement();
    void* get_UnlockFlag();
    void* get_ScannableGate();
    void* get_Planet();
    bool get_supressMessage();
    void set_supressMessage(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void HeroLoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void ScanCompleted();
    void ExecuteUbergraph_BP_DroidScan_LocationMarker(int32_t EntryPoint);
}; // Size: 0x728
#pragma pack(pop)
}
