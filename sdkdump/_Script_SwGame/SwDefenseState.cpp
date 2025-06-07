#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "SwDefenseState.hpp"
bool _Script_SwGame::SwDefenseState::get_bIsDefenseActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_SwGame::SwDefenseState::set_bIsDefenseActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwDefenseState::get_ConfigurableDefenseType() {
    return (void*)((uintptr_t)this + 0x12a);
}
bool _Script_SwGame::SwDefenseState::get_bHasTickImplemetation() {
    return (*(uint8_t*)((uintptr_t)this + 0x12b + 0)) & 1 != 0;
}
void _Script_SwGame::SwDefenseState::set_bHasTickImplemetation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12b + 0);
    *(uint8_t*)((uintptr_t)this + 0x12b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDefenseState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDefenseState");
    return result;
}
void _Script_SwGame::SwDefenseState::TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime) {
    return;
}
void _Script_SwGame::SwDefenseState::OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void* _Script_SwGame::SwDefenseState::OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwDefenseState::OnDefenseAborted(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Script_SwGame::SwDefenseState::OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
