#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_DroidScan_Corpse {
#pragma pack(push, 1)
struct BP_DroidScan_Corpse_C : public _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C {
    private: char pad_710[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveEndPlay(void* EndPlayReason);
    void ExecuteUbergraph_BP_DroidScan_Corpse(int32_t EntryPoint);
}; // Size: 0x718
#pragma pack(pop)
}
