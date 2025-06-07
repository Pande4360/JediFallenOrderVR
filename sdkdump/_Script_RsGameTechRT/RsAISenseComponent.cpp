#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsAISenseComponent.hpp"
#include "RsTargetableComponent.hpp"
void* _Script_RsGameTechRT::RsAISenseComponent::get_AlertAwarenessState() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_DefaultSensorDefinitions() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_SensorDefinitions() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_StimuliClasses() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_FullyAwareToPartiallyAwareCurve() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_PartiallyAwareToUnawareCurve() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_RsGameTechRT::RsAISenseComponent::get_AggroAwarenessState() {
    return (void*)((uintptr_t)this + 0x1e0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISenseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISenseComponent");
    return result;
}
void _Script_RsGameTechRT::RsAISenseComponent::OwnerDiedHandler(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_RsGameTechRT::RsAISenseComponent::OnActorAwareOfDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Script_RsGameTechRT::RsAISenseComponent::OnFactionChanged(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent) {
    return;
}
void _Script_RsGameTechRT::RsAISenseComponent::OnActorAwareOfTookAnyOrNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
