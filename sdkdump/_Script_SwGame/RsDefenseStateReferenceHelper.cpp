#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDefenseStateReferenceHelper.hpp"
#include "SwDefenseState.hpp"
_Script_SwGame::SwDefenseState*& _Script_SwGame::RsDefenseStateReferenceHelper::get_CombatState() {
    return *(_Script_SwGame::SwDefenseState**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsDefenseStateReferenceHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsDefenseStateReferenceHelper");
    return result;
}
