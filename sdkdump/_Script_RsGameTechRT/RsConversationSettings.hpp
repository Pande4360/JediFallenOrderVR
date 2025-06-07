#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsConversationSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x90]; public:
    void* get_LethalDamageType();
    void* get_CSVDatabasePath();
    float& get_ConversationTimeout();
    float& get_ConversationAnimsTimeout();
    void* get_ActorNamesToFacialAnimPaths();
    void* get_SystemicCombatSpeakerTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
