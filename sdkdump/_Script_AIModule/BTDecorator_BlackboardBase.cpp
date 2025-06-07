#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_BlackboardBase::get_BlackboardKey() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_BlackboardBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_BlackboardBase");
    return result;
}
