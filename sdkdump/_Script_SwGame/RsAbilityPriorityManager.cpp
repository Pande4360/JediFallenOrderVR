#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "RsAbilityPriorityManager.hpp"
_Script_Engine::DataTable*& _Script_SwGame::RsAbilityPriorityManager::get_AbilityPriorityTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityPriorityManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityPriorityManager");
    return result;
}
