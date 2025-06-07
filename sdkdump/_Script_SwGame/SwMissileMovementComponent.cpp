#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "SwMissileMovementComponent.hpp"
void _Script_SwGame::SwMissileMovementComponent::StopHoming() {
    return;
}
void* _Script_SwGame::SwMissileMovementComponent::get_OnFinishedHoming() {
    return (void*)((uintptr_t)this + 0x270);
}
float& _Script_SwGame::SwMissileMovementComponent::get_Acceleration() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Script_SwGame::SwMissileMovementComponent::get_Jerk() {
    return *(float*)((uintptr_t)this + 0x294);
}
float& _Script_SwGame::SwMissileMovementComponent::get_TrackingLerpValue() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Script_SwGame::SwMissileMovementComponent::get_Speed() {
    return *(float*)((uintptr_t)this + 0x290);
}
void _Script_SwGame::SwMissileMovementComponent::SetSpeed(float InSpeed) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwMissileMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMissileMovementComponent");
    return result;
}
void _Script_SwGame::SwMissileMovementComponent::SetMaxSpeed(float InMaxSpeed) {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::SetJerk(float InJerk) {
    return;
}
float _Script_SwGame::SwMissileMovementComponent::GetJerk() {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::SetHomingTarget(_Script_Engine::Actor* HomingTargetActor) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::SwMissileMovementComponent::GetHomingTarget() {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::SetAcceleration(float InAcceleration) {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::NotifyEndForcePull() {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::NotifyBeginForcePull() {
    return;
}
bool _Script_SwGame::SwMissileMovementComponent::IsInteruptedByTK() {
    return;
}
void _Script_SwGame::SwMissileMovementComponent::InteruptByTK() {
    return;
}
float _Script_SwGame::SwMissileMovementComponent::GetSpeed() {
    return;
}
float _Script_SwGame::SwMissileMovementComponent::GetMissileMaxSpeed() {
    return;
}
float _Script_SwGame::SwMissileMovementComponent::GetAcceleration() {
    return;
}
