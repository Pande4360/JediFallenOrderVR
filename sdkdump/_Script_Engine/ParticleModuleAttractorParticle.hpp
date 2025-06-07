#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleAttractorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAttractorParticle : public ParticleModuleAttractorBase {
    private: char pad_30[0x90]; public:
    void* get_EmitterName();
    void* get_Range();
    bool get_bStrengthByDistance();
    void set_bStrengthByDistance(bool value);
    void* get_Strength();
    bool get_bAffectBaseVelocity();
    void set_bAffectBaseVelocity(bool value);
    void* get_SelectionMethod();
    bool get_bRenewSource();
    void set_bRenewSource(bool value);
    bool get_bInheritSourceVel();
    void set_bInheritSourceVel(bool value);
    int32_t& get_LastSelIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
