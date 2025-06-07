#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_TimeLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTDecorator_TimeLimit::get_TimeLimit() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_TimeLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_TimeLimit");
    return result;
}
