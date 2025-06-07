#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwProjectileEffectsData : public _Script_Engine::TableRowBase {
    private: char pad_8[0xd8]; public:
    _Script_Engine::ParticleSystem*& get_ProjectileEffect();
    void* get_EffectScale();
    _Script_Engine::StaticMesh*& get_ProjectileStaticMesh();
    void* get_StaticMeshScale();
    float& get_InitialSpeed();
    void* get_HitEvent();
    _Script_Engine::DataTable*& get_DamageTable();
    bool get_bPenetrateOverlaps();
    void set_bPenetrateOverlaps(bool value);
    bool get_bMakeAISoundOnSpawn();
    void set_bMakeAISoundOnSpawn(bool value);
    void* get_AISoundType();
    bool get_bUseSoundOcclusion();
    void set_bUseSoundOcclusion(bool value);
    float& get_RadialInnerDamage();
    float& get_RadialOuterDamage();
    float& get_RadialInnerRadius();
    float& get_RadialOuterRadius();
    _Script_Engine::ParticleSystem*& get_SpawnEffect();
    _Script_AkAudio::AkAudioEvent*& get_SpawnSFX();
    float& get_FlybySoundFireDistance();
    _Script_AkAudio::AkAudioEvent*& get_FlybySFX();
    _Script_Engine::ParticleSystem*& get_ReflectEffect();
    _Script_AkAudio::AkAudioEvent*& get_ReflectSFX();
    _Script_AkAudio::AkAudioEvent*& get_ReflectedImpactSFX();
    _Script_Engine::ParticleSystem*& get_DeflectEffect();
    _Script_AkAudio::AkAudioEvent*& get_DeflectSFX();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
