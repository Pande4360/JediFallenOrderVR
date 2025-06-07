#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISenseComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x200]; public:
    void* get_DefaultSensorDefinitions();
    void* get_SensorDefinitions();
    void* get_StimuliClasses();
    void* get_FullyAwareToPartiallyAwareCurve();
    void* get_PartiallyAwareToUnawareCurve();
    void* get_AlertAwarenessState();
    void* get_AggroAwarenessState();
    static _Script_CoreUObject::Class* static_class();
    void OwnerDiedHandler(_Script_Engine::Actor* DeadActor);
    void OnFactionChanged(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent);
    void OnActorAwareOfTookAnyOrNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnActorAwareOfDestroyed(_Script_Engine::Actor* DestroyedActor);
}; // Size: 0x370
#pragma pack(pop)
}
