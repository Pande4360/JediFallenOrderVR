#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonMashSyncGroup.hpp"
#include "ButtonMashType.hpp"
int32_t& _Script_SwGame::ButtonMashSyncGroup::get_SyncGroupID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::ButtonMashSyncGroup::get_SyncGroupData() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashSyncGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.ButtonMashSyncGroup");
    return result;
}
