#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotify_StraightAttackDir.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_StraightAttackDir::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_StraightAttackDir");
    return result;
}
