#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISensor.hpp"
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
#pragma pack(push, 1)
struct RsAISensor_Damage : public RsAISensor {
    private: char pad_68[0xa0]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
}; // Size: 0x108
#pragma pack(pop)
}
