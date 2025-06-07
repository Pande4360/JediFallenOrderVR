#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAbilityPriorityManager.hpp"
#include "RsAbilitySystem.hpp"
void* _Script_SwGame::RsAbilitySystem::get_EffectsInPlay() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::RsAbilitySystem::get_TasksInPlay() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_SwGame::RsAbilityPriorityManager*& _Script_SwGame::RsAbilitySystem::get_PriorityManager() {
    return *(_Script_SwGame::RsAbilityPriorityManager**)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilitySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilitySystem");
    return result;
}
