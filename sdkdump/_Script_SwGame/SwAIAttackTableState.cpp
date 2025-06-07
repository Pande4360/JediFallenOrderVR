#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SwAIAttackTableState.hpp"
#include "SwAttackState.hpp"
void* _Script_SwGame::SwAIAttackTableState::get_StartAttackName() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_Engine::DataTable*& _Script_SwGame::SwAIAttackTableState::get_AttackTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x258);
}
float& _Script_SwGame::SwAIAttackTableState::get_DistanceToCheck() {
    return *(float*)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIAttackTableState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIAttackTableState");
    return result;
}
