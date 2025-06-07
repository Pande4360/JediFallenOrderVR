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
struct RsAITeamSystemSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x70]; public:
    void* get_CharacterRelationshipDescriptors();
    void* get_PredatorFactionTag();
    void* get_PreyFactionTag();
    void* get_PredatorRelationshipTag();
    void* get_PreyRelationshipTag();
    float& get_MaxSubteamMergeDistance();
    float& get_SubteamUpdateFrequency();
    float& get_SubteamUpdateFrequencyDeviation();
    void* get_RootBehaviorAsset();
    float& get_ConversationDistance();
    float& get_MinConversationCooldown();
    float& get_MaxConversationCooldown();
    void* get_ConversationContextTag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
