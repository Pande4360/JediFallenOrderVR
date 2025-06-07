#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_Phase {
    private: char pad_0[0x140]; public:
    bool get_IgnoreThisPhase();
    void set_IgnoreThisPhase(bool value);
    float& get_DamagePointsNeededToDestroy();
    void* get_AcceptedDamageTypes();
    void* get_AcceptedDamageFromCharacterTypes();
    void* get_ProhibitDamageFromCharacterTypes();
    void* get_DestructionParticleComponents();
    void* get_ParticlesToSpawnOnDestruction();
    _Script_AkAudio::AkAudioEvent*& get_DestructionSound();
    void* get_ComponentsToHideAfterDestruction();
    void* get_ComponentsToShowAfterDestruction();
    void* get_PhysicsParameters();
    void* get_RadialDamageParameters();
    float& get_SelfInflictedDamagePointsPerSecond();
    void* get_ReactionOnForcePush();
    void* get_ReactionOnForcePull();
    void* get_PlayAnimations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
