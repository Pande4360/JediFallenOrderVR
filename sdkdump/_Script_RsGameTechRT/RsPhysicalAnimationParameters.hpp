#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationMotorsDriveProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationParameters {
    private: char pad_0[0x160]; public:
    bool get_DoNotActivate();
    void set_DoNotActivate(bool value);
    void* get_ProfileName();
    void* get_DefaultBone();
    void* get_RootBoneBody();
    void* get_BonesOverride();
    void* get_JointsAngularOverride();
    void* get_JointsLinearOverride();
    float& get_MaximumLinearVelocity();
    float& get_MaximumAngularVelocity();
    float& get_MinimumPhysicsBlendWeightFromAnimationNotifies();
    float& get_MaximumPhysicsBlendWeightFromAnimationNotifies();
    float& get_OverrideBlendTimeForPhysicsBlendWeightFromAnimationNotifies();
    float& get_OverrideProjectionLinearThreshold();
    void* get_OverrideProjectionActivation();
    void* get_blendingCustomController();
    void* get_BlendingCustomControllerParameters();
    void* get_CustomBlendInPhysics();
    void* get_ProfilePriority();
    bool get_UpdateActorWorldPositionFromPhysics();
    void set_UpdateActorWorldPositionFromPhysics(bool value);
    bool get_UseRsDominanceGroupFromOwnerKineticActor();
    void set_UseRsDominanceGroupFromOwnerKineticActor(bool value);
    bool get_EnableRagdollCollisionProfile();
    void set_EnableRagdollCollisionProfile(bool value);
    bool get_EnableHardcodedCollisionSettings();
    void set_EnableHardcodedCollisionSettings(bool value);
    bool get_ApplyRootMotion();
    void set_ApplyRootMotion(bool value);
    bool get_ZeroRsPhysicsVelocity();
    void set_ZeroRsPhysicsVelocity(bool value);
    bool get_ConfigureCollisionSettingsForCharacterWeapons();
    void set_ConfigureCollisionSettingsForCharacterWeapons(bool value);
    bool get_ModifyPhysicsAssetCollisionsToIncludeWeapons();
    void set_ModifyPhysicsAssetCollisionsToIncludeWeapons(bool value);
    bool get_SetupRagdollSoundEvents();
    void set_SetupRagdollSoundEvents(bool value);
    bool get_DoNotForceDependentComponentsToPostPhysics();
    void set_DoNotForceDependentComponentsToPostPhysics(bool value);
    bool get_UseExclusivePhysicsScene();
    void set_UseExclusivePhysicsScene(bool value);
    void* get_TimeUpdateScheme();
    float& get_OverrideDeltaTimeForSmoothVelocity();
    _Script_Engine::PhysicalMaterial*& get_PhysicalMaterialOverride();
    _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveProfile*& get_MotorsDriveProfile();
    void* get_MotorsStrengthModifiers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
