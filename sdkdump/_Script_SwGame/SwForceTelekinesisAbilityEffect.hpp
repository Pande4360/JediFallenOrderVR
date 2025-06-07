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
namespace _Script_SwGame {
struct SwTelekinesisConstraint;
}
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceTelekinesisAbilityEffect : public RsAbilityEffect {
    private: char pad_68[0x240]; public:
    _Script_Engine::ParticleSystem*& get_ParticleTemplate();
    void* get_ParticleSocketName();
    void* get_TelekinesisSocketName();
    void* get_TelekinesisDefaultVictimSocket();
    void* get_TelekinesisDefaultOffset();
    float& get_AngleJiggleScale();
    float& get_JiggleDuration();
    void* get_DepthForwardKey();
    void* get_DepthBackwardKey();
    bool get_bIsAxisConstrained();
    void set_bIsAxisConstrained(bool value);
    _Script_AkAudio::AkAudioEvent*& get_ForceTKLoopAudio();
    _Script_AkAudio::AkAudioEvent*& get_ForceTKLoopStopAudio();
    float& get_TKLoopMaxSpeed();
    _Script_SwGame::SwTelekinesisConstraint*& get_TKConstraint();
    _Script_Engine::PhysicalMaterial*& get_OverridenPhysMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a8
#pragma pack(pop)
}
