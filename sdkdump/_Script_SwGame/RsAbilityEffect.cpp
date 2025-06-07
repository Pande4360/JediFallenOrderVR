#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAbilityEffect.hpp"
void* _Script_SwGame::RsAbilityEffect::get_EffectType() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::RsAbilityEffect::get_AbilityType() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_SwGame::RsAbilityEffect::get_bIsRenewable() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffect::set_bIsRenewable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::RsAbilityEffect::set_bCanIgnoreSyncs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffect::get_bCanIgnoreSyncs() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityEffect");
    return result;
}
