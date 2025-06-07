#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsSweptCollisionComponent.hpp"
bool _Script_RsTechRT::RsSweptCollisionComponent::get_bTraceComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsSweptCollisionComponent::get_OnSweepHit() {
    return (void*)((uintptr_t)this + 0x178);
}
void _Script_RsTechRT::RsSweptCollisionComponent::set_bTraceComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsTechRT::RsSweptCollisionComponent::get_Extrapolation() {
    return *(float*)((uintptr_t)this + 0x174);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsSweptCollisionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsSweptCollisionComponent");
    return result;
}
void _Script_RsTechRT::RsSweptCollisionComponent::IgnoreActor(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsTechRT::RsSweptCollisionComponent::IgnoreComponent(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
