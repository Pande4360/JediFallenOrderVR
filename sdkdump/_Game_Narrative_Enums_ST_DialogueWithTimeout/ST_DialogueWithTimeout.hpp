#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_DialogueWithTimeout {
#pragma pack(push, 1)
struct ST_DialogueWithTimeout {
    private: char pad_0[0x18]; public:
    _Script_DialoguePlugin::Dialogue*& get_Dialogue_6_79A466D5440C4DC060FD41A4E65EEA31();
    float& get_TimeoutGameSecs_10_98CC6B45459F8E4BE8DC6E971C79076F();
    void* get_EventForDialogue_13_9ED3817C4E0B490956D242B41BC2A1F8();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
