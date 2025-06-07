#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "ActorComponent.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PhysicalAnimationData;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicalAnimationComponent : public ActorComponent {
    private: char pad_170[0x38]; public:
    float& get_StrengthMultiplyer();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMeshComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    void SetSkeletalMeshComponent(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent);
    _Script_CoreUObject::Transform GetBodyTargetTransform(void* BodyName);
    void ApplyPhysicalAnimationSettingsBelow(void* BodyName, _Script_Engine::PhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    void ApplyPhysicalAnimationSettings(void* BodyName, _Script_Engine::PhysicalAnimationData& PhysicalAnimationData);
    void ApplyPhysicalAnimationProfileBelow(void* BodyName, void* ProfileName, bool bIncludeSelf, bool bClearNotFound);
}; // Size: 0x1a8
#pragma pack(pop)
}
