#include "..\FUObjectArray.hpp"
#include "BTTask_Wait.hpp"
#include "BTTask_WaitBlackboardTime.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTask_WaitBlackboardTime::get_BlackboardKey() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_WaitBlackboardTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_WaitBlackboardTime");
    return result;
}
