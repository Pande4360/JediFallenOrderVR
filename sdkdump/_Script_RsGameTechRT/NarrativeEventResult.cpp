#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NarrativeEventResult.hpp"
#include "RsConversation.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::NarrativeEventResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.NarrativeEventResult");
    return result;
}
void* _Script_RsGameTechRT::NarrativeEventResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RsGameTechRT::NarrativeEventResult::get_QueuedItemID() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_RsGameTechRT::RsConversation*& _Script_RsGameTechRT::NarrativeEventResult::get_PlayingConversation() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x8);
}
bool _Script_RsGameTechRT::NarrativeEventResult::get_Success() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::NarrativeEventResult::set_Success(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::NarrativeEventResult::get_ConversationActors() {
    return (void*)((uintptr_t)this + 0x18);
}
