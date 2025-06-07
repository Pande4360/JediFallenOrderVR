#include "..\FUObjectArray.hpp"
#include "AITask.hpp"
#include "AITask_LockLogic.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AITask_LockLogic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AITask_LockLogic");
    return result;
}
