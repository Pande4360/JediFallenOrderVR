#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_FinishWithResult.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTask_FinishWithResult::get_Result() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_FinishWithResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_FinishWithResult");
    return result;
}
