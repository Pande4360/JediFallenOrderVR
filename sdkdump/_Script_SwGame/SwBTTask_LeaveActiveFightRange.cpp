#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsBTTask_DirectMoveToBase.hpp"
#include "SwBTTask_LeaveActiveFightRange.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_LeaveActiveFightRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_LeaveActiveFightRange");
    return result;
}
