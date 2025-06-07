#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "SwProjectile.hpp"
#include "SwProjectileComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwProjectileComponent");
    return result;
}
_Script_SwGame::SwProjectile* _Script_SwGame::SwProjectileComponent::GetProjectile() {
    return;
}
