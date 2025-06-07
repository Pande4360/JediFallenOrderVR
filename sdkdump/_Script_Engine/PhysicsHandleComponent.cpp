#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
#include "PhysicsHandleComponent.hpp"
#include "PrimitiveComponent.hpp"
void _Script_Engine::PhysicsHandleComponent::SetAngularStiffness(float NewAngularStiffness) {
    return;
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::PhysicsHandleComponent::get_GrabbedComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x170);
}
float& _Script_Engine::PhysicsHandleComponent::get_LinearDamping() {
    return *(float*)((uintptr_t)this + 0x184);
}
void _Script_Engine::PhysicsHandleComponent::set_bSoftAngularConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::PhysicsHandleComponent::get_AngularStiffness() {
    return *(float*)((uintptr_t)this + 0x190);
}
bool _Script_Engine::PhysicsHandleComponent::get_bSoftAngularConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 2 != 0;
}
void _Script_Engine::PhysicsHandleComponent::set_bInterpolateTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PhysicsHandleComponent::get_bSoftLinearConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 4 != 0;
}
void _Script_Engine::PhysicsHandleComponent::set_bSoftLinearConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PhysicsHandleComponent::get_bInterpolateTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 8 != 0;
}
float& _Script_Engine::PhysicsHandleComponent::get_LinearStiffness() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Script_Engine::PhysicsHandleComponent::get_AngularDamping() {
    return *(float*)((uintptr_t)this + 0x18c);
}
float& _Script_Engine::PhysicsHandleComponent::get_InterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x200);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsHandleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsHandleComponent");
    return result;
}
void _Script_Engine::PhysicsHandleComponent::SetTargetRotation(_Script_CoreUObject::Rotator NewRotation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetTargetLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetTargetLocation(_Script_CoreUObject::Vector NewLocation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetLinearStiffness(float NewLinearStiffness) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetLinearDamping(float newLinearDamping) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetInterpolationSpeed(float NewInterpolationSpeed) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::SetAngularDamping(float newAngularDamping) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::ReleaseComponent() {
    return;
}
void _Script_Engine::PhysicsHandleComponent::GrabComponentAtLocationWithRotation(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::GrabComponentAtLocation(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector GrabLocation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::GrabComponent(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector GrabLocation, bool bConstrainRotation) {
    return;
}
void _Script_Engine::PhysicsHandleComponent::GetTargetLocationAndRotation(_Script_CoreUObject::Vector& TargetLocation, _Script_CoreUObject::Rotator& TargetRotation) {
    return;
}
_Script_Engine::PrimitiveComponent* _Script_Engine::PhysicsHandleComponent::GetGrabbedComponent() {
    return;
}
