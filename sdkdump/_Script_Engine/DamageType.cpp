#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DamageType.hpp"
bool _Script_Engine::DamageType::get_bCausedByWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::DamageType::set_bCausedByWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DamageType::get_bScaleMomentumByMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
float& _Script_Engine::DamageType::get_DestructibleImpulse() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_Engine::DamageType::set_bScaleMomentumByMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DamageType::get_bRadialDamageVelChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
void _Script_Engine::DamageType::set_bRadialDamageVelChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::DamageType::get_DamageImpulse() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::DamageType::get_DestructibleDamageSpreadScale() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::DamageType::get_DamageFalloff() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::DamageType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DamageType");
    return result;
}
