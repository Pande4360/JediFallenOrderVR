#include "..\FUObjectArray.hpp"
#include "AnimState_BP_BalanceBeam.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_AnimState_Hero_AnimState_BP_BalanceBeam::AnimState_BP_BalanceBeam::get_LeanAnimDriver_3_A5649D51468FE8035D0E9CB0EE4C4367() {
    return *(float*)((uintptr_t)this + 0x0);
}
void _Game_GlobalData_AnimState_Hero_AnimState_BP_BalanceBeam::AnimState_BP_BalanceBeam::set_bIsSlow_5_D752161149AF480889D142A840632187(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimState_Hero_AnimState_BP_BalanceBeam::AnimState_BP_BalanceBeam::get_bIsSlow_5_D752161149AF480889D142A840632187() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimState_Hero_AnimState_BP_BalanceBeam::AnimState_BP_BalanceBeam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/AnimState/Hero/AnimState_BP_BalanceBeam.AnimState_BP_BalanceBeam");
    return result;
}
