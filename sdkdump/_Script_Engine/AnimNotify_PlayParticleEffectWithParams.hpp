#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotify_PlayParticleEffect.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotify_PlayParticleEffectWithParams : public AnimNotify_PlayParticleEffect {
    private: char pad_90[0x10]; public:
    void* get_ColorParam();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
