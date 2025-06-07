#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsConversationData {
    private: char pad_0[0x118]; public:
    _Script_AkAudio::AkAudioEvent*& get_Sound();
    float& get_Delay();
    void* get_WwiseEventName();
    void* get_CharacterType();
    void* get_Text();
    void* get_ChoicePrompt();
    bool get_bIsRadio();
    void set_bIsRadio(bool value);
    bool get_bCritPath();
    void set_bCritPath(bool value);
    bool get_bNotSpatialized();
    void set_bNotSpatialized(bool value);
    int32_t& get_NodeId();
    void* get_Links();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
