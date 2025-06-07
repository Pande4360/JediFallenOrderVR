#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotify_ShootBlasterBegin : public _Script_Engine::AnimNotify {
    private: char pad_38[0x10]; public:
    bool get_bFireAlternativeBlasterType();
    void set_bFireAlternativeBlasterType(bool value);
    bool get_bCanShotDuringForceSlow();
    void set_bCanShotDuringForceSlow(bool value);
    void* get_AccuracyOverrideMode();
    float& get_ShootingConeHalfAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
