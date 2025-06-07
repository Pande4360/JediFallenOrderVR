#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbility.hpp"
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceSlowAbility : public RsAbility {
    private: char pad_b8[0x200]; public:
    void* get_ForceMeterRow();
    bool get_bCanRenewForceSlow();
    void set_bCanRenewForceSlow(bool value);
    _Script_Engine::AnimMontage*& get_EnterHoldAnimation();
    _Script_Engine::AnimMontage*& get_FailureAnimation();
    void* get_MotionTweakName();
    float& get_MinSpeedForExtraLogicTargets();
    bool get_bShouldTurn();
    void set_bShouldTurn(bool value);
    float& get_TurnDuration();
    _Script_AkAudio::AkAudioEvent*& get_AudioTriggerEnd();
    _Script_AkAudio::AkAudioEvent*& get_AudioFail();
    int32_t& get_MaxGroupsSlowed();
    void* get_DefaultCameraMode();
    void* get_UpgradeData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2b8
#pragma pack(pop)
}
