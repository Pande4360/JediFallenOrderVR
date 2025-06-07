#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SignificanceManager {
#pragma pack(push, 1)
struct RsSignificanceSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x50]; public:
    void* get_CharacterSignificanceSettings();
    void* get_SkeletalMeshSignificanceSettings();
    void* get_ParticleSystemSignificanceSettings();
    void* get_ParticlesMinBoundsRadius();
    void* get_ParticlesMaxTotalNonCritical();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
