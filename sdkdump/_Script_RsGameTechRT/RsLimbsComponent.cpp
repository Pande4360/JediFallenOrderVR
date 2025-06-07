#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsDamageInfo.hpp"
#include "RsDamageParams.hpp"
#include "RsLimbDismembermentData.hpp"
#include "RsLimbInfo.hpp"
#include "RsLimbsComponent.hpp"
void _Script_RsGameTechRT::RsLimbsComponent::SetLimbDismembermentData(_Script_GameplayTags::GameplayTag LimbTag, _Script_RsGameTechRT::RsLimbDismembermentData& DismembermentData) {
    return;
}
void* _Script_RsGameTechRT::RsLimbsComponent::get_OnLimbOverlapped() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_RsGameTechRT::RsLimbsComponent::get_OnLimbDestroyed() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_RsGameTechRT::RsLimbsComponent::get_OnAnyLimbDamage() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsLimbsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsLimbsComponent");
    return result;
}
void* _Script_RsGameTechRT::RsLimbsComponent::get_Limbs() {
    return (void*)((uintptr_t)this + 0x300);
}
void _Script_RsGameTechRT::RsLimbsComponent::SpawnDismemberedLimb(_Script_GameplayTags::GameplayTag LimbTag) {
    return;
}
bool _Script_RsGameTechRT::RsLimbsComponent::IsLimbAlive(_Script_GameplayTags::GameplayTag LimbTag) {
    return;
}
void _Script_RsGameTechRT::RsLimbsComponent::SetLimbVisibility(_Script_GameplayTags::GameplayTag LimbTag, bool bVisible) {
    return;
}
void _Script_RsGameTechRT::RsLimbsComponent::SetLimbCollision(_Script_GameplayTags::GameplayTag LimbTag, void* CollisionType) {
    return;
}
void _Script_RsGameTechRT::RsLimbsComponent::RegisterLimb(_Script_RsGameTechRT::RsLimbInfo& LimbInfo) {
    return;
}
float _Script_RsGameTechRT::RsLimbsComponent::ReduceLimbHealth(_Script_GameplayTags::GameplayTag LimbTag, _Script_RsGameTechRT::RsDamageInfo& DamageInfo) {
    return;
}
float _Script_RsGameTechRT::RsLimbsComponent::KillLimb(_Script_GameplayTags::GameplayTag LimbTag, void* DamageTypeClass, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* DamageInstigator, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void* _Script_RsGameTechRT::RsLimbsComponent::GetRegisteredLimbTags() {
    return;
}
float _Script_RsGameTechRT::RsLimbsComponent::GetLimbHealth(_Script_GameplayTags::GameplayTag LimbTag) {
    return;
}
_Script_Engine::Controller* _Script_RsGameTechRT::RsLimbsComponent::GetLastDamageInstigator() {
    return;
}
_Script_RsGameTechRT::RsDamageInfo _Script_RsGameTechRT::RsLimbsComponent::GetLastDamageInfo() {
    return;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsLimbsComponent::GetLastDamageCauser() {
    return;
}
_Script_GameplayTags::GameplayTag _Script_RsGameTechRT::RsLimbsComponent::FindLimbWithCollider(_Script_Engine::PrimitiveComponent* Collider) {
    return;
}
