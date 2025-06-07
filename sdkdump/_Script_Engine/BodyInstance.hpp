#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BodyInstance {
    private: char pad_0[0x640]; public:
    void* get_ObjectType();
    void* get_CollisionEnabled();
    void* get_SleepFamily();
    void* get_DOFMode();
    void* get_NavPermissions();
    void* get_NavPermissionDetails();
    bool get_bAllowIkWhileHidden();
    void set_bAllowIkWhileHidden(bool value);
    bool get_bUseCCD();
    void set_bUseCCD(bool value);
    bool get_bNotifyRigidBodyCollision();
    void set_bNotifyRigidBodyCollision(bool value);
    _Script_CoreUObject::Object*& get_ImpactEvent();
    _Script_CoreUObject::Object*& get_RollingLoop();
    _Script_CoreUObject::Object*& get_RollingStop();
    float& get_MaxAudioObjectLinearVelocity();
    float& get_MaxAudioObjectAngularVelocity();
    float& get_MaxAudioObjectImpactVelocity();
    float& get_MinimumTimeBetweenImpactSounds();
    void* get_DisableCollisionOnSpawnOverride();
    bool get_bSimulatePhysics();
    void set_bSimulatePhysics(bool value);
    bool get_bOverrideMass();
    void set_bOverrideMass(bool value);
    bool get_bOverrideWeightClass();
    void set_bOverrideWeightClass(bool value);
    bool get_bEnableGravity();
    void set_bEnableGravity(bool value);
    bool get_bAutoWeld();
    void set_bAutoWeld(bool value);
    bool get_bStartAwake();
    void set_bStartAwake(bool value);
    bool get_bGenerateWakeEvents();
    void set_bGenerateWakeEvents(bool value);
    bool get_bUpdateMassWhenScaleChanges();
    void set_bUpdateMassWhenScaleChanges(bool value);
    bool get_bLockTranslation();
    void set_bLockTranslation(bool value);
    bool get_bLockRotation();
    void set_bLockRotation(bool value);
    bool get_bLockXTranslation();
    void set_bLockXTranslation(bool value);
    bool get_bLockYTranslation();
    void set_bLockYTranslation(bool value);
    bool get_bLockZTranslation();
    void set_bLockZTranslation(bool value);
    bool get_bLockXRotation();
    void set_bLockXRotation(bool value);
    bool get_bLockYRotation();
    void set_bLockYRotation(bool value);
    bool get_bLockZRotation();
    void set_bLockZRotation(bool value);
    bool get_bOverrideMaxAngularVelocity();
    void set_bOverrideMaxAngularVelocity(bool value);
    bool get_bUseAsyncScene();
    void set_bUseAsyncScene(bool value);
    bool get_bOverrideMaxDepenetrationVelocity();
    void set_bOverrideMaxDepenetrationVelocity(bool value);
    bool get_bOverrideWalkableSlopeOnInstance();
    void set_bOverrideWalkableSlopeOnInstance(bool value);
    bool get_bInterpolateWhenSubStepping();
    void set_bInterpolateWhenSubStepping(bool value);
    bool get_bDisableCollisionOnSpawn();
    void set_bDisableCollisionOnSpawn(bool value);
    bool get_bDontApplyDamageFromPhysicsCollision();
    void set_bDontApplyDamageFromPhysicsCollision(bool value);
    bool get_bDontCollideWhenStandingOn();
    void set_bDontCollideWhenStandingOn(bool value);
    void* get_WeightClassOverride();
    _Script_CoreUObject::Object*& get_OverrideDamageFromPhysicsCollision();
    float& get_TimeDilation();
    void* get_CollisionProfileName();
    void* get_CollisionResponses();
    float& get_MaxDepenetrationVelocity();
    float& get_MassInKgOverride();
    float& get_LinearDamping();
    float& get_AngularDamping();
    void* get_CustomDOFPlaneNormal();
    void* get_COMNudge();
    float& get_MassScale();
    void* get_InertiaTensorScale();
    void* get_WalkableSlopeOverride();
    _Script_Engine::PhysicalMaterial*& get_PhysMaterialOverride();
    float& get_MaxAngularVelocity();
    float& get_CustomSleepThresholdMultiplier();
    float& get_StabilizationThresholdMultiplier();
    float& get_PhysicsBlendWeight();
    int32_t& get_PositionSolverIterationCount();
    int32_t& get_VelocitySolverIterationCount();
    int32_t& get_RsDominanceGroup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x640
#pragma pack(pop)
}
