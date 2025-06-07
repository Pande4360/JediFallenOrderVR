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
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct NarrativeEvent {
    private: char pad_0[0x40]; public:
    void* get_EventContext();
    void* get_AdditionalContent();
    _Script_DialoguePlugin::Dialogue*& get_OrSpecificDialogue();
    _Script_Engine::Actor*& get_OptionalSpeaker();
    bool get_QueueIfFails();
    void set_QueueIfFails(bool value);
    bool get_AbortOnAIAlerted();
    void set_AbortOnAIAlerted(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
