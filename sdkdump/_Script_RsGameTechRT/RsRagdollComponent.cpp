#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "RsRagdollComponent.hpp"
void _Script_RsGameTechRT::RsRagdollComponent::OverrideLinearDampingForAllBodies(float newLinearDamping) {
    return;
}
float& _Script_RsGameTechRT::RsRagdollComponent::get_RagdollMaximumLinearVelocity() {
    return *(float*)((uintptr_t)this + 0x170);
}
float& _Script_RsGameTechRT::RsRagdollComponent::get_RagdollMaximumAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x174);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRagdollComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRagdollComponent");
    return result;
}
void _Script_RsGameTechRT::RsRagdollComponent::StartFreeFallingRagdoll(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent, bool startSimulatePhysics) {
    return;
}
void _Script_RsGameTechRT::RsRagdollComponent::SetupContinuousRotation(bool applyContinuousRotation, _Script_CoreUObject::Vector continuousRotationStrength) {
    return;
}
void _Script_RsGameTechRT::RsRagdollComponent::OverrideAngularDampingForAllBodies(float newAngularDamping) {
    return;
}
