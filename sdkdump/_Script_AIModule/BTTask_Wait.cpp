#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_Wait.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTTask_Wait::get_WaitTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_AIModule::BTTask_Wait::get_RandomDeviation() {
    return *(float*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_Wait::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_Wait");
    return result;
}
