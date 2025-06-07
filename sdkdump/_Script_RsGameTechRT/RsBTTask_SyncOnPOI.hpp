#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_SyncOnPOI : public _Script_AIModule::BTTaskNode {
    static _Script_CoreUObject::Class* static_class();
    void OnSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnAITakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
}; // Size: 0x70
#pragma pack(pop)
}
