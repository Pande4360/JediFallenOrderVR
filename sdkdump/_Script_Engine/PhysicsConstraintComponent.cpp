#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "PhysicsConstraintComponent.hpp"
#include "PhysicsConstraintTemplate.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::PhysicsConstraintComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsConstraintComponent");
    return result;
}
_Script_Engine::Actor*& _Script_Engine::PhysicsConstraintComponent::get_ConstraintActor1() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2c8);
}
void* _Script_Engine::PhysicsConstraintComponent::get_ComponentName2() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_Engine::PhysicsConstraintComponent::get_ComponentName1() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_Engine::PhysicsConstraintTemplate*& _Script_Engine::PhysicsConstraintComponent::get_ConstraintSetup() {
    return *(_Script_Engine::PhysicsConstraintTemplate**)((uintptr_t)this + 0x2f8);
}
_Script_Engine::Actor*& _Script_Engine::PhysicsConstraintComponent::get_ConstraintActor2() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::PhysicsConstraintComponent::get_ConstraintInstance() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Engine::PhysicsConstraintComponent::get_OnConstraintBroken() {
    return (void*)((uintptr_t)this + 0x300);
}
void _Script_Engine::PhysicsConstraintComponent::SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetOrientationDriveSLERP(bool bEnableSLERP) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearZLimit(void* ConstraintType, float LimitSize) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearYLimit(void* ConstraintType, float LimitSize) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearXLimit(void* ConstraintType, float LimitSize) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearVelocityTarget(_Script_CoreUObject::Vector& InVelTarget) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearPositionTarget(_Script_CoreUObject::Vector& InPosTarget) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetDisableCollision(bool bDisableCollision) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetConstraintReferencePosition(void* Frame, _Script_CoreUObject::Vector& RefPosition) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetConstraintReferenceOrientation(void* Frame, _Script_CoreUObject::Vector& PriAxis, _Script_CoreUObject::Vector& SecAxis) {
    return;
}
float _Script_Engine::PhysicsConstraintComponent::GetCurrentSwing2() {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetConstraintReferenceFrame(void* Frame, _Script_CoreUObject::Transform& RefFrame) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetConstrainedComponents(_Script_Engine::PrimitiveComponent* Component1, void* BoneName1, _Script_Engine::PrimitiveComponent* Component2, void* BoneName2) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularVelocityTarget(_Script_CoreUObject::Vector& InVelTarget) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularTwistLimit(void* ConstraintType, float TwistLimitAngle) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularVelocityDriveSLERP(bool bEnableSLERP) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularDriveMode(void* DriveMode) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularSwing2Limit(void* MotionType, float Swing2LimitAngle) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularSwing1Limit(void* MotionType, float Swing1LimitAngle) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularOrientationTarget(_Script_CoreUObject::Rotator& InPosTarget) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold) {
    return;
}
bool _Script_Engine::PhysicsConstraintComponent::IsBroken() {
    return;
}
float _Script_Engine::PhysicsConstraintComponent::GetCurrentTwist() {
    return;
}
float _Script_Engine::PhysicsConstraintComponent::GetCurrentSwing1() {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::GetConstraintForce(_Script_CoreUObject::Vector& OutLinearForce, _Script_CoreUObject::Vector& OutAngularForce) {
    return;
}
void _Script_Engine::PhysicsConstraintComponent::BreakConstraint() {
    return;
}
