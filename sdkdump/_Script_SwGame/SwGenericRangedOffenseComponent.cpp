#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "SwGenericRangedOffenseComponent.hpp"
#include "SwMuzzleTransformComponent.hpp"
#include "SwRangedOffenseBaseComponent.hpp"
void* _Script_SwGame::SwGenericRangedOffenseComponent::get_AlternateProjectile() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_SwGame::SwGenericRangedOffenseComponent::get_PrimaryProjectile() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_SwGame::SwMuzzleTransformComponent*& _Script_SwGame::SwGenericRangedOffenseComponent::get_MuzzleTransform() {
    return *(_Script_SwGame::SwMuzzleTransformComponent**)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGenericRangedOffenseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGenericRangedOffenseComponent");
    return result;
}
void _Script_SwGame::SwGenericRangedOffenseComponent::OnMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
