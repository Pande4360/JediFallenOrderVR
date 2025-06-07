#include "..\FUObjectArray.hpp"
#include "ST_VOQueueItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::get_EventContext_5_D7E664EE4D8EBFE9D0B65FBB911EDEFB() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::get_DialogueRef_2_2711AE43441D5BF5687D7B9289E966D7() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x0);
}
void* _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::get_AddedContent_8_D94D37674BC15140B3751B80A5D0DC36() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Actor*& _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::get_OptionalSpeaker_11_FC196E3545B2708A86DA43BACFA7C18E() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
int32_t& _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::get_QueueID_14_206402CF4AFE766C26D92AA6C04103E0() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_VOQueueItem.ST_VOQueueItem");
    return result;
}
