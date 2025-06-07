#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_SwGame {
struct SwHero;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotify_HeroSoftLock : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x20]; public:
    bool get_bReacquireSoftTarget();
    void set_bReacquireSoftTarget(bool value);
    float& get_MaxDistance();
    float& get_MaxHalfAngle();
    float& get_OffsetAngle();
    float& get_MaxRotationSpeed();
    _Script_SwGame::SwHero*& get_HeroRef();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
