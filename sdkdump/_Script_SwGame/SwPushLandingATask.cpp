#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityTask.hpp"
#include "SwPushLandingATask.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwPushLandingATask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPushLandingATask");
    return result;
}
