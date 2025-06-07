#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Emitter : public Actor {
    private: char pad_360[0x50]; public:
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystemComponent();
    bool get_bDestroyOnSystemFinish();
    void set_bDestroyOnSystemFinish(bool value);
    bool get_bPostUpdateTickGroup();
    void set_bPostUpdateTickGroup(bool value);
    bool get_bCurrentlyActive();
    void set_bCurrentlyActive(bool value);
    void* get_OnParticleSpawn();
    void* get_OnParticleBurst();
    void* get_OnParticleDeath();
    void* get_OnParticleCollide();
    static _Script_CoreUObject::Class* static_class();
    void ToggleActive();
    void SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param);
    void SetTemplate(_Script_Engine::ParticleSystem* NewTemplate);
    void SetMaterialParameter(void* ParameterName, _Script_Engine::MaterialInterface* Param);
    void SetFloatParameter(void* ParameterName, float Param);
    void SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param);
    void SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param);
    void OnRep_bCurrentlyActive();
    void OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent);
    bool IsActive();
    void Deactivate();
    void Activate();
}; // Size: 0x3b0
#pragma pack(pop)
}
