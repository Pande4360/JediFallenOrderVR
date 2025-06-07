#include "..\FUObjectArray.hpp"
#include "AnimState_BP_Climb.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::set_HasClimbingClaws_10_7D0C9E654FD311088FD61F83303AB611(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::get_HasClimbingClaws_10_7D0C9E654FD311088FD61F83303AB611() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::get_TimeInIdle_13_C80DC5F04EC82952DC88D9922AA95E16() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::get_ForceNeutralBoulderSet_15_2494D03C409380061369E89D5B48E05E() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::set_ForceNeutralBoulderSet_15_2494D03C409380061369E89D5B48E05E(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimState_Hero_AnimState_BP_Climb::AnimState_BP_Climb::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/AnimState/Hero/AnimState_BP_Climb.AnimState_BP_Climb");
    return result;
}
