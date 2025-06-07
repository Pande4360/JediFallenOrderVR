#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISpawnerDialogueSettings.hpp"
void* _Script_RsGameTechRT::RsAISpawnerDialogueSettings::get_SpeakerTagOverride() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsGameTechRT::RsAISpawnerDialogueSettings::set_bNoTeamConversation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerDialogueSettings::get_bNoTeamConversation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerDialogueSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerDialogueSettings");
    return result;
}
