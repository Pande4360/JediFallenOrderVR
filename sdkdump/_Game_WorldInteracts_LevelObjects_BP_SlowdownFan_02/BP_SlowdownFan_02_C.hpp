#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_LevelObjects_BP_SlowdownFan\BP_SlowdownFan_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SlowdownFan_02 {
#pragma pack(push, 1)
struct BP_SlowdownFan_02_C : public _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C {
    private: char pad_468[0x20]; public:
    void* get_LVL_activate_0();
    void* get_LVL_Deactivate_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void LVL_Deactivate_0__DelegateSignature();
    void LVL_Activate_0__DelegateSignature();
}; // Size: 0x488
#pragma pack(pop)
}
