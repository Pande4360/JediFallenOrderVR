#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_BalanceBeam.hpp"
float& _Script_RsGameTechRT::AnimState_BalanceBeam::get_BalanceLeanAmount() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::AnimState_BalanceBeam::get_MonkeySwingAmount() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_BalanceBeam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_BalanceBeam");
    return result;
}
void _Script_RsGameTechRT::AnimState_BalanceBeam::set_bIsParallelToBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_BalanceBeam::get_bIsParallelToBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
