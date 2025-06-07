#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "RsAbilityEffectVictimComponent.hpp"
#include "SwTKProjectileBase.hpp"
_Script_SwGame::RsAbilityEffectVictimComponent*& _Script_SwGame::SwTKProjectileBase::get_AbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_SwGame::SwTKProjectileBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwTKProjectileBase");
    return result;
}
