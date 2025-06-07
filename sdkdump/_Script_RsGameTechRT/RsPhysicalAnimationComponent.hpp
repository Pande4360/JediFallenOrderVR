#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsPhysicalAnimationBaseComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationComponent : public _Script_RsTechRT::RsPhysicalAnimationBaseComponent {
    private: char pad_180[0x8b0]; public:
    bool get_ForceToCallTickDuringTickComponent();
    void set_ForceToCallTickDuringTickComponent(bool value);
    bool get_DrawDebugSkeletonFromAnimation();
    void set_DrawDebugSkeletonFromAnimation(bool value);
    int32_t& get_m_CurrentTestScenario();
    float& get_m_Scenario01_Amplitude();
    bool get_m_UseDebugAngularDriveParameters();
    void set_m_UseDebugAngularDriveParameters(bool value);
    float& get_m_DebugAngularDriveParameters_Spring();
    float& get_m_DebugAngularDriveParameters_Damping();
    bool get_m_DebugUseOnlyChildAngularVelocityToDriveMotors();
    void set_m_DebugUseOnlyChildAngularVelocityToDriveMotors(bool value);
    bool get_m_DebugUseSmoothedAngularVelocitiesToDriveMotors();
    void set_m_DebugUseSmoothedAngularVelocitiesToDriveMotors(bool value);
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_DebugTestScenarioProfile();
    _Script_Engine::Actor*& get_DebugOtherActorToApplyTestMovement();
    void* get_m_ProfilesQueue();
    void* get_m_Parameters();
    void* get_m_AttachedActors();
    static _Script_CoreUObject::Class* static_class();
    void OnPostPerformBlendInPhysics(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent);
    void OnPerformCustomBlendInPhysics_BuddyDroid(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void*& InRequiredBones, void*& InBoneSpaceTransforms);
    void OnPerformCustomBlendInPhysics(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void*& InRequiredBones, void*& InBoneSpaceTransforms);
}; // Size: 0xa30
#pragma pack(pop)
}
