#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConversationData.hpp"
float& _Script_RsGameTechRT::RsConversationData::get_Delay() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsConversationData::get_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsConversationData::get_WwiseEventName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsConversationData::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsConversationData::get_Text() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsConversationData::get_ChoicePrompt() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_RsGameTechRT::RsConversationData::set_bIsRadio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsConversationData::get_bIsRadio() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsConversationData::get_bCritPath() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsConversationData::set_bCritPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsConversationData::get_bNotSpatialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsConversationData::set_bNotSpatialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RsGameTechRT::RsConversationData::get_NodeId() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_RsGameTechRT::RsConversationData::get_Links() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConversationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsConversationData");
    return result;
}
