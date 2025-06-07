#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_HeroDisableSlowDown.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_HeroDisableSlowDown::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_HeroDisableSlowDown");
    return result;
}
