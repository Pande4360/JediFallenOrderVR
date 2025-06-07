#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsConversationSettings.hpp"
void* _Script_RsGameTechRT::RsConversationSettings::get_LethalDamageType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsConversationSettings::get_CSVDatabasePath() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsConversationSettings::get_ConversationTimeout() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsConversationSettings::get_ConversationAnimsTimeout() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_RsGameTechRT::RsConversationSettings::get_ActorNamesToFacialAnimPaths() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConversationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsConversationSettings");
    return result;
}
void* _Script_RsGameTechRT::RsConversationSettings::get_SystemicCombatSpeakerTags() {
    return (void*)((uintptr_t)this + 0xb8);
}
