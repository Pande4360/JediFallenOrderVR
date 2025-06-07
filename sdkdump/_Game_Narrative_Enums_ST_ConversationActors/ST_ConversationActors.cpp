#include "..\FUObjectArray.hpp"
#include "ST_ConversationActors.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
void* _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::get_SpeakerToActor_9_0F101FCC4690E7DDE25258B98A8F5F8A() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::get_BackgroundConversation_5_ACE5E50E4C4CA5B181B212B6D0030C71() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::get_Dialogue_15_A87A7BC4428848DFB24D5AA41A2CAC2E() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x60);
}
void _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::set_BackgroundConversation_5_ACE5E50E4C4CA5B181B212B6D0030C71(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::get_Ambient_17_0EFAA2DB43063BB84818FFB9464A4959() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsConversation*& _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::get_Conversation_12_E1482B4E432ACD378EC04B92E56E00A1() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x58);
}
void _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::set_Ambient_17_0EFAA2DB43063BB84818FFB9464A4959(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_ConversationActors::ST_ConversationActors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_ConversationActors.ST_ConversationActors");
    return result;
}
