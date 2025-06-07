#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_HeroCombatSlowDown.hpp"
float& _Script_SwGame::SwAnimNotifyState_HeroCombatSlowDown::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_HeroCombatSlowDown::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_HeroCombatSlowDown");
    return result;
}
