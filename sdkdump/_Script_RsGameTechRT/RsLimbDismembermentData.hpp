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
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsLimbDismembermentData {
    private: char pad_0[0x40]; public:
    void* get_SpawnSocketName();
    void* get_DismemberActor();
    void* get_ActorSpawnImpulse();
    bool get_bHaveRandomAngularImpulse();
    void set_bHaveRandomAngularImpulse(bool value);
    float& get_RandomAngularImpulseMagnitude();
    void* get_ActorSpawnAngularImpulse();
    float& get_LifeSpan();
    _Script_Engine::ParticleSystem*& get_DismemberParticleEffect();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
