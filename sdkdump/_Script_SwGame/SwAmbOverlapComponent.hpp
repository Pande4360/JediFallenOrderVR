#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Volume;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAmbOverlapComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x40]; public:
    void* get_OnOverlapHeroBegin();
    void* get_OnOverlapHeroEnd();
    void* get_PrimitiveComponent();
    void* get_VolumeToOverlap();
    bool get_bIsUsingCamera();
    void set_bIsUsingCamera(bool value);
    float& get_Radius();
    float& get_DistToHero();
    float& get_TimeElapsed();
    bool get_bIsStarted();
    void set_bIsStarted(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetVolume(_Script_Engine::Volume* Volume);
    void SetRadius(float Radius);
    void SetPrimitiveComponent(_Script_Engine::PrimitiveComponent* PrimitiveComp);
    void SetIsUsingCamera(bool IsUsingCamera);
    void SetIsStareted(bool IsStarted);
    void OnComponentEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnComponentBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnActorEndOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void OnActorBeginOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
}; // Size: 0x310
#pragma pack(pop)
}
