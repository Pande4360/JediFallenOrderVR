#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "SwProjectileComponent.hpp"
#include "SwReflectableProjectileComponent.hpp"
void* _Script_SwGame::SwReflectableProjectileComponent::get_OnProjectileReflected() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_SwGame::SwReflectableProjectileComponent::get_bReflected() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
void _Script_SwGame::SwReflectableProjectileComponent::ReflectTowardsOwner(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator, float InNewSpeed, void* InSocketName, _Script_CoreUObject::Vector DefaultTrackingOffset) {
    return;
}
void* _Script_SwGame::SwReflectableProjectileComponent::get_OnProjectileDeflected() {
    return (void*)((uintptr_t)this + 0x190);
}
void _Script_SwGame::SwReflectableProjectileComponent::set_bReflected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwReflectableProjectileComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwReflectableProjectileComponent");
    return result;
}
void _Script_SwGame::SwReflectableProjectileComponent::ReflectTowardsCamera(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator, float InNewSpeed) {
    return;
}
