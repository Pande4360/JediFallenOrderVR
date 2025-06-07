#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsReactionStateReferenceHelper.hpp"
#include "SwReactionState.hpp"
_Script_SwGame::SwReactionState*& _Script_SwGame::RsReactionStateReferenceHelper::get_CombatState() {
    return *(_Script_SwGame::SwReactionState**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsReactionStateReferenceHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsReactionStateReferenceHelper");
    return result;
}
