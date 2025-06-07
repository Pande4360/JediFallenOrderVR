#include "..\FUObjectArray.hpp"
#include "BTCompositeChild.hpp"
#include "BTCompositeNode.hpp"
#include "BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::BTCompositeNode*& _Script_AIModule::BTCompositeChild::get_ChildComposite() {
    return *(_Script_AIModule::BTCompositeNode**)((uintptr_t)this + 0x0);
}
_Script_AIModule::BTTaskNode*& _Script_AIModule::BTCompositeChild::get_ChildTask() {
    return *(_Script_AIModule::BTTaskNode**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AIModule::BTCompositeChild::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.BTCompositeChild");
    return result;
}
void* _Script_AIModule::BTCompositeChild::get_Decorators() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AIModule::BTCompositeChild::get_DecoratorOps() {
    return (void*)((uintptr_t)this + 0x20);
}
