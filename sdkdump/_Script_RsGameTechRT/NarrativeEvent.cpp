#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NarrativeEvent.hpp"
void* _Script_RsGameTechRT::NarrativeEvent::get_EventContext() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsGameTechRT::NarrativeEvent::set_QueueIfFails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::NarrativeEvent::get_AdditionalContent() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_DialoguePlugin::Dialogue*& _Script_RsGameTechRT::NarrativeEvent::get_OrSpecificDialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x28);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::NarrativeEvent::get_OptionalSpeaker() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::NarrativeEvent::get_QueueIfFails() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::NarrativeEvent::get_AbortOnAIAlerted() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::NarrativeEvent::set_AbortOnAIAlerted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::NarrativeEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.NarrativeEvent");
    return result;
}
