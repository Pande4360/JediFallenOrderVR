#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "SwProjectile.hpp"
#include "SwProjectileReflectionInterface.hpp"
void _Script_SwGame::SwProjectileReflectionInterface::OnReflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileReflectionInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwProjectileReflectionInterface");
    return result;
}
void _Script_SwGame::SwProjectileReflectionInterface::OnDeflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
void* _Script_SwGame::SwProjectileReflectionInterface::HandleProjectileReflection(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
