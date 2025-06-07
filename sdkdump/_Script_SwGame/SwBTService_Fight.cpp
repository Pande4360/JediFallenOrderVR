#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTService_Fight.hpp"
void* _Script_SwGame::SwBTService_Fight::get_TargetLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwBTService_Fight::get_TargetActorKey() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTService_Fight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTService_Fight");
    return result;
}
