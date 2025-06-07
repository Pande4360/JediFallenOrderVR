#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDefenseConditions.hpp"
bool _Script_RsGameTechRT::RsDefenseConditions::get_SpecialActionAtMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
int32_t& _Script_RsGameTechRT::RsDefenseConditions::get_RandomMinCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RsGameTechRT::RsDefenseConditions::get_MaxCount() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void _Script_RsGameTechRT::RsDefenseConditions::set_SpecialActionAtMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsDefenseConditions::get_RechargeStartDelay() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsDefenseConditions::get_RechargeRate() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RsGameTechRT::RsDefenseConditions::get_MarkerRandomMinCount() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_RsGameTechRT::RsDefenseConditions::get_MarkerRandomMaxCount() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsDefenseConditions::get_MarkerTimeOut() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_RsGameTechRT::RsDefenseConditions::get_MaxAngleCosine() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDefenseConditions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDefenseConditions");
    return result;
}
