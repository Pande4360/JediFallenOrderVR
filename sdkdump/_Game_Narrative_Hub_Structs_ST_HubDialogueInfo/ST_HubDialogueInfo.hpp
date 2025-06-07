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
namespace _Game_Narrative_Hub_Structs_ST_HubDialogueInfo {
#pragma pack(push, 1)
struct ST_HubDialogueInfo {
    private: char pad_0[0x10]; public:
    _Script_DialoguePlugin::Dialogue*& get_SelectedDialogue_2_B0A867C54DE024691C92C3981C143F18();
    void* get_HubConversationType_6_D8194FC1444E29ABFB972DBD746475D6();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
