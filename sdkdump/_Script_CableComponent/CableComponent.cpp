#include "..\FUObjectArray.hpp"
#include "CableComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_CableComponent::CableComponent::get_bAttachStart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb60 + 0)) & 1 != 0;
}
float& _Script_CableComponent::CableComponent::get_CollisionFriction() {
    return *(float*)((uintptr_t)this + 0xba8);
}
void _Script_CableComponent::CableComponent::set_bAttachEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb61 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bAttachEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xb61 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bAttachStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb60 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CableComponent::CableComponent::get_AttachEndTo() {
    return (void*)((uintptr_t)this + 0xb68);
}
void* _Script_CableComponent::CableComponent::get_AttachEndToSocketName() {
    return (void*)((uintptr_t)this + 0xb80);
}
void* _Script_CableComponent::CableComponent::get_EndLocation() {
    return (void*)((uintptr_t)this + 0xb88);
}
float& _Script_CableComponent::CableComponent::get_CableLength() {
    return *(float*)((uintptr_t)this + 0xb94);
}
int32_t& _Script_CableComponent::CableComponent::get_NumSegments() {
    return *(int32_t*)((uintptr_t)this + 0xb98);
}
float& _Script_CableComponent::CableComponent::get_SubstepTime() {
    return *(float*)((uintptr_t)this + 0xb9c);
}
int32_t& _Script_CableComponent::CableComponent::get_SolverIterations() {
    return *(int32_t*)((uintptr_t)this + 0xba0);
}
bool _Script_CableComponent::CableComponent::get_bEnableStiffness() {
    return (*(uint8_t*)((uintptr_t)this + 0xba4 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bEnableStiffness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xba5 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CableComponent::CableComponent::get_CableForce() {
    return (void*)((uintptr_t)this + 0xbac);
}
float& _Script_CableComponent::CableComponent::get_CableGravityScale() {
    return *(float*)((uintptr_t)this + 0xbb8);
}
float& _Script_CableComponent::CableComponent::get_CableWidth() {
    return *(float*)((uintptr_t)this + 0xbbc);
}
int32_t& _Script_CableComponent::CableComponent::get_NumSides() {
    return *(int32_t*)((uintptr_t)this + 0xbc0);
}
float& _Script_CableComponent::CableComponent::get_TileMaterial() {
    return *(float*)((uintptr_t)this + 0xbc4);
}
_Script_CoreUObject::Class* _Script_CableComponent::CableComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CableComponent.CableComponent");
    return result;
}
void _Script_CableComponent::CableComponent::SetAttachEndTo(_Script_Engine::Actor* Actor, void* ComponentProperty, void* SocketName) {
    return;
}
void _Script_CableComponent::CableComponent::GetCableParticleLocations(void*& Locations) {
    return;
}
_Script_Engine::SceneComponent* _Script_CableComponent::CableComponent::GetAttachedComponent() {
    return;
}
_Script_Engine::Actor* _Script_CableComponent::CableComponent::GetAttachedActor() {
    return;
}
