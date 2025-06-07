#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct PhysicsConstraintTemplate;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsConstraintComponent : public SceneComponent {
    private: char pad_2d0[0x200]; public:
    _Script_Engine::Actor*& get_ConstraintActor1();
    void* get_ComponentName1();
    _Script_Engine::Actor*& get_ConstraintActor2();
    void* get_ComponentName2();
    _Script_Engine::PhysicsConstraintTemplate*& get_ConstraintSetup();
    void* get_OnConstraintBroken();
    void* get_ConstraintInstance();
    static _Script_CoreUObject::Class* static_class();
    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    void SetLinearZLimit(void* ConstraintType, float LimitSize);
    void SetLinearYLimit(void* ConstraintType, float LimitSize);
    void SetLinearXLimit(void* ConstraintType, float LimitSize);
    void SetLinearVelocityTarget(_Script_CoreUObject::Vector& InVelTarget);
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPositionTarget(_Script_CoreUObject::Vector& InPosTarget);
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    void SetDisableCollision(bool bDisableCollision);
    void SetConstraintReferencePosition(void* Frame, _Script_CoreUObject::Vector& RefPosition);
    void SetConstraintReferenceOrientation(void* Frame, _Script_CoreUObject::Vector& PriAxis, _Script_CoreUObject::Vector& SecAxis);
    void SetConstraintReferenceFrame(void* Frame, _Script_CoreUObject::Transform& RefFrame);
    void SetConstrainedComponents(_Script_Engine::PrimitiveComponent* Component1, void* BoneName1, _Script_Engine::PrimitiveComponent* Component2, void* BoneName2);
    void SetAngularVelocityTarget(_Script_CoreUObject::Vector& InVelTarget);
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularTwistLimit(void* ConstraintType, float TwistLimitAngle);
    void SetAngularSwing2Limit(void* MotionType, float Swing2LimitAngle);
    void SetAngularSwing1Limit(void* MotionType, float Swing1LimitAngle);
    void SetAngularOrientationTarget(_Script_CoreUObject::Rotator& InPosTarget);
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetAngularDriveMode(void* DriveMode);
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    bool IsBroken();
    float GetCurrentTwist();
    float GetCurrentSwing2();
    float GetCurrentSwing1();
    void GetConstraintForce(_Script_CoreUObject::Vector& OutLinearForce, _Script_CoreUObject::Vector& OutAngularForce);
    void BreakConstraint();
}; // Size: 0x4d0
#pragma pack(pop)
}
