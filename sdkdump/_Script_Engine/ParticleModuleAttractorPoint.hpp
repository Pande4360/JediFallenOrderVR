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
struct ParticleModuleAttractorPoint : public ParticleModuleAttractorBase {
    private: char pad_30[0xc8]; public:
    void* get_Position();
    void* get_Range();
    void* get_Strength();
    bool get_StrengthByDistance();
    void set_StrengthByDistance(bool value);
    bool get_bAffectBaseVelocity();
    void set_bAffectBaseVelocity(bool value);
    bool get_bOverrideVelocity();
    void set_bOverrideVelocity(bool value);
    bool get_bUseWorldSpacePosition();
    void set_bUseWorldSpacePosition(bool value);
    bool get_Positive_X();
    void set_Positive_X(bool value);
    bool get_Positive_Y();
    void set_Positive_Y(bool value);
    bool get_Positive_Z();
    void set_Positive_Z(bool value);
    bool get_Negative_X();
    void set_Negative_X(bool value);
    bool get_Negative_Y();
    void set_Negative_Y(bool value);
    bool get_Negative_Z();
    void set_Negative_Z(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
