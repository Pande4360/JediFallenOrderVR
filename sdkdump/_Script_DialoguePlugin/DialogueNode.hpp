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
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct DialogueNode {
    private: char pad_0[0x160]; public:
    void* get_RAPUID();
    int32_t& get_ID();
    bool get_isPlayer();
    void set_isPlayer(bool value);
    void* get_TextStr();
    void* get_Description();
    void* get_Links();
    void* get_Coordinates();
    void* get_Events();
    void* get_Conditions();
    void* get_TagsToEnable();
    void* get_UnsetTagsToEnable();
    _Script_AkAudio::AkAudioEvent*& get_Sound();
    float& get_Delay();
    void* get_CharacterType();
    void* get_WwiseEventName();
    void* get_Choice();
    void* get_ChoicePromptStr();
    void* get_ChoicePromptText();
    bool get_bIsRadio();
    void set_bIsRadio(bool value);
    bool get_bNotSpatialized();
    void set_bNotSpatialized(bool value);
    bool get_bCritPath();
    void set_bCritPath(bool value);
    void* get_LookatTarget();
    void* get_Gesture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
