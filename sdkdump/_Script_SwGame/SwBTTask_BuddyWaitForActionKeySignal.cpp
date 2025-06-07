#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTTask_BuddyWaitForActionKeySignal.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_BuddyWaitForActionKeySignal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_BuddyWaitForActionKeySignal");
    return result;
}
