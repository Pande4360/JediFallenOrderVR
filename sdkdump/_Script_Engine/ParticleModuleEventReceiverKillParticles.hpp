#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleEventReceiverBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleEventReceiverKillParticles : public ParticleModuleEventReceiverBase {
    private: char pad_40[0x8]; public:
    bool get_bStopSpawning();
    void set_bStopSpawning(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
