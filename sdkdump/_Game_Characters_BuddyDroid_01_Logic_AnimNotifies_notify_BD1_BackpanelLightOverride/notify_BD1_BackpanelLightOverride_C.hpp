#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AnimNotifies_notify_BD1_BackpanelLightOverride {
#pragma pack(push, 1)
struct notify_BD1_BackpanelLightOverride_C : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x30]; public:
    void* get_MaterialEmissiveColor();
    float& get_MaterialEmissiveBrightness();
    float& get_MaterialAnimationSpeed();
    void* get_LightColor();
    float& get_LightIntensity();
    float& get_BlendInTime();
    static _Script_CoreUObject::Class* static_class();
    bool Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted);
    bool Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x60
#pragma pack(pop)
}
