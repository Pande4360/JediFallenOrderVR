#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_WallCollisionDisabled.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_WallCollisionDisabled::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_WallCollisionDisabled");
    return result;
}
