#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbility.hpp"
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRadialForcePushAbility : public RsAbility {
    private: char pad_b8[0x80]; public:
    void* get_ForceMeterRow();
    float& get_PushInnerRadius();
    float& get_PushOuterRadius();
    void* get_PushRadialCenterOffset();
    void* get_TraceType();
    bool get_bNoNegativeZDirection();
    void set_bNoNegativeZDirection(bool value);
    float& get_PushSecondaryMaxStrength();
    float& get_PushSecondaryMinStrength();
    _Script_Engine::AnimMontage*& get_AbilityAnimation();
    _Script_Engine::ParticleSystem*& get_ParticleSystem();
    void* get_EffectType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
