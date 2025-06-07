#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "SwAIAttackTableState.hpp"
#include "SwAnimNotify_AIStartAttackFromTable.hpp"
_Script_SwGame::SwAIAttackTableState*& _Script_SwGame::SwAnimNotify_AIStartAttackFromTable::get_AttackState() {
    return *(_Script_SwGame::SwAIAttackTableState**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_AIStartAttackFromTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_AIStartAttackFromTable");
    return result;
}
