#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb {
#pragma pack(push, 1)
struct AnimState_BP_Climb {
    private: char pad_0[0xc]; public:
    bool get_HasClimbingClaws_10_7D0C9E654FD311088FD61F83303AB611();
    void set_HasClimbingClaws_10_7D0C9E654FD311088FD61F83303AB611(bool value);
    float& get_TimeInIdle_13_C80DC5F04EC82952DC88D9922AA95E16();
    bool get_ForceNeutralBoulderSet_15_2494D03C409380061369E89D5B48E05E();
    void set_ForceNeutralBoulderSet_15_2494D03C409380061369E89D5B48E05E(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
