#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsActorSkeletalMeshComponent : public _Script_Engine::SkeletalMeshComponent {
    private: char pad_1240[0x30]; public:
    void* get_CompatibleSkeletonList();
    void* get_m_SkeletalMeshComponentsWaitingForPhysics();
    static _Script_CoreUObject::Class* static_class();
    void RemoveAnimationPhysicsTickDependancy(_Script_Engine::SkeletalMeshComponent* Dependent);
    void AddAnimationPhysicsTickDependancy(_Script_Engine::SkeletalMeshComponent* Dependent, bool ForceAlwaysDependOnPhysicalAnimation);
}; // Size: 0x1270
#pragma pack(pop)
}
