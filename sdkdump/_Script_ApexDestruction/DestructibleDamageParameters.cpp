#include "..\FUObjectArray.hpp"
#include "DestructibleDamageParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ApexDestruction::DestructibleDamageParameters::set_bCustomImpactResistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ApexDestruction::DestructibleDamageParameters::get_DamageThreshold() {
    return *(float*)((uintptr_t)this + 0x0);
}
int32_t& _Script_ApexDestruction::DestructibleDamageParameters::get_DefaultImpactDamageDepth() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
float& _Script_ApexDestruction::DestructibleDamageParameters::get_DamageSpread() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_ApexDestruction::DestructibleDamageParameters::get_bEnableImpactDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleDamageParameters::set_bEnableImpactDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ApexDestruction::DestructibleDamageParameters::get_ImpactDamage() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_ApexDestruction::DestructibleDamageParameters::get_bCustomImpactResistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_ApexDestruction::DestructibleDamageParameters::get_ImpactResistance() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleDamageParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleDamageParameters");
    return result;
}
