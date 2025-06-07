#include "..\FUObjectArray.hpp"
#include "BTDecorator_BlackboardBase.hpp"
#include "BTDecorator_IsBBEntryOfClass.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_IsBBEntryOfClass::get_TestClass() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_IsBBEntryOfClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_IsBBEntryOfClass");
    return result;
}
