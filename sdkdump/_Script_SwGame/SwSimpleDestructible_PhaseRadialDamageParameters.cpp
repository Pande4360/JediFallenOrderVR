#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_PhaseRadialDamageParameters.hpp"
void _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::set_ApplyRadialDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::get_ApplyRadialDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::get_TimeDelayToApplyDamage() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::get_Radius() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::get_DamageType() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::get_DamagePoints() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_PhaseRadialDamageParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_PhaseRadialDamageParameters");
    return result;
}
