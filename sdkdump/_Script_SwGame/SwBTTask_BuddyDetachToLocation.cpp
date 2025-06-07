#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTTask_BuddyDetachToLocation.hpp"
void* _Script_SwGame::SwBTTask_BuddyDetachToLocation::get_TargetLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwBTTask_BuddyDetachToLocation::get_TargetRotationKey() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_BuddyDetachToLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_BuddyDetachToLocation");
    return result;
}
