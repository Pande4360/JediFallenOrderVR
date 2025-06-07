#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "CombatAttackTableRow.hpp"
#include "SwAttackState.hpp"
void* _Script_SwGame::CombatAttackTableRow::get_AnimData() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_SwGame::CombatAttackTableRow::set_bSwapMasterSlave(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_SwGame::CombatAttackTableRow::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x50);
}
_Script_SwGame::SwAttackState*& _Script_SwGame::CombatAttackTableRow::get_AttackStatePtr() {
    return *(_Script_SwGame::SwAttackState**)((uintptr_t)this + 0x68);
}
bool _Script_SwGame::CombatAttackTableRow::get_bSwapMasterSlave() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_SwGame::CombatAttackTableRow::get_NextAttack() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::CombatAttackTableRow::get_AttackState() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SwGame::CombatAttackTableRow::get_BlockedAttack() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::CombatAttackTableRow::get_BlockBreakAttack() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SwGame::CombatAttackTableRow::get_AltAttack() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SwGame::CombatAttackTableRow::get_ParryResponse() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::CombatAttackTableRow::get_Countered() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SwGame::CombatAttackTableRow::get_ForceMeterRowName() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_SwGame::CombatAttackTableRow::get_ForcePush() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_SwGame::CombatAttackTableRow::get_ParriedBlockDeplete() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_SwGame::CombatAttackTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.CombatAttackTableRow");
    return result;
}
