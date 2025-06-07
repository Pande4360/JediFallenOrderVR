#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ProjectileMovementComponent : public MovementComponent {
    private: char pad_1b0[0xc0]; public:
    float& get_InitialSpeed();
    float& get_MaxSpeed();
    bool get_bRotationFollowsVelocity();
    void set_bRotationFollowsVelocity(bool value);
    bool get_bShouldBounce();
    void set_bShouldBounce(bool value);
    bool get_bInitialVelocityInLocalSpace();
    void set_bInitialVelocityInLocalSpace(bool value);
    bool get_bForceSubStepping();
    void set_bForceSubStepping(bool value);
    bool get_bSimulationEnabled();
    void set_bSimulationEnabled(bool value);
    bool get_bSweepCollision();
    void set_bSweepCollision(bool value);
    bool get_bIsHomingProjectile();
    void set_bIsHomingProjectile(bool value);
    bool get_bBounceAngleAffectsFriction();
    void set_bBounceAngleAffectsFriction(bool value);
    bool get_bIsSliding();
    void set_bIsSliding(bool value);
    bool get_bInterpMovement();
    void set_bInterpMovement(bool value);
    bool get_bInterpRotation();
    void set_bInterpRotation(bool value);
    float& get_PreviousHitTime();
    void* get_PreviousHitNormal();
    float& get_ProjectileGravityScale();
    float& get_Buoyancy();
    float& get_Bounciness();
    float& get_Friction();
    float& get_BounceVelocityStopSimulatingThreshold();
    float& get_MinFrictionFraction();
    void* get_OnProjectileBounce();
    void* get_OnProjectileStop();
    float& get_HomingAccelerationMagnitude();
    void* get_HomingTargetComponent();
    float& get_MaxSimulationTimeStep();
    int32_t& get_MaxSimulationIterations();
    int32_t& get_BounceAdditionalIterations();
    float& get_InterpLocationTime();
    float& get_InterpRotationTime();
    float& get_InterpLocationMaxLagDistance();
    float& get_InterpLocationSnapToTargetDistance();
    static _Script_CoreUObject::Class* static_class();
    void StopSimulating(_Script_Engine::HitResult& HitResult);
    void SetVelocityInLocalSpace(_Script_CoreUObject::Vector NewVelocity);
    void SetInterpolatedComponent(_Script_Engine::SceneComponent* Component);
    void ResetInterpolation();
    void MoveInterpolationTarget(_Script_CoreUObject::Vector& NewLocation, _Script_CoreUObject::Rotator& NewRotation);
    _Script_CoreUObject::Vector LimitVelocity(_Script_CoreUObject::Vector NewVelocity);
    bool IsVelocityUnderSimulationThreshold();
    bool IsInterpolationComplete();
}; // Size: 0x270
#pragma pack(pop)
}
