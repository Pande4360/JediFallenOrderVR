#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct DecalTrailComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberMarksComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x220]; public:
    _Script_Engine::DecalTrailComponent*& get_TrailTemplate();
    _Script_Engine::DataTable*& get_SurfaceTypeTable();
    _Script_Engine::DataTable*& get_ActorInfoTable();
    _Script_AkAudio::AkAudioEvent*& get_AudioStartEvent();
    _Script_AkAudio::AkAudioEvent*& get_AudioStopEvent();
    _Script_AkAudio::AkComponent*& get_AudioComponent();
    static _Script_CoreUObject::Class* static_class();
    bool TracingActive();
    void StopTracing();
    void StartTracing();
    void OwnerInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent);
}; // Size: 0x390
#pragma pack(pop)
}
