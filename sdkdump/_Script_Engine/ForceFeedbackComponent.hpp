#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Script_Engine {
struct ForceFeedbackAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ForceFeedbackAttenuationSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ForceFeedbackComponent : public SceneComponent {
    private: char pad_2d0[0xd0]; public:
    _Script_Engine::ForceFeedbackEffect*& get_ForceFeedbackEffect();
    bool get_bAutoDestroy();
    void set_bAutoDestroy(bool value);
    bool get_bStopWhenOwnerDestroyed();
    void set_bStopWhenOwnerDestroyed(bool value);
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bIgnoreTimeDilation();
    void set_bIgnoreTimeDilation(bool value);
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    float& get_IntensityMultiplier();
    _Script_Engine::ForceFeedbackAttenuation*& get_AttenuationSettings();
    void* get_AttenuationOverrides();
    void* get_OnForceFeedbackFinished();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    void SetForceFeedbackEffect(_Script_Engine::ForceFeedbackEffect* NewForceFeedbackEffect);
    void Play(float StartTime);
    bool BP_GetAttenuationSettingsToApply(_Script_Engine::ForceFeedbackAttenuationSettings& OutAttenuationSettings);
    void AdjustAttenuation(_Script_Engine::ForceFeedbackAttenuationSettings& InAttenuationSettings);
}; // Size: 0x3a0
#pragma pack(pop)
}
