#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbility.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForcePullAbility : public RsAbility {
    private: char pad_b8[0x228]; public:
    _Script_Engine::DataTable*& get_WeightTable();
    void* get_ForceMeterRow();
    _Script_Engine::AnimMontage*& get_PullSuccessAnimation();
    _Script_Engine::AnimMontage*& get_PullAlternateAnimation();
    _Script_Engine::AnimMontage*& get_PullYankAnimation();
    _Script_Engine::AnimMontage*& get_PullFailAnimation();
    void* get_OutSection();
    void* get_DropSection();
    _Script_Engine::AnimationAsset*& get_PullRopeAttachAnimation();
    void* get_ShakeType();
    bool get_bShouldTestTargetAtTrigger();
    void set_bShouldTestTargetAtTrigger(bool value);
    void* get_TargetData();
    float& get_TurnDuration();
    _Script_Engine::ParticleSystem*& get_ParticleTemplate();
    float& get_ParticleSpeed();
    void* get_UpgradeData();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullCastNonCharacterEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullCastNonCharacterStopEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullFailEvent();
    static _Script_CoreUObject::Class* static_class();
    void OnForceMeterBarEmptied(void* ResponsibleForceName, float TimeUntilForceRegen);
}; // Size: 0x2e0
#pragma pack(pop)
}
