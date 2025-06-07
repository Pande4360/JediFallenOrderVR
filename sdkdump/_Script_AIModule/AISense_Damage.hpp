#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISense.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense_Damage : public AISense {
    private: char pad_88[0x10]; public:
    void* get_RegisteredEvents();
    static _Script_CoreUObject::Class* static_class();
    void ReportDamageEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* Instigator, float DamageAmount, _Script_CoreUObject::Vector EventLocation, _Script_CoreUObject::Vector HitLocation);
}; // Size: 0x98
#pragma pack(pop)
}
