#include "..\FUObjectArray.hpp"
#include "BTDecorator_Blackboard.hpp"
#include "BTDecorator_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_Blackboard::get_NotifyObserver() {
    return (void*)((uintptr_t)this + 0xb9);
}
int32_t& _Script_AIModule::BTDecorator_Blackboard::get_IntValue() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
float& _Script_AIModule::BTDecorator_Blackboard::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_AIModule::BTDecorator_Blackboard::get_StringValue() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_AIModule::BTDecorator_Blackboard::get_CachedDescription() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AIModule::BTDecorator_Blackboard::get_OperationType() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_Blackboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_Blackboard");
    return result;
}
