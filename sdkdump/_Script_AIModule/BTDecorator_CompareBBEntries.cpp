#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_CompareBBEntries.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_CompareBBEntries::get_Operator() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::BTDecorator_CompareBBEntries::get_BlackboardKeyA() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AIModule::BTDecorator_CompareBBEntries::get_BlackboardKeyB() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_CompareBBEntries::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_CompareBBEntries");
    return result;
}
