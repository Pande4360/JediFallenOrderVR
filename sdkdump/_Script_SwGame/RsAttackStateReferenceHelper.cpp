#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAttackStateReferenceHelper.hpp"
#include "SwAttackState.hpp"
_Script_SwGame::SwAttackState*& _Script_SwGame::RsAttackStateReferenceHelper::get_CombatState() {
    return *(_Script_SwGame::SwAttackState**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAttackStateReferenceHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAttackStateReferenceHelper");
    return result;
}
