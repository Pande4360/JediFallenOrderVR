#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsAbilityEffectTask.hpp"
namespace _Script_SwGame {
struct SwCollisionDamageData;
}
namespace _Script_CoreUObject {
struct Class;
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
struct SwCollisionDamageAETask : public RsAbilityEffectTask {
    private: char pad_48[0xa8]; public:
    _Script_SwGame::SwCollisionDamageData*& get_DefaultCollisionDamageData();
    static _Script_CoreUObject::Class* static_class();
    void OnCapsuleHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void OnBumperTopologyChanged(void* previousMode, void* newMode, float Proximity);
}; // Size: 0xf0
#pragma pack(pop)
}
