#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "AITask.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTasks\GameplayTask.hpp"
_Script_AIModule::AIController*& _Script_AIModule::AITask::get_OwnerController() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_AIModule::AITask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AITask");
    return result;
}
