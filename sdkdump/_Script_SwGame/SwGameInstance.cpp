#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsGameInstance.hpp"
#include "RsAbilitySystem.hpp"
#include "SwGameInstance.hpp"
#include "SwProjectileDataManager.hpp"
_Script_SwGame::RsAbilitySystem*& _Script_SwGame::SwGameInstance::get_AbilitySystem() {
    return *(_Script_SwGame::RsAbilitySystem**)((uintptr_t)this + 0x1d8);
}
_Script_SwGame::SwProjectileDataManager*& _Script_SwGame::SwGameInstance::get_ProjectileDataManager() {
    return *(_Script_SwGame::SwProjectileDataManager**)((uintptr_t)this + 0x1e0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGameInstance");
    return result;
}
