#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_HeroCombatSlowDown : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x8]; public:
    float& get_TimeDilation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
