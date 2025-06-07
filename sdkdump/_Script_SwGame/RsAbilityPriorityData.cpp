#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsAbilityPriorityData.hpp"
void* _Script_SwGame::RsAbilityPriorityData::get_SwForcePullAbility() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_SwGame::RsAbilityPriorityData::get_SwForceSlowAbility() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::RsAbilityPriorityData::get_SwForcePushAbility() {
    return (void*)((uintptr_t)this + 0x9);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityPriorityData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAbilityPriorityData");
    return result;
}
void* _Script_SwGame::RsAbilityPriorityData::get_SwForceTelekinesisAbility() {
    return (void*)((uintptr_t)this + 0xb);
}
