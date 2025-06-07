#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "RsAbilityState.hpp"
#include "SwAttackState.hpp"
void _Script_SwGame::RsAbilityState::set_bIsDefenseActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x259 + 0);
    *(uint8_t*)((uintptr_t)this + 0x259 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityState::get_bAllowDefense() {
    return (*(uint8_t*)((uintptr_t)this + 0x258 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityState");
    return result;
}
void _Script_SwGame::RsAbilityState::set_bAllowDefense(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x258 + 0);
    *(uint8_t*)((uintptr_t)this + 0x258 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityState::get_bIsDefenseActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x259 + 0)) & 1 != 0;
}
void* _Script_SwGame::RsAbilityState::OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser) {
    return;
}
