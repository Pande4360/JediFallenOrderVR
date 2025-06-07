#include "..\FUObjectArray.hpp"
#include "PathFollowingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\NavMovementComponent.hpp"
#include "..\_Script_NavigationSystem\NavigationData.hpp"
_Script_Engine::NavMovementComponent*& _Script_AIModule::PathFollowingComponent::get_MovementComp() {
    return *(_Script_Engine::NavMovementComponent**)((uintptr_t)this + 0x1a8);
}
void* _Script_AIModule::PathFollowingComponent::GetPathActionType() {
    return;
}
_Script_NavigationSystem::NavigationData*& _Script_AIModule::PathFollowingComponent::get_MyNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Class* _Script_AIModule::PathFollowingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PathFollowingComponent");
    return result;
}
void _Script_AIModule::PathFollowingComponent::OnActorBump(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* OtherActor, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
_Script_CoreUObject::Vector _Script_AIModule::PathFollowingComponent::GetPathDestination() {
    return;
}
