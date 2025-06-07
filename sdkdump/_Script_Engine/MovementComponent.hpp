#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PhysicsVolume;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MovementComponent : public ActorComponent {
    private: char pad_170[0x40]; public:
    _Script_Engine::SceneComponent*& get_UpdatedComponent();
    _Script_Engine::PrimitiveComponent*& get_UpdatedPrimitive();
    void* get_Velocity();
    void* get_PlaneConstraintNormal();
    void* get_PlaneConstraintOrigin();
    bool get_bUpdateOnlyIfRendered();
    void set_bUpdateOnlyIfRendered(bool value);
    bool get_bAutoUpdateTickRegistration();
    void set_bAutoUpdateTickRegistration(bool value);
    bool get_bTickBeforeOwner();
    void set_bTickBeforeOwner(bool value);
    bool get_bAutoRegisterUpdatedComponent();
    void set_bAutoRegisterUpdatedComponent(bool value);
    bool get_bConstrainToPlane();
    void set_bConstrainToPlane(bool value);
    bool get_bSnapToPlaneAtStart();
    void set_bSnapToPlaneAtStart(bool value);
    bool get_bAutoRegisterPhysicsVolumeUpdates();
    void set_bAutoRegisterPhysicsVolumeUpdates(bool value);
    bool get_bComponentShouldUpdatePhysicsVolume();
    void set_bComponentShouldUpdatePhysicsVolume(bool value);
    void* get_PlaneConstraintAxisSetting();
    static _Script_CoreUObject::Class* static_class();
    void StopMovementImmediately();
    void SnapUpdatedComponentToPlane();
    void SetUpdatedComponent(_Script_Engine::SceneComponent* NewUpdatedComponent);
    void SetPlaneConstraintOrigin(_Script_CoreUObject::Vector PlaneOrigin);
    void SetPlaneConstraintNormal(_Script_CoreUObject::Vector PlaneNormal);
    void SetPlaneConstraintFromVectors(_Script_CoreUObject::Vector Forward, _Script_CoreUObject::Vector Up);
    void SetPlaneConstraintEnabled(bool bEnabled);
    void SetPlaneConstraintAxisSetting(void* NewAxisSetting);
    void PhysicsVolumeChanged(_Script_Engine::PhysicsVolume* NewVolume);
    bool K2_MoveUpdatedComponent(_Script_CoreUObject::Vector Delta, _Script_CoreUObject::Rotator NewRotation, _Script_Engine::HitResult& OutHit, bool bSweep, bool bTeleport);
    float K2_GetModifiedMaxSpeed();
    float K2_GetMaxSpeedModifier();
    bool IsExceedingMaxSpeed(float MaxSpeed);
    _Script_CoreUObject::Vector GetPlaneConstraintOrigin();
    _Script_CoreUObject::Vector GetPlaneConstraintNormal();
    void* GetPlaneConstraintAxisSetting();
    _Script_Engine::PhysicsVolume* GetPhysicsVolume();
    float GetMaxSpeed();
    float GetGravityZ();
    _Script_CoreUObject::Vector ConstrainNormalToPlane(_Script_CoreUObject::Vector Normal);
    _Script_CoreUObject::Vector ConstrainLocationToPlane(_Script_CoreUObject::Vector Location);
    _Script_CoreUObject::Vector ConstrainDirectionToPlane(_Script_CoreUObject::Vector Direction);
}; // Size: 0x1b0
#pragma pack(pop)
}
