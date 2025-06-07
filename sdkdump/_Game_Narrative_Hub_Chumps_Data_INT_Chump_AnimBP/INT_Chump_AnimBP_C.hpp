#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Chumps_Data_INT_Chump_AnimBP {
#pragma pack(push, 1)
struct INT_Chump_AnimBP_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetChumpIdleAnim(int32_t Number, bool& Success);
}; // Size: 0x28
#pragma pack(pop)
}
