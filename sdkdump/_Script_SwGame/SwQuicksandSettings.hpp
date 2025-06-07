#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwQuicksandSettings {
    private: char pad_0[0x30]; public:
    float& get_SinkingSpeed();
    float& get_RisingUpSpeed();
    float& get_ImmersionPercentageToFloatOnSurface();
    float& get_ImmersionPercentageWhenHeroStandsOnTop();
    float& get_ImmersionPercentageToTriggerCharacterDeath();
    float& get_TimeToDestroyEffectAfterActorRemovalFromQuicksand();
    _Script_Engine::ParticleSystem*& get_ParticlesToSpawnWhenImmersed();
    bool get_KeepParticlesAlignedWithQuicksandSurface();
    void set_KeepParticlesAlignedWithQuicksandSurface(bool value);
    void* get_ActorClassSurfaceDeformation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
