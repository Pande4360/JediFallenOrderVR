#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbilityEffect.hpp"
namespace _Script_Engine {
struct CurveFloat;
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
struct SwCollisionDamageData;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForcePushAbilityEffect : public RsAbilityEffect {
    private: char pad_68[0x2a8]; public:
    void* get_VelocityDirectionOffset();
    float& get_VelocitySpeed();
    float& get_TorqueScalar();
    _Script_Engine::CurveFloat*& get_DampingCurve();
    float& get_MaxVerticalDistance();
    _Script_Engine::ParticleSystem*& get_ParticleTemplate();
    float& get_DirectDamage();
    float& get_GlancingDamage();
    void* get_DirectDamageType();
    void* get_GlancingDamageType();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushCharacterSoundEffect();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushPullComboCharacterSoundEffect();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushCharacterGlancingSoundEffect();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushNonCharacterSoundEffect();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushPullComboNonCharacterSoundEffect();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushNonCharacterGlancingSoundEffect();
    float& get_NudgeSpeed();
    float& get_PortionOfVelocityForRagdoll();
    _Script_SwGame::SwCollisionDamageData*& get_DefaultCollisionDamageData();
    bool get_bShouldUseDirectionAssist();
    void set_bShouldUseDirectionAssist(bool value);
    void* get_DefaultDirectionAssistData();
    static _Script_CoreUObject::Class* static_class();
    void OnTopologyChanged(void* previousMode, void* newMode, float Poximity);
}; // Size: 0x310
#pragma pack(pop)
}
