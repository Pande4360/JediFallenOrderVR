#include "..\FUObjectArray.hpp"
#include "ST_HubDebugTagConfiguration.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration::get_SetTags_3_48C1C5A74CEB8E2D6693778F67579BD5() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration::get_UnsetTags_5_BE7FBA0B432CBCC0E94E61B06CBBEB83() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration::get_HubStateName_9_C1F4495C45201897AB0E79A79D1DD538() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Hub/Structs/ST_HubDebugTagConfiguration.ST_HubDebugTagConfiguration");
    return result;
}
