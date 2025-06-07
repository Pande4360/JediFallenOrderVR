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
struct AISense_Hearing : public AISense {
    private: char pad_88[0x68]; public:
    void* get_NoiseEvents();
    float& get_SpeedOfSoundSq();
    static _Script_CoreUObject::Class* static_class();
    void ReportNoiseEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector NoiseLocation, float Loudness, _Script_Engine::Actor* Instigator, float MaxRange, void* Tag);
}; // Size: 0xf0
#pragma pack(pop)
}
