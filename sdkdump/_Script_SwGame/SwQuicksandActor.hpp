#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsNavVolume;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_SwGame {
struct SwQuicksandSettingsDataAsset;
}
namespace _Script_Engine {
struct ShapeComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwQuicksandActor : public _Script_Engine::Actor {
    private: char pad_360[0xd0]; public:
    bool get_DisableQuicksand();
    void set_DisableQuicksand(bool value);
    bool get_DebugLogAffectedActor();
    void set_DebugLogAffectedActor(bool value);
    bool get_DebugVisualizeEntryPoints();
    void set_DebugVisualizeEntryPoints(bool value);
    void* get_DefaultSettings();
    _Script_RsGameTechRT::RsNavVolume*& get_CollisionVolumeActor();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_QuicksandHeroStateModifier();
    _Script_SwGame::SwQuicksandSettingsDataAsset*& get_QuicksandSettingsDataAsset();
    void* get_IgnoredActors();
    void* get_IgnoredActorTypes();
    void* get_OnStartAffectingActorEvent();
    void* get_OnStopAffectingActorEvent();
    void* get_m_ActorsInQuicksandVolume();
    _Script_Engine::ShapeComponent*& get_CollisionComponent();
    _Script_Engine::PrimitiveComponent*& get_SandSurfaceComponent();
    void* get_m_ActiveEffects();
    static _Script_CoreUObject::Class* static_class();
    void SetSurfaceDesiredOffset(float TargetOffset, float MovementSpeed);
    void OnTriggerHeroKill(_Script_RsGameTechRT::RsHero* heroActor);
    void OnStopAffectingActor(_Script_Engine::Actor* actorStoppedBeingAffectedByQuicksand);
    void OnStartAffectingActor(_Script_Engine::Actor* actorAffectedByQuicksand);
    void OnPrimitiveOverlapEnd(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnPrimitiveOverlapBegin(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnActorOverlapEnd(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void OnActorOverlapBegin(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
}; // Size: 0x430
#pragma pack(pop)
}
