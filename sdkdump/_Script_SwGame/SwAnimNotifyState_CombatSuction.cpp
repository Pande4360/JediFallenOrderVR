#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "SwAnimNotifyState_CombatSuction.hpp"
float& _Script_SwGame::SwAnimNotifyState_CombatSuction::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_CombatSuction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_CombatSuction");
    return result;
}
