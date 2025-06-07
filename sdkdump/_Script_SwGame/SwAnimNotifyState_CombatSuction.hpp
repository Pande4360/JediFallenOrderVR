#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_CombatSuction : public _Script_Engine::RsConditionalTargetAnimNotifyState {
    private: char pad_c0[0x8]; public:
    float& get_MaxDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
