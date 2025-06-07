#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_VOQueueItem {
#pragma pack(push, 1)
struct ST_VOQueueItem {
    private: char pad_0[0x40]; public:
    _Script_DialoguePlugin::Dialogue*& get_DialogueRef_2_2711AE43441D5BF5687D7B9289E966D7();
    void* get_EventContext_5_D7E664EE4D8EBFE9D0B65FBB911EDEFB();
    void* get_AddedContent_8_D94D37674BC15140B3751B80A5D0DC36();
    _Script_Engine::Actor*& get_OptionalSpeaker_11_FC196E3545B2708A86DA43BACFA7C18E();
    int32_t& get_QueueID_14_206402CF4AFE766C26D92AA6C04103E0();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
