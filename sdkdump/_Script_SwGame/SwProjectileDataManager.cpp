#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SwProjectileDataManager.hpp"
_Script_Engine::DataTable*& _Script_SwGame::SwProjectileDataManager::get_ProjectileDataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileDataManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwProjectileDataManager");
    return result;
}
