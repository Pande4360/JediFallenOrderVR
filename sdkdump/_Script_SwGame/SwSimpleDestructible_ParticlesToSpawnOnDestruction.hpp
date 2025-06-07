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
struct SwSimpleDestructible_ParticlesToSpawnOnDestruction {
    private: char pad_0[0x30]; public:
    _Script_Engine::ParticleSystem*& get_ParticleSystemToSpawn();
    void* get_LocalTranslation();
    void* get_LocalRotation();
    void* get_LocalScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
