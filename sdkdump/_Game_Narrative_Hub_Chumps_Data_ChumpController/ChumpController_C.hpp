#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAIController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Chumps_Data_ChumpController {
#pragma pack(push, 1)
struct ChumpController_C : public _Script_SwGame::SwAIController {
    private: char pad_848[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveInitializeAI();
    void ExecuteUbergraph_ChumpController(int32_t EntryPoint);
}; // Size: 0x850
#pragma pack(pop)
}
