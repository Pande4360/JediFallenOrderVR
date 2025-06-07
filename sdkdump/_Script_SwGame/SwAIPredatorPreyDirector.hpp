#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIPredatorPreyDirector : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
}; // Size: 0xf0
#pragma pack(pop)
}
