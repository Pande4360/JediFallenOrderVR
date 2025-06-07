#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsRagdollComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0xa8]; public:
    float& get_RagdollMaximumLinearVelocity();
    float& get_RagdollMaximumAngularVelocity();
    static _Script_CoreUObject::Class* static_class();
    void StartFreeFallingRagdoll(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent, bool startSimulatePhysics);
    void SetupContinuousRotation(bool applyContinuousRotation, _Script_CoreUObject::Vector continuousRotationStrength);
    void OverrideLinearDampingForAllBodies(float newLinearDamping);
    void OverrideAngularDampingForAllBodies(float newAngularDamping);
}; // Size: 0x218
#pragma pack(pop)
}
