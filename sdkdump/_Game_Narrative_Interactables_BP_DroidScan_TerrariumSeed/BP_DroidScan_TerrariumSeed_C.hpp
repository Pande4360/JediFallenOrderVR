#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_DroidScan_TerrariumSeed {
#pragma pack(push, 1)
struct BP_DroidScan_TerrariumSeed_C : public _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C {
    private: char pad_710[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_SeedMesh();
    void* get_Seed();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Start_Scan_Sequence0();
    void ExecuteUbergraph_BP_DroidScan_TerrariumSeed(int32_t EntryPoint);
}; // Size: 0x728
#pragma pack(pop)
}
