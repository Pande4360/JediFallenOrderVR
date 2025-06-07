#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTTask_ActiveFightWait.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_ActiveFightWait::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_ActiveFightWait");
    return result;
}
