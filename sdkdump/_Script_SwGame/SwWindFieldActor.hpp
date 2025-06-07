#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct ShapeComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWindFieldActor : public _Script_Engine::Actor {
    private: char pad_360[0x320]; public:
    bool get_SaveGameImmediately();
    void set_SaveGameImmediately(bool value);
    bool get_UpField();
    void set_UpField(bool value);
    bool get_bAutoFall();
    void set_bAutoFall(bool value);
    float& get_AutoFallTimer();
    bool get_Enabled();
    void set_Enabled(bool value);
    float& get_HorizontalInfluence();
    void* get_VerticalInfluenceMode();
    float& get_VerticalInfluence();
    bool get_bIgnorePlayer();
    void set_bIgnorePlayer(bool value);
    void* get_IgnoredActors();
    void* get_IgnoredActorTypes();
    bool get_OnlyWhenFallingMode_ClearVerticalVelocityOnEnter();
    void set_OnlyWhenFallingMode_ClearVerticalVelocityOnEnter(bool value);
    bool get_AccelerationTest();
    void set_AccelerationTest(bool value);
    float& get_AccelerationAmount();
    bool get_AccelerationOnly();
    void set_AccelerationOnly(bool value);
    bool get_DebugArrowOn();
    void set_DebugArrowOn(bool value);
    bool get_DebugLogAffectedActor();
    void set_DebugLogAffectedActor(bool value);
    bool get_FXandSound();
    void set_FXandSound(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Start_Sound_HeadWind();
    _Script_AkAudio::AkAudioEvent*& get_Stop_Sound_HeadWind();
    _Script_AkAudio::AkAudioEvent*& get_StartSoundBeam();
    _Script_AkAudio::AkAudioEvent*& get_StopSoundBeam();
    void* get_ObjectsForcePushAbilityEffectClass();
    void* get_PopBallClass();
    _Script_Engine::ParticleSystem*& get_DoorFXEmitterTemplate();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WindAirHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_HeadWindHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_TailWindHeroStateModifier();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHorizontalWindFront();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHorizontalWindBack();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHorizontalWindRunningPerpendicular();
    _Script_Engine::ShapeComponent*& get_CollisionComponent();
    _Script_Engine::ArrowComponent*& get_ArrowComponent();
    _Script_Engine::SceneComponent*& get_StartPointComponent();
    _Script_Engine::SceneComponent*& get_EndPointComponent();
    _Script_RsGameTechRT::RsHero*& get_BPHero();
    _Script_AkAudio::AkComponent*& get_m_MoveableAkComponent();
    _Script_Engine::ParticleSystemComponent*& get_m_DoorSpawnedEmitter();
    static _Script_CoreUObject::Class* static_class();
    void OnPrimitiveOverlapEnd(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnPrimitiveOverlapBegin(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnHeroNavStateChanged_UntilNotFalling(void* NewState, void* PrevState);
    void OnHeroNavStateChanged(void* NewState, void* PrevState);
}; // Size: 0x680
#pragma pack(pop)
}
