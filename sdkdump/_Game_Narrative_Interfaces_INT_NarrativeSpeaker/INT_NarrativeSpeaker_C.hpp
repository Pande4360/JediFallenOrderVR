#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTag;
}
namespace _Game_Narrative_Interfaces_INT_NarrativeSpeaker {
#pragma pack(push, 1)
struct INT_NarrativeSpeaker_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetBossDefeatedText(void*& DefeatedText);
    void GetCustomSubtitleName(void*& CustomSubtitleName);
    void GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag);
}; // Size: 0x28
#pragma pack(pop)
}
