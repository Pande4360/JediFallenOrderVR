#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsAITeamSystemSettings.hpp"
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_PredatorRelationshipTag() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_CharacterRelationshipDescriptors() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_ConversationDistance() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_PredatorFactionTag() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_MaxSubteamMergeDistance() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_PreyFactionTag() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_PreyRelationshipTag() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_SubteamUpdateFrequency() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_SubteamUpdateFrequencyDeviation() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_RootBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_MinConversationCooldown() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_RsGameTechRT::RsAITeamSystemSettings::get_MaxConversationCooldown() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_RsGameTechRT::RsAITeamSystemSettings::get_ConversationContextTag() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITeamSystemSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAITeamSystemSettings");
    return result;
}
