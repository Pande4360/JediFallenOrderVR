#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct BAFTADatabase : public _Script_Engine::DataAsset {
    private: char pad_30[0x1e8]; public:
    void* get_EventContextsToDataSets();
    void* get_SystemicDialogueChances();
    void* get_SystemicDialogueCooldowns();
    void* get_EventContextsToSpeakerMultipliers();
    void* get_SpeakerTagsToCharacterNames();
    void* get_IdenticalDialogueCooldownPerEventContext();
    float& get_DefaultIdenticalDialogueCooldown();
    static _Script_CoreUObject::Class* static_class();
    void InitializeDialogueMetadata();
}; // Size: 0x218
#pragma pack(pop)
}
