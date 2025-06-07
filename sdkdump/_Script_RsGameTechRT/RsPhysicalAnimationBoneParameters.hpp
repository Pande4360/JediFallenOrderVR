#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationBoneParameters {
    private: char pad_0[0x68]; public:
    void* get_BoneName();
    void* get_BodyMode();
    void* get_DriveMode();
    void* get_MotorDriveModel();
    float& get_MotorDriveStrength();
    void* get_VelocityDriveMode();
    float& get_VelocityDriveStrength();
    float& get_GravityScale();
    float& get_LinearDamping();
    float& get_AngularDamping();
    float& get_PhysicsBlendWeight();
    bool get_IgnorePhysicsBlendWeightFromAnimationNotify();
    void set_IgnorePhysicsBlendWeightFromAnimationNotify(bool value);
    bool get_DisableAllCollisionResponses();
    void set_DisableAllCollisionResponses(bool value);
    bool get_DisableCollisionResponseIfOverlapsCollisions();
    void set_DisableCollisionResponseIfOverlapsCollisions(bool value);
    bool get_TurnToKinematicBodyModeIfOverlapsCollisions();
    void set_TurnToKinematicBodyModeIfOverlapsCollisions(bool value);
    void* get_TurnToKinematicBodyModeIfThatBodyOverlapsCollisions();
    float& get_TurnToFreeBodyModeIfLinearDivergenceIsMoreThan();
    void* get_TurnToFreeBodyModeIfThatBodyIsInFreeMode();
    void* get_ConstraintDriveModeParameters();
    _Script_Engine::PhysicalMaterial*& get_PhysicalMaterialToUse();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
