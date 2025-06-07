#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTask_BlackboardBase::get_BlackboardKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_BlackboardBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_BlackboardBase");
    return result;
}
