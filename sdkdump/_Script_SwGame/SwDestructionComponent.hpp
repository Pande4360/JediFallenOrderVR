#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDestructionComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x20]; public:
    _Script_Engine::SkeletalMeshComponent*& get_TargetSkeletalMeshComponent();
    _Script_Engine::SkeletalMeshComponent*& get_DebugPerformanceSkeletalMeshComponent();
    static _Script_CoreUObject::Class* static_class();
    void PlayPartOfAnimation(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, float TimeToPlay);
    void AdvanceAnimationFrames(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, int32_t NumberOfFramesToAdvance);
}; // Size: 0x190
#pragma pack(pop)
}
