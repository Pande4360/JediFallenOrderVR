#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AICombatAttackTableRow.hpp"
#include "CombatAttackTableRow.hpp"
void* _Script_SwGame::AICombatAttackTableRow::get_MontageSection() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_SwGame::AICombatAttackTableRow::get_SkipParryReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
bool _Script_SwGame::AICombatAttackTableRow::get_StopChainAfterHit() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_SwGame::AICombatAttackTableRow::set_StopChainAfterHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::AICombatAttackTableRow::set_SkipParryReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::AICombatAttackTableRow::get_ForceAbility() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_SwGame::AICombatAttackTableRow::get_ForcePushAIChance() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_SwGame::AICombatAttackTableRow::get_AltAttackAIChance() {
    return (void*)((uintptr_t)this + 0xd1);
}
_Script_CoreUObject::Class* _Script_SwGame::AICombatAttackTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.AICombatAttackTableRow");
    return result;
}
