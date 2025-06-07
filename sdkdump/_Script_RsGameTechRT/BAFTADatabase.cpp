#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "BAFTADatabase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTADatabase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.BAFTADatabase");
    return result;
}
float& _Script_RsGameTechRT::BAFTADatabase::get_DefaultIdenticalDialogueCooldown() {
    return *(float*)((uintptr_t)this + 0x210);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_EventContextsToDataSets() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_SystemicDialogueChances() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_SystemicDialogueCooldowns() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_EventContextsToSpeakerMultipliers() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_SpeakerTagsToCharacterNames() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_RsGameTechRT::BAFTADatabase::get_IdenticalDialogueCooldownPerEventContext() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void _Script_RsGameTechRT::BAFTADatabase::InitializeDialogueMetadata() {
    return;
}
