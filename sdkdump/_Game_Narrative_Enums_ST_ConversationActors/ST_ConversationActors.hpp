#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_ConversationActors {
#pragma pack(push, 1)
struct ST_ConversationActors {
    private: char pad_0[0x70]; public:
    void* get_SpeakerToActor_9_0F101FCC4690E7DDE25258B98A8F5F8A();
    bool get_BackgroundConversation_5_ACE5E50E4C4CA5B181B212B6D0030C71();
    void set_BackgroundConversation_5_ACE5E50E4C4CA5B181B212B6D0030C71(bool value);
    _Script_RsGameTechRT::RsConversation*& get_Conversation_12_E1482B4E432ACD378EC04B92E56E00A1();
    _Script_DialoguePlugin::Dialogue*& get_Dialogue_15_A87A7BC4428848DFB24D5AA41A2CAC2E();
    bool get_Ambient_17_0EFAA2DB43063BB84818FFB9464A4959();
    void set_Ambient_17_0EFAA2DB43063BB84818FFB9464A4959(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
