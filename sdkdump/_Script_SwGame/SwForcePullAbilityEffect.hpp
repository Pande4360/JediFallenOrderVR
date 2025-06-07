#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbilityEffect.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_SwGame {
struct SwTelekinesisConstraint;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForcePullAbilityEffect : public RsAbilityEffect {
    private: char pad_68[0x260]; public:
    _Script_Engine::ParticleSystem*& get_ParticleTemplate();
    void* get_ParticleSocketName();
    float& get_PullMaxDuration();
    float& get_PullBaseSpeed();
    float& get_PullRopeSpeed();
    float& get_DistanceToStartCatch();
    void* get_PullUserSocket();
    void* get_PullRopeUserSocket();
    void* get_PullDefaultVictimSocket();
    void* get_PullDefaultOffset();
    float& get_AngleJiggleScale();
    float& get_JiggleDuration();
    void* get_ForcePullVolumeHalfSize();
    void* get_ObjectTypesThatResidualPullAffects();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterCharacterStartEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterCharacterStopEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullLeadInCharacterEvent();
    float& get_ForcePullLeadInThreshold();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterNonCharacterStartEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterNonCharacterStopEvent();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileForcePull();
    bool get_bIgnoreObjectChannel();
    void set_bIgnoreObjectChannel(bool value);
    bool get_bTopologyTraceChannel();
    void set_bTopologyTraceChannel(bool value);
    void* get_IgnoreObjectChannel();
    void* get_TopologyTraceChannel();
    float& get_DefaultCharacterYankDistance();
    float& get_DefaultCharacterClosestYank();
    float& get_TimeoutToHoldEnter();
    _Script_SwGame::SwTelekinesisConstraint*& get_TKConstraint();
    _Script_AkAudio::AkAudioEvent*& get_PullEnterStopEvent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c8
#pragma pack(pop)
}
