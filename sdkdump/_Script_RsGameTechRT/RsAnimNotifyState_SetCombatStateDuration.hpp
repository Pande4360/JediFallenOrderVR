#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_SetCombatStateDuration : public _Script_Engine::RsConditionalAnimNotifyState {
    private: char pad_78[0x1e8]; public:
    void* get_CombatState();
    void* get_EndingCombatState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}
