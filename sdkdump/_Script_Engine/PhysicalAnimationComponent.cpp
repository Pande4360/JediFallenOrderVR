#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "ActorComponent.hpp"
#include "PhysicalAnimationComponent.hpp"
#include "PhysicalAnimationData.hpp"
#include "SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::PhysicalAnimationComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicalAnimationComponent");
    return result;
}
float& _Script_Engine::PhysicalAnimationComponent::get_StrengthMultiplyer() {
    return *(float*)((uintptr_t)this + 0x170);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Engine::PhysicalAnimationComponent::get_SkeletalMeshComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x178);
}
void _Script_Engine::PhysicalAnimationComponent::SetStrengthMultiplyer(float InStrengthMultiplyer) {
    return;
}
void _Script_Engine::PhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow(void* BodyName, _Script_Engine::PhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
    return;
}
void _Script_Engine::PhysicalAnimationComponent::SetSkeletalMeshComponent(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::PhysicalAnimationComponent::GetBodyTargetTransform(void* BodyName) {
    return;
}
void _Script_Engine::PhysicalAnimationComponent::ApplyPhysicalAnimationSettings(void* BodyName, _Script_Engine::PhysicalAnimationData& PhysicalAnimationData) {
    return;
}
void _Script_Engine::PhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow(void* BodyName, void* ProfileName, bool bIncludeSelf, bool bClearNotFound) {
    return;
}
