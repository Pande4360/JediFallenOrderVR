#include "..\FUObjectArray.hpp"
#include "ST_HubChumpLastConversation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Narrative_Hub_Structs_ST_HubChumpLastConversation::ST_HubChumpLastConversation::get_Type_2_0033E7204C06963F9BC46B839F538AEA() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Game_Narrative_Hub_Structs_ST_HubChumpLastConversation::ST_HubChumpLastConversation::get_CompletedTime_6_3D5E1BEC4DC558D1513AEAA6BF81F060() {
    return *(float*)((uintptr_t)this + 0x4);
}
int32_t& _Game_Narrative_Hub_Structs_ST_HubChumpLastConversation::ST_HubChumpLastConversation::get_HubConversationCount_9_466B62344810F0633713B1B980B325DC() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Structs_ST_HubChumpLastConversation::ST_HubChumpLastConversation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Hub/Structs/ST_HubChumpLastConversation.ST_HubChumpLastConversation");
    return result;
}
